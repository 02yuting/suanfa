#include <stdio.h>
int f[20];
int main()
{
 int i = 0;
 int n = 0;
 printf("汉诺塔中圆盘个数"); 
 scanf("%d", &n);
 f[1] = 1;
 for (i = 2; i <= n; i++)
 {
  f[i] = 1 + f[i - 1] * 2;
 }

 printf("递推结果：共需移动%d\n次", f[n]);
 return 0;
}
