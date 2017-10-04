#include<stdio.h>

int main(){
    int a, b ,c ,d ;
    scanf("%d\n%d\n%d\n%d",&a, &b, &c, &d);

    // use (a, b) confirm formula
    if(b/a == d/c)
        printf("1");
    else
        printf("0");
    

}