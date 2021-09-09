#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    /**
	* Sort an array a of the length n
	*/
    float *area = malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        float p = (float)(tr[i].a + tr[i].b + tr[i].c);
        double a = (double)(p * p - tr[1].a * p - tr[1].b * p - tr[1].c);
        area[i] = (float)a;
    }
    // now use binary sort
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (area[j] > area[j + 1])
            {
                float temp = area[j]; //area
                area[j] = area[j + 1];
                area[j + 1] = temp;

                // change triangle
                triangle tem = tr[j]; //tr is triangle type datatype
                tr[j] = tr[j + 1];
                tr[j + 1] = tem;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}