#include <stdio.h>
/*���Ѱ��� Ÿ���ΰ�?*/
int main()
{
	int num1[]={1,2,3}, num2[]={4,5,6}, N1,N2,N;
	int target = 8;
	
	printf("���� num1���� 1~3�� �� ��° ���ڸ� ���ұ��?\n");
	scanf("%d",&N1);
	printf("\n num2���� 1~3�� �� ��° ���ڸ� ���ұ��?\n");
	scanf("%d",&N2);
	
	N=num1[N2-1]+num2[N1-1];
	if(N==8)
		printf("True");
	else
		printf("False");
}
