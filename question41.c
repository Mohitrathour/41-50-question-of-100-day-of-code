#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;

    middle = (num % (int)pow(10, digits)) / 10;
    result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}