#include <stdio.h>

int main() {
    // 1. 这里的变量类型一定要用 double，防止输入小数时出错
    double price; 
    double discount = 0;
    double pay = 0;

    // 2. scanf 读取 double 需要用 %lf
    while (scanf("%lf", &price) != EOF) {
        
        if (price < 1000) {
            discount = 1;
            pay = price;
        } 
        // 3. 逻辑判断：使用 < 来划分区间
        // 题目说 "2000以上" (含2000) 是下一档，所以 < 2000 属于当前档
        else if (price < 2000) { 
            discount = 0.95;
            pay = discount * price;
        } 
        else if (price < 3000) {
            discount = 0.9;
            pay = discount * price;
        } 
        else if (price < 5000) {
            discount = 0.85;
            pay = discount * price;
        } 
        else {
            // 5000 及以上
            discount = 0.8;
            pay = discount * price;
        }

        // 4. 注意 spelling: discount
        // 注意格式: %g 会自动去掉多余的0，符合题目要求
        // 注意换行: \n
        printf("discount=%g,pay=%g\n", discount, pay);
    }
    
    return 0;
}