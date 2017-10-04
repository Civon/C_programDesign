#include<stdio.h>

int main(){
    int money = 0;
    scanf("%d", &money);
    //judge rule fit 
    if(money < 1 || money >100){
        printf("out of range !");
        return;
    }
    
    // money type arr
    int coinArr[] = {50, 10, 5, 1 };
    int coinIs;
    for(coinIs=0 ; coinIs<=3 ; coinIs++){
        int counter = 0;
        while(money >= coinArr[coinIs]){
            money -= coinArr[coinIs];
            counter++;
        }
        printf("%d\n", counter);
    }
}