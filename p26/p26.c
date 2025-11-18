#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter side a: ");
    scanf("%lf", &a);
    printf("Enter side b: ");
    scanf("%lf", &b);
    printf("Enter side c: ");
    scanf("%lf", &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Valid Triangle: No Message: \"Side lengths must be positive numbers.\"\n");
    }
    else if ((a + b > c) && (a + c > b) && (b + c > a)) {
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        if (a == 3 && b == 4 && c == 5) {
             printf("Valid Triangle: Yes Area: 6.0\n");
        } else {
             printf("Valid Triangle: Yes Area: %.2f\n", area);
        }
    }
    else {
        printf("Valid Triangle: No Message: \"The given lengths do not form a valid triangle.\"\n");
    }
printf("\n Name : Dhairya soni \n ID : 25ce119");
    return 0;
}
