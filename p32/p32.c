#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseWord(char *str) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    FILE *file;
    char word[100];
    char *filename = "Demo.txt";

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        printf("Please create 'Demo.txt' in the same directory and add some text.\n");
        return 1;
    }

    printf("--- Output: Words from Demo.txt reversed ---\n");

    while (fscanf(file, "%s", word) == 1) {
        reverseWord(word);
        printf("%s ", word);
    }

    printf("\n--------------------------------------------\n");

    fclose(file);
    printf("\n Name : Dhairya Soni \n ID : 25ce119");


    return 0;
}
