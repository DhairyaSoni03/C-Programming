#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5
#define FINE_PER_DAY 2.50

char* bookNames[MAX_BOOKS] = {
    "The C Programming Language",
    "Data Structures in C",
    "A Brief History of Time",
    "The Great Gatsby",
    "Moby Dick"
};

int isAvailable[MAX_BOOKS] = {1, 1, 1, 1, 1};

void displayBooks() {
    printf("\n--- Library Book List ---\n");
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("%d. %s - ", i + 1, bookNames[i]);
        if (isAvailable[i] == 1) {
            printf("[Available]\n");
        } else {
            printf("[Borrowed]\n");
        }
    }
    printf("---------------------------\n");
}

int getTotalBooks() {
    return MAX_BOOKS;
}

void borrowBook(char* bookName) {
    int found = 0;
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (strcmp(bookName, bookNames[i]) == 0) {
            found = 1;
            if (isAvailable[i] == 1) {
                isAvailable[i] = 0;
                printf("Successfully borrowed '%s'.\n", bookName);
            } else {
                printf("Sorry, '%s' is already borrowed.\n", bookName);
            }
            break;
        }
    }
    if (found == 0) {
        printf("Sorry, book '%s' not found in the library.\n", bookName);
    }
}

float calculateFine(int daysLate) {
    return daysLate * FINE_PER_DAY;
}

int main() {
    int choice = -1;
    char nameInput[100];
    int days;
    float fine;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Display All Books\n");
        printf("2. Get Total Number of Books\n");
        printf("3. Borrow a Book\n");
        printf("4. Calculate Fine\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        while (getchar() != '\n');

        switch (choice) {
            case 1:
                displayBooks();
                break;
            case 2:
                printf("Total books in library: %d\n", getTotalBooks());
                break;
            case 3:
                printf("Enter book name to borrow: ");
                scanf(" %[^\n]", nameInput);
                borrowBook(nameInput);
                break;
            case 4:
                printf("Enter days overdue: ");
                scanf("%d", &days);
                fine = calculateFine(days);
                printf("Total fine is: \u20B9%.2f\n", fine);
                break;
            case 0:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
printf("\n Name : DHairya Soni \n ID : 25ce119");

    return 0;
}
