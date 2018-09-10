#include <stdio.h>
#include <math.h>


int problem1() {
    int sum = 0;
    for (int i = 0; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int problem5() {
    return (int) (pow(2, 4) * pow(3, 2) * 5 * 7 * 11 * 13 * 17 * 19);
}

int problem6() {
    int squareOfSums = 0, sumOfSquares = 0;
    for (int i = 1; i <= 100; ++i) {
        squareOfSums += i;
        sumOfSquares += i * i;
    }
    return (squareOfSums * squareOfSums) - sumOfSquares;
}

int main() {
    printf("Problem 1 solution: %d \n", problem1());
    printf("Problem 5 solution: %d \n", problem5());
    printf("Problem 6 solution: %d \n", problem6());
}

