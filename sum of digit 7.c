#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,rem,sum=0;
    scanf("%d", &n);
   for(int i=0;i<5;i++)
   {
       rem=n%10;
       sum=sum+rem;
       n=n/10;
   }
   printf("%d",sum);
    return 0;
}