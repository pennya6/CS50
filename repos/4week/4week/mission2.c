//ģ����� �ִܰŸ��� �ִ� �� ���ϱ�
//�Ÿ��� ���� ����������� �̻�
//���ģ������ ������ �Ÿ����� �ּ�
#include <stdio.h>
//12345 ��� 3, �߾� 3 2+1+1+2=6
//2224 ��� 2.5 �߾� 2 0.5+0.5+0.5+2=3.5/ 2 => �߾Ӱ�

//�߾Ӱ� ���ϱ�
int midvalue(int a[],int size) {
	int mid;
	if (size % 2 == 0) //¦��
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
	printf("Daivd ��ġ: %d\n",m);
}
