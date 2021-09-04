/* 
#include <stdio.h>

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int max_of_four(int a, int b, int c, int d)
{
    int max1,max2,max3;
    max1=max(a,b);
    max2=max(max1,c);
    max3=max(max2,d);
    return max3;  
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
*/


#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max1,max2,max;
    if(a>b)
        max1=a;
    else
    max1=b;
    
    if(c>d)
        max2=c;
    else
    max2=d;
    
    if(max1>max2)
        max=max1;
    else
    max=max2;
    
    return max;  
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}