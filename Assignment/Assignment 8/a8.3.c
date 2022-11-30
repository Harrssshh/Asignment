#include<stdio.h>
int main(){
    int num;
    printf("enter your number :");
    scanf("%d",&num);
    int div2=num%2;
    int div3=num%3;
    if(div2==0 && div3==0){
        printf("%d is divislible by both 2 and 3",num);
    }
    else {
        printf("%d is not divisible by 2 and 3",num);
    }
    return 0;
}
