#include <stdio.h>
int jiecheng(int n) {
    int x = n;
    while (n > 1) {
        --n;
        x = x * n;
    }
    return x;
}
int main()
{
    int n;
    printf("请输入要计算阶乘的数字：\n");
   scanf("%d",&n);
    printf("计算结果为：%d\n",jiecheng(n));
    return 0; 
}
