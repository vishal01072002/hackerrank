#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
  // its for increasing order
  //if first string a is greater than b it return true or(greater than -1)
  return strcmp(a,b)>0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
  // its for decreasing order
  //if first string a is greater than b it return less than zero(0)
  return strcmp(a,b)<=0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    //sort according no. of character in string
    int c1=0,c2=0;  //for count no of char in both string
    
    //to store value if char is present
    int arr1[26]={0},arr2[26]={0};
    
    //store length
    int n1 =strlen(a);
    int n2 =strlen(b);
    
    //which char present in string we initilize that place in arr with 1
    for(int i=0;i<n1;i++)
    {
        arr1[ a[i]-'a']=1;
    }
    
    for(int i=0;i<n2;i++)
    {
        arr2[ b[i]-'a']=1;
    }
    
    // now we count no. of char if 0 false elseif 1 true
    for(int i=0;i<26;i++)
    {
        if(arr1[i])
          c1++;
        if(arr2[i])
          c2++;
    }
    
    if(c1 != c2)
      return c1>c2;  //that mean if c1>c2 so it return 1 else 0
    else
      return strcmp(a,b)>0;
    //that mean if strcmp(a,b) is greater than 0 so it return 1 else 0
    //or it retun accending order of string
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a) != strlen(b))
      return strlen(a) > strlen(b);  
      //that mean if length not equal
      // and length of a is greater than b so it return 1 else 0
    else
      return strcmp(a,b)>0;
    
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
 //we sort string in increasing order
 for(int i=1;i<len;i++)
 {
   int j=i;
   char* ptr=arr[i];
     
   // now apply insertion sort algo to sort string
   while(j>0)  
   {
       // already defined comparing func
       if((*cmp_func)(arr[j-1],ptr))
       {
           arr[j]=arr[j-1];
       }
       else
       break;
       j--;
   }
   arr[j]=ptr;
 }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}