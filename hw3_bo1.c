#include<stdio.h>

int main(){
    int i ;
    int res = 0;

    scanf("%d", &i);
    while(i != 0){
        res += i%10;
        i /= 10;
    }
    printf("%d", res);
}