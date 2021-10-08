#include <stdio.h>
int F( int n, int first, int second) {
   if (n < 1) {
       return 0;
   }

   if (n == 1) {
       return first;
   }
   else if (n == 2) {
       return second;
   }
   else {
       return F(n - 1, second, first + second);
   }
}
int main()
{
    int n;
   scanf("%d",&n); 
   printf("递推结果为：%d\n",F(n, 1, 1));
   return 0;
} 
