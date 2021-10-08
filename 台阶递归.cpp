#include<stdio.h>
int f(int n)
{
	if(n==1)
	return 1;
	if(n==2)
	return 2;
	else
	return f(n-1)+f(n-2);
}
int main()
{  
    int n;
	printf("请输入台阶数: ");
	scanf("%d", &n);
	printf("递归结果为：%d\n",f(n));
	return 0;
}
