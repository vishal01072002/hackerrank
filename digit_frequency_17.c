  // used dynamic memory allocation
  // complexity is o(n)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 100, k;
    int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //initilaze with 0 for further increment
    //char s[n];
    char *s;
    s = (char*)malloc(100 * sizeof(char)); 
    // or s = malloc(1024 * sizeof(char)); 
    //s = realloc(s, strlen(s) + 1);
    scanf("%s", s);
   
        // ASCII value of char'0' is 48 ,.. char'1' is 49
        //we want if s[j] is equal 0 so we get 0 (0 ASCII value 48)
        //and s[j] is equal 1 so we get 1 (1 ASCII value 49)..... so on
        // so we substract 48 from s[j] ....k=s[j]-48;
        for (int j = 0; j < strlen(s); j++)
        {
            k = s[j] - 48; // or k=s[j]-'0';
            if (k >= 0 && k <= 9)
            {
                num[k] = num[k] + 1; //we increase the value of k index
            }
        }
    for (int j = 0; j <= 9; j++)
    {
        printf("%d ", num[j]);
    }
    return 0;
}

/*
   //not used dynamic memory allocation
   // complexity is o(n^2)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    Enter your code here. Read input from STDIN. Print output to STDOUT 
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

*/