#include <stdio.h>

int findMaxProfit(int prices[], int size) {
    if (size < 2) {
        return 0;
    }

    int minBuyPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] < minBuyPrice) {
            minBuyPrice = prices[i];
        } else if (prices[i] - minBuyPrice > maxProfit) {
            maxProfit = prices[i] - minBuyPrice;
        }
    }
    return maxProfit;
}

int main() {

    int prices1[] = {20, 25, 15, 30, 10, 50};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Test Case 1 Profit: %d\n", findMaxProfit(prices1, size1));

    int prices2[] = {10, 8, 6, 4, 2};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);
    printf("Test Case 2 Profit: %d\n", findMaxProfit(prices2, size2));

    int prices3[] = {100, 180, 260, 310, 40, 535, 695};
    int size3 = sizeof(prices3) / sizeof(prices3[0]);
    printf("Test Case 3 Profit: %d\n", findMaxProfit(prices3, size3));

    int prices4[] = {30, 20, 25, 40, 25, 50, 35};
    int size4 = sizeof(prices4) / sizeof(prices4[0]);
    printf("Test Case 4 Profit: %d\n", findMaxProfit(prices4, size4));

    int prices5[] = {5, 5, 5, 5, 5};
    int size5 = sizeof(prices5) / sizeof(prices5[0]);
    printf("Test Case 5 Profit: %d\n", findMaxProfit(prices5, size5));
printf("\n Name : Dhairya soni \n ID : 25ce119");

    return 0;
}
