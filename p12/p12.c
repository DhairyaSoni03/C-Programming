
#include <stdio.h>

int main()
{
    for (int book_id = 1; book_id <= 50; book_id++) {
        if (book_id % 5 == 0) {
            printf("Book ID: %d (Special Edition)\n", book_id);
        } else {
            printf("Book ID: %d\n", book_id);
        }
    }
    return 0;
}
