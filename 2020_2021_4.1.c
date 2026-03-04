/*
描述

2020-2021-2 程序设计基础单开班第一题
小明过年挣了些压岁钱，他打算把这些钱存到银行。银行存款年利率如下，存的时间越长，每年的利率越高。小明可以按不同的年限存款，请帮小明计算到期后的利息和本金。
1年期3%；
2年期3.3%；
3年期3.8%；
4年期4.0%；
5年及以上4.2%。

输入描述

输入两个数，第一个是存款本金，第二个存款年数。

输出描述

输出到期后的利息和总金额，保留两位小数，具体格式见示例输出。

用例输入 1 

100.5 1
用例输出 1 

interest=3.02, total=103.52
*/
#include <stdio.h>

int main() {
    double principal;
    int years;

    if (scanf("%lf %d",&principal,&years) != 2) {
        return 0;
    }

    double rate = 0;
    
    if (years == 1) {
        rate = 0.03;
    }
    else if (years == 2) {
        rate = 0.033;
    }
    else if (years == 3) {
        rate = 0.038;
    }
    else if (years == 4) {
        rate = 0.04;
    }
    else if (years >= 5) {
        rate = 0.042;
    }

    double interest = 0;
    double total = 0;

    interest = principal * rate * years 
+ 0.0000001;
    total = principal + interest;

    printf("interest=%.2f, total=%.2f\n",interest,total);
}