#include <stdio.h>

int main(){
    float float_1 = 11.27;
    float float_2 = 11.1234567890;
    printf("float_1: %f\n",float_1);
    printf("float_2: %f\n",float_2);
    double dounle_1 = 11.1234567890;
    printf("double_1: %.10lf\nfloat_2: %.10f",dounle_1,float_2);
}