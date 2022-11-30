#include<stdio.h>
int main()
{
    int a;
    printf("enter year :");
    scanf("%d",&a);
    int div=a%4;
    if(div==0){
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",div);
    }
    return 0;
}
