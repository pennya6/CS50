//친구들과 최단거리에 있는 집 구하기
//거리가 가장 가까운집으로 이사
//모든친구들의 집까지 거리합이 최소
#include <stdio.h>
//12345 평균 3, 중앙 3 2+1+1+2=6
//2224 평균 2.5 중앙 2 0.5+0.5+0.5+2=3.5/ 2 => 중앙값

//중앙값 구하기
int midvalue(int a[],int size) {
	int mid;
	if (size % 2 == 0) //짝수
	{
		mid = size / 2 + 1;
		return a[mid-1];
	}
	else{
		mid = (size + 1) / 2;
		return a[mid-1];
	}	
}
int main(void) {
	int a[5] = { 2,2,2,4 };
	int m=midvalue(a, 5);
	printf("Daivd 위치: %d\n",m);
}
