#include <stdio.h>
int f[20];
int main()
{
 int i = 0;
 int n = 0;
 printf("��ŵ����Բ�̸���"); 
 scanf("%d", &n);
 f[1] = 1;
 for (i = 2; i <= n; i++)
 {
  f[i] = 1 + f[i - 1] * 2;
 }

 printf("���ƽ���������ƶ�%d\n��", f[n]);
 return 0;
}
