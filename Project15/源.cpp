#include<stdio.h>
int main()
{
	int n;
	printf("please input a number:");
	scanf("%d", &n);
	if (n % 5 == 0)
		if (n % 3 == 0)
			printf("%d can be devide exactly by 3 and 5\t", n);
		else printf("WRONG/t");
	else printf("WRONG");
	return 0;
}