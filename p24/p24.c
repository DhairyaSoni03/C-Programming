#include <stdio.h>

int my_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void my_strrev(char str[]) {
    int start = 0;
    int end = my_strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char dest[], char src[]) {
    int dest_len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
}

void my_toupper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

void my_tolower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

void my_capitalize(char str[]) {
    int i = 0;
    int inWord = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            inWord = 1;
        }
        i++;
    }
}

int main() {
    char note1[200];
    char note2[100];
    int choice;
    int result;

    do {
        printf("\n--- Alex's Note Taker ---\n");
        printf("1. Calculate Note Length\n");
        printf("2. Reverse a Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy a Note\n");
        printf("5. Concatenate (Combine) Notes\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Capitalize Each Word\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        while (getchar() != '\n');

        switch (choice) {
            case 1:
                printf("Enter note: ");
                scanf(" %[^\n]", note1);
                printf("Length: %d\n", my_strlen(note1));
                break;
            case 2:
                printf("Enter note: ");
                scanf(" %[^\n]", note1);
                my_strrev(note1);
                printf("Reversed: %s\n", note1);
                break;
            case 3:
                printf("Enter first note: ");
                scanf(" %[^\n]", note1);
                printf("Enter second note: ");
                scanf(" %[^\n]", note2);
                result = my_strcmp(note1, note2);
                if (result == 0) {
                    printf("The notes are identical.\n");
                } else {
                    printf("The notes are different.\n");
                }
                break;
            case 4:
                printf("Enter note to copy: ");
                scanf(" %[^\n]", note1);
                my_strcpy(note2, note1);
                printf("Copied note: %s\n", note2);
                break;
            case 5:
                printf("Enter first note (this one will be modified): ");
                scanf(" %[^\n]", note1);
                printf("Enter second note (to add): ");
                scanf(" %[^\n]", note2);
                my_strcat(note1, note2);
                printf("Combined: %s\n", note1);
                break;
            case 6:
                printf("Enter note: ");
                scanf(" %[^\n]", note1);
                my_toupper(note1);
                printf("Uppercase: %s\n", note1);
                break;
            case 7:
                printf("Enter note: ");
                scanf(" %[^\n]", note1);
                my_tolower(note1);
                printf("Lowercase: %s\n", note1);
                break;
            case 8:
                printf("Enter note: ");
                scanf(" %[^\n]", note1);
                my_capitalize(note1);
                printf("Capitalized: %s\n", note1);
                break;
            case 0:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);
    printf("\n Name : Dhairya soni \n ID : 25ce119");


    return 0;
}
