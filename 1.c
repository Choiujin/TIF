#include <stdio.h>
/*더한값이 타겟인가?*/
int main()
{
	int num1[]={1,2,3}, num2[]={4,5,6}, N1,N2,N;
	int target = 8;
	
	printf("먼저 num1에서 1~3중 몇 번째 숫자를 더할까요?\n");
	scanf("%d",&N1);
	printf("\n num2에서 1~3중 몇 번째 숫자를 더할까요?\n");
	scanf("%d",&N2);
	
	N=num1[N2-1]+num2[N1-1];
	if(N==8)
		printf("True");
	else
		printf("False");
}
