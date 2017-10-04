#include <stdio.h>
int parseInt(char);

int main()
{
    // read in to array
    char cArr[4];
    scanf("%c%c%c%c", &cArr[0], &cArr[1], &cArr[2], &cArr[3]);
    // parse and count each
    int res= 0;
    int i, x ;
    for(i=3;i>=0;i--){
        res += parseInt(cArr[i]);
    }

    printf("%d", res);
}

int parseInt(char c)
{
    //char minus char get number
    return  c -'0';
}
