#include <stdio.h>

int main() {
    short line_1 = 1,line_2 = 222,line_7 = 77,line_8 = 88,line_9 = 99;
    unsigned short line_3 = 33333;
    int line_4 = 4444444,line_5 = 555555555;
    long long line_6 = 66666666666;
    printf("          %hd\n",line_1);
    printf("        %hd\n",line_2);
    printf("      %hu\n",line_3);
    printf("    %d\n",line_4);
    printf("  %d\n",line_5);
    printf("%lld\n",line_6);
    printf("         %hd\n",line_7);
    printf("         %hd\n",line_8);
    printf("         %hd\n",line_9);
    //在%后用数字表示宽的。
    printf("%11hd\n",line_1);
    printf("%11hd\n",line_2);
    printf("%11hu\n",line_3);
    printf("%11d\n",line_4);
    printf("%11d\n",line_5);
    printf("%11lld\n",line_6);
    printf("%11hd\n",line_7);
    printf("%11hd\n",line_8);
    printf("%11hd\n",line_9);
}