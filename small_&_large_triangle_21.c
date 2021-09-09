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
    float *area = malloc(n * sizeof(float)); //we can also use int

    for (int i = 0; i < n; i++)
    {
        float p = (float)((tr[i].a + tr[i].b + tr[i].c) / 2.0);

        // /2.0 is compulsary coz int gives you int and float gives float
        double a = (double)(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
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

                // change triangle by swaping there value
                triangle tem = tr[j]; //tr is triangle type datatype
                tr[j] = tr[j + 1];
                tr[j + 1] = tem;

                /* int tem=tr[j].a;   //values of tr type datatype is int
                tr[j].a=tr[j+1].a;
                tr[j+1].a=tem;
                tem=tr[j].b;   
                tr[j].b=tr[j+1].b;
                tr[j+1].b=tem;
                tem=tr[j].c;   
                tr[j].c=tr[j+1].c;
                tr[j+1].c=tem;
                */
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