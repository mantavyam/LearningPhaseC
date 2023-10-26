// C Program to find profit and loss
#include <stdio.h>

int main() {

    int profit, loss, selling_price, cost_price;
    printf("Please Enter the Cost Price:");
    scanf("%i", &cost_price);
    printf("Please Enter the Selling Price:");
    scanf("%i", &selling_price);
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;
    if(profit > loss){
        printf("You've made a profit of %i", profit);
    }
    else{
        printf("You've made a loss of %i", loss);
    }

    return 0;
}
