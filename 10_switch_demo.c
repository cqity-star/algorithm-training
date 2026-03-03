#include <stdio.h>

int main(){
    int category = 2;
    float price = 299.9;

    switch (category){
/*
如果商品类别是电子产品：
价格小于 500 元，输出 “电子产品价格较低，无优惠”。
价格在 500 元到 1000 元之间，输出 “电子产品可享受 5% 的优惠”。
价格大于 1000 元，输出 “电子产品可享受 10% 的优惠”。
*/
        case 1:
            if (price < 500){
                printf("电子产品产品价格较低，无优惠\n");
            }
            else if (price <= 1000){
                printf("电子产品可享受 5%% 的优惠\n");
            }
            else {
                printf("电子产品可享受 10%% 的优惠\n");
            }
            break;
/*
如果商品类型是服装：
价格小于 200 元，输出 “服装价格较低，无优惠”。
价格在 200 元到 500 元之间，输出 “服装可享受 8% 的优惠”。
价格大于 500 元，输出 “服装可享受 15% 的优惠”。
*/
        case 2:
            if (price < 200){
                printf("服装价格较低，无优惠\n");
            }
            else if (price <=500){
                printf("服装可享受 8%% 的优惠\n");
            }
            else {
                printf("服装可享受 15%% 的优惠\n");
            }
            break;    
        default:
            printf("找不到商品类别\n");
    }    
}