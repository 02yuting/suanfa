#include <stdio.h>
static int cnt = 0;
void move(char a, char c)
{
 cnt++;                    
}
void hanoi(int n, char a, char b, char c)
{
 if (n == 1)              
 {
  move(a, c);            
 }
 else                     
 {
  hanoi(n - 1, a, c, b);  
  move(a, c);           
  hanoi(n - 1, b, a, c); 
 }
}
int main()
{
 int num;
 printf("汉诺塔中圆盘个数"); 
 scanf("%d", &num);    
 hanoi(num, 'A', 'B', 'C');
 printf("递归结果：共需移动%d\n次", cnt);
 return 0;
}

