#include <stdio.h>

struct Book {
    int accessionNum;
    char title[100];
    char author[100];
    float price;
    int isIssued;
};

int main() {
    struct Book book1;

    printf("--- CHARUSAT Library - Enter Book Details ---\n");

    printf("Enter Accession Number: ");
    scanf("%d", &book1.accessionNum);

    while (getchar() != '\n');

    printf("Enter Title: ");
    scanf("%[^\n]", book1.title);

    while (getchar() != '\n');

    printf("Enter Author Name: ");
    scanf("%[^\n]", book1.author);

    printf("Enter Price: \u20B9");
    scanf("%f", &book1.price);

    printf("Is the book issued? (1 for Yes, 0 for No): ");
    scanf("%d", &book1.isIssued);

    printf("\n--- Book Details Saved ---\n");
    printf("Accession Number: %d\n", book1.accessionNum);
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Price: \u20B9%.2f\n", book1.price);

    if (book1.isIssued == 1) {
        printf("Status: Issued\n");
    } else {
        printf("Status: Available\n");
    }
printf("\n Name : Dhairya Soni \n ID : 25ce119");

    return 0;
}
