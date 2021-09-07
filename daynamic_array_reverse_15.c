#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int loop = num / 2;
    // for terminate the blew loop
    //if num is 6 it give 3 and also give 3 for 7

    int k = 0, j = num - 1, temp; // we swap 1 & last element then i++ & j--
    for (k = 0; k < loop; k++)
    {
        temp = *(arr + k);
        *(arr + k) = *(arr + j);
        *(arr + j) = temp;
        j--;
        //printf("%d ", temp);
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}