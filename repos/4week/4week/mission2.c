//ģ����� �ִܰŸ��� �ִ� �� ���ϱ�
//�Ÿ��� ���� ����������� �̻�
//���ģ������ ������ �Ÿ����� �ּ�
#include <stdio.h>
#include <stdlib.h>
//12345 ��� 3, �߾� 3 2+1+1+2=6
//2224 ��� 2.5 �߾� 2 0.5+0.5+0.5+2=3.5/ 2 => �߾�
//�߾Ӱ� ���ϱ�
double midvalue(int a[],int size) {
	
	double mid;
	double check;
	if (size % 2 == 0) //¦��
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
//��հ�
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
		//���밪 ���ϱ�
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
	printf("�߾Ӱ� : %.2lf\n",m);
	double avgval = avg(a,len);
	printf("��հ� : %.2lf\n", avgval);
	printf("�߾Ӱ� �� : %.2lf\n", minv(a, avgval,len));
	printf("��հ� �� : %.2lf\n", minv(a, m,len));
}