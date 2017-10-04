#include<stdio.h>

int main(){
    int i ;
    scanf("%d", &i);
    int bool = -1;


    bool = i%15 != 0 && (i%3 == 0 || i%5 ==0);
    printf("%d", bool);
}
