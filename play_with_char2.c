#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s[9];
char sen[15];
scanf("%c",&ch);
printf("%c\n",ch);

scanf("%s",s);
printf("%s\n",s);
scanf("\n");
//below scanf take the \n form here to absorb that we use it.

scanf("%[^\n]c", sen); 
// it take input as string untill \n is not get or you not press enter
printf("%s",sen);

//scanf("%[^\n]%*s", &sen);
     return 0;
}