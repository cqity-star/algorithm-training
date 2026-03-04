#include <stdio.h>

int main() {
    double hours;
    double rate;
    double salary = 0;

    scanf("%lf %lf",&hours,&rate);

    if (hours < 0 || hours > 168) {
        printf("input is wrong!");
    }
    else {
        if (hours <= 40) {
            salary = hours * rate;
        }
        else if (hours <= 60) {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }
        else {
            salary = 40 * rate + 20 * 1.5 *  rate + (hours - 60) * 3 * rate;
        }
        printf("%g",salary);
    }
}