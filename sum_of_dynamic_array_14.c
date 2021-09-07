#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int sum =0;
    int n;
    scanf("%d\n",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", (&arr[i]) ); //  (arr + i) ) or (&arr[i])
    }
    
    for(int i=0;i<n;i++){
        sum=sum + (*(arr + i) );  //  *(arr + i) ) or *(&arr[i])
    }
    
    printf("%d",sum);
    return 0;
}