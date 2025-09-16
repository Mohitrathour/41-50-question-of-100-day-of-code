#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
