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
    printf("������Ҫ����׳˵����֣�\n");
   scanf("%d",&n);
    printf("������Ϊ��%d\n",jiecheng(n));
    return 0; 
}
