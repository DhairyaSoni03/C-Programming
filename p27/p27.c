#include <stdio.h>

int main() {
    int n;
    long long t1 = 1, t2 = 1, nextTerm;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of months.\n");
        return 1;
    }

    printf("Savings pattern for %d months:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        printf("lld ", nextTerm);
    }

    printf("\n");
printf("\n Name : Dhairya Soni \n ID : 25ce119");

    return 0;
}
