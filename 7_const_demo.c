#include <stdio.h>
#include <math.h>

int main(){
    const float PI = 3.14;
    float s;
    s = PI * pow(2,2);
    printf("半径为2的圆的面积是:%.2f\n",s);
    s = PI * pow(8,2);
    printf("半径为8的圆的面积是:%.2f\n",s);
}