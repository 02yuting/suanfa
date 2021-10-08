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
 printf("��ŵ����Բ�̸���"); 
 scanf("%d", &num);    
 hanoi(num, 'A', 'B', 'C');
 printf("�ݹ����������ƶ�%d\n��", cnt);
 return 0;
}

