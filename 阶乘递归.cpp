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
	printf("������Ҫ����׳˵����֣�\n");
	scanf("%d",&n);
	n=jiecheng(n);
	printf("������Ϊ:%d\n",n); 
}
