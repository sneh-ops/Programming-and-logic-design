#include<stdio.h>
int main(){
    int count=0,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>0)
    {
        n/=10;
        count++;

    }
    printf("%d",count);
    return 0;
}
