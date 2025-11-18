#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *summary;
    int initial_size = 50;
    int new_size = 200;

    summary = (char *)calloc(initial_size, sizeof(char));

    if (summary == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    printf("Enter the initial short summary (max %d chars):\n", initial_size - 1);
    fgets(summary, initial_size, stdin);

    if (strchr(summary, '\n') == NULL) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    } else {
        summary[strcspn(summary, "\n")] = 0;
    }

    printf("\nInitial summary stored:\n%s\n", summary);

    char *temp_summary = (char *)realloc(summary, new_size * sizeof(char));

    if (temp_summary == NULL) {
        printf("Memory reallocation failed!\n");
        free(summary);
        return 1;
    }

    summary = temp_summary;

    printf("\nMemory reallocated. Enter the new, expanded summary (max %d chars):\n", new_size - 1);
    fgets(summary, new_size, stdin);

    summary[strcspn(summary, "\n")] = 0;

    printf("\nUpdated summary:\n%s\n", summary);

    free(summary);
printf("\n Name : DHairya soni \n ID : 25ce119");

    return 0;
}
