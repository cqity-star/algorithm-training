#include <stdio.h>

int main(){
    int user_type = 2;
    double price = 180;//商品价格
    double pay;//支付金额

    if (user_type == 1) {
        if (price > 100)
        {
           pay = price * 0.95;
        }
        else {
            pay = price;
        }
        
    }
    else if (user_type == 2){
        if (price > 200)
        {
            pay = price *0.9;
        }
        else {
            pay = price *0.97;
        }
    }
    else {
        printf("该用户类型无效\n");
    }
    
    printf("最终支付金额为：%.2lf",pay);
}