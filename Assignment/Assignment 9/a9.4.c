#include<stdio.h>
int main()
{
    int a;
    printf("enter your number :");
    scanf("%d",&a);
    int div=a%10;
    if(a<0){
        printf("negative");
    }
    else if(a>0){
        printf("positive\n");
        if(div==0){
            printf("%d is divisible by 10",a);
        }
    }
    else{
        printf("zero");
    }
}
