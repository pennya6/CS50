//친구들과 최단거리에 있는 집 구하기
//거리가 가장 가까운집으로 이사
//모든친구들의 집까지 거리합이 최소
#include <stdio.h>
#include <stdlib.h>
//12345 평균 3, 중앙 3 2+1+1+2=6
//2224 평균 2.5 중앙 2 0.5+0.5+0.5+2=3.5/ 2 => 중앙
//중앙값 구하기
double midvalue(int a[],int size) {
	
	double mid;
	double check;
	if (size % 2 == 0) //짝수
	{
		mid = size / 2.0 + 1;
		check = a[(int)mid] + a[(int)mid - 1] / 2.0;
		return check;
	}
	else{
		mid = (size + 1) / 2;
		return a[(int)mid-1];
	}	
}
//평균값
double avg(int a[],int size) {
	int sum = 0;
	
	for (int i = 0;i < size;i++) {
		sum += a[i];
	}
	double avg = (double)sum / size;
	return avg;
}
double minv(int a[], double value,int size) {
	
	double q;
	double sum = 0;
	for (int i = 0;i < size;i++) {
		//절대값 구하기
		q = value - a[i];
		sum += abs(q);
	}
	return sum;
}
int main(void) {
	int a[4] = { 2,2,2,4 };
	int len = sizeof(a) / sizeof(int);
	printf("%d", len);
	double m=midvalue(a,len);
	printf("중앙값 : %.2lf\n",m);
	double avgval = avg(a,len);
	printf("평균값 : %.2lf\n", avgval);
	printf("중앙값 비교 : %.2lf\n", minv(a, avgval,len));
	printf("평균값 비교 : %.2lf\n", minv(a, m,len));
}