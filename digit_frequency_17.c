#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num = 100;
    int times; // frequency of number
    int value; //for which value frequency is checking
    char s[num];
    scanf("%s", s);
    for (int i = 0; i <= 9; i++)
    {
        times = 0;
        value = i + 48;
        //ASCII value of char'0' is 48 ,.. char'1' is 49
        for (int j = 0; j < strlen(s); j++)
        {
            if (value == (int)s[j]) //typecast char into int
            {
                times++; //times is 0 when our codition is true it increase
            }
        }
        printf("%d ", times);
        //printf("value-%d chac -%c times-%d \n",value,s[i],times);
    }
    return 0;
}
