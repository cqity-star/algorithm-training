/*题目描述
输出n1到n2之间的素数。

输入
两个整数n1，n2

输出
n1,n2之间所有的素数
每5个数输出为一行*/

 #include <stdio.h>

 int main() {
    int n_1;
    int n_2;

    scanf("%d %d",&n_1,&n_2);
    int count = 0;

    for (int num = n_1; num <= n_2; num++) {
        int is_prime = 1; 
        if (num < 2) {
            is_prime = 0; 
        } 
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = 0; 
                    break;
                }
            }
        } 
        if (is_prime) {
            printf("%d ", num);
            count++;
            if (count % 5 == 0) {
                printf("\n"); 
            }
        }
    }
    return 0;
}  