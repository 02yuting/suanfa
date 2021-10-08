#include<stdio.h>
int jiecheng(int n)
{
	if(n==1);
	else
	return n*jiecheng(n-1);
}
int main()
{
	int n;
	printf("请输入要计算阶乘的数字：\n");
	scanf("%d",&n);
	n=jiecheng(n);
	printf("计算结果为:%d\n",n); 
}
