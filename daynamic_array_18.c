#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int *total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int **total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    // use calloc coz we need intilize number of book to 0
    // number of book on each shelf
    total_number_of_books = calloc(total_number_of_shelves, sizeof(int));

    // int** total_number_of_pages is a 2D array
    // like total_number_of_pages[shelves][pages]
    // below we allocate memory for pages put on which shelves (or num of selves)
    // it store the address of 1D array thats why we use ""sizeof(int*)""
    total_number_of_pages = malloc(total_number_of_shelves * sizeof(int *));

    // now make array for number of pages
    // above we allocate memory of int pointer
    // now we give a 1100 size array to each shelf
    for (int i = 0; i < total_number_of_shelves; i++)
    {
        total_number_of_pages[i] = calloc(1100, sizeof(int));
    }

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    while (total_number_of_queries--)
    {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1)
        {
            // * Process the query of first type here.

            int shelf, pages;
            scanf("%d %d", &shelf, &pages);

            // we have to do put given pages at given shelf .
            // and return no. of books at shelf

            //to incease the no of book at given shelf
            total_number_of_books[shelf]++;

         // go to the shelf where we have inset pages of 2D array
            // and give address to book
            total_number_of_pages[shelf]=realloc(total_number_of_pages[shelf],total_number_of_books[shelf]*sizeof(int));
           
           *(total_number_of_pages[shelf]+total_number_of_books[shelf]-1)=pages;
           //...... while(*(book) != 0) //find index where is no pages
           //......  book++;
             
            // now after loop  we are on index where is no pages
            // so initilize pages
            //*book=pages;
        }
        else if (type_of_query == 2)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        }
        else
        {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books)
    {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++)
    {
        if (*(total_number_of_pages + i))
        {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages)
    {
        free(total_number_of_pages);
    }

    return 0;
}