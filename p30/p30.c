#include <stdio.h>

void bubbleSort(float *arr, int n) {
    float temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: \"No items to sort.\"\n");
        return 1;
    }

    float prices[n];
    printf("Enter the prices:\n");
    for (int i = 0; i < n; i++) {
        int result = scanf("%f", &prices[i]);
        if (result != 1) {
            printf("Error: \"Invalid input for price. Please enter numeric values only.\"\n");
            return 1;
        }
    }

    bubbleSort(prices, n);

    printf("Sorted Prices: ");
    for (int i = 0; i < n; i++) {
        printf("%.1f", prices[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
printf("\n Name : Dhairya Soni \n ID : 25ce119 ");

    return 0;
}
