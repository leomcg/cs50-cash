#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float change;
    do {
    change = get_float("Change: ");
    } while (change <= 0);
    int cents = round(change * 100);
    int total = change * 100;
    int coins = 0;
   
    for(int i = 0; i <= total; i++) {
        if (cents - 25 >= 0) {
            cents = cents - 25;
            coins++;
        } else if (cents - 10 >= 0) {
            cents = cents - 10;
            coins++;
        } else if (cents - 5 >= 0) {
            cents = cents - 5;
            coins++;
        } else if (cents - 1 >= 0) {
            cents = cents - 1;
            coins++;
        }
    }
    printf("%i\n", coins);
}