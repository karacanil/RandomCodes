/* Fibonacci Series without recursion*/

#include<stdio.h>
 
int main()
{
   int n, temp, i;
   int first=0;
   int second=1;
   printf("Enter the number of terms :\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :\n",n);
 
   for ( i = 0 ; i < n ; i++ )
   {
      if ( i <= 1 )
         temp = i;            //c=0 ve c=1 için burasý gecerli next=1
      else
      {
         temp = first + second;
         first = second;     // 2 temp=1 first=1 second=1 ----- 3 temp=2 first=1 second=2 ------- 4 temp=3 first=2 second=3
         second = temp;
      }
      printf("%d\n",temp);
   }
 
   return 0;
}
