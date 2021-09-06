/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);        //number form start printing pattern
    int size = (2 * n) - 1; //after analysis pattern
    int arr[size][size];
    int start = 0, end = size - 1; //coz loop start from 0 so use size-1

    while (n != 0)
    {

        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if ((i == start) || (j == start) || (i == end) || (j == end))
                //
                {
                    arr[i][j] = n;
                    printf("if %d at%d%d\n", arr[i][j], i, j);
                    // to check values at point
                }
                else
                {

                    arr[i][j] = 0;
                    printf("el %d at%d%d\n", arr[i][j], i, j);
                    // to check values at point
                }
            }
        }
        start++; // coz we have go one step forword from start
        end--;   // coz we have go one step backword from end
        n--;     // after get these position we decrease the number
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}