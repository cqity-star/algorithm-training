#include <stdio.h>

int main() {
    char mike_class = 'A';
    float mike_height = 187.5;
    float mike_weight = 68;
    char mike_sex = 'M';
    char amy_class = 'B';
    float amy_height = 174;
    float amy_weigt = 55.8;
    char amy_sex = 'F';

    printf("Mike {Class %c, %.2fcm, %.2fkg, %c}\n",mike_class,mike_height,mike_weight,mike_sex);
    printf("Amy {Class %c, %.2f, %.2f, %c}\n",amy_class,amy_height,amy_weigt,amy_sex);
}