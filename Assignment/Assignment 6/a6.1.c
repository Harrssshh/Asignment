#include<stdio.h>
int main()
{
    char shape;
    int ch;
    float r,a,d,c,side,l,b;
    printf("Enter s for square : r for rectangle : c for circle : t for sum of triangle side :");
    scanf("%c",&shape);
    if(shape=='s' || shape=='r' || shape=='c'){
        printf("Enter 1 for area : 0 for perimeter : ");
        scanf("%d",&ch);
        }
    if(shape=='s'){
        if(ch==1){
            printf("enter side :");
            scanf("%f",&side);
            printf("Area of square is : %f",side*side);
        }
        else if(ch==0){
            printf("enter side :");
            scanf("%f",&side);
            printf("area of square is : %f",4*side);
        }
        else{
            printf("enter a valid number(1-0");
        }
    }
   
    else if(shape=='c'){
        if(ch==1){
            printf("enter radius :");
            scanf("%f",&r);
            printf("area of circle is : %f",3.14*r*r);
        }
        else if(ch==0){
            printf("enter radius :");
            scanf("%f",&r);
            printf("perimeter of circle is : %f",2*3.14*r);
        }
        else{
            printf("enter a valid number(1-0");
        }
    }
     else if(shape=='r'){
        if(ch==1){
            printf("enter lenth :");
            scanf("%f",&l);
            printf("enter breath :");
            scanf("%f",&b);
            printf("area of rectangle is : %f",l*b);
        }
        else if(ch==0){
            printf("enter lenth :");
            scanf("%f",&l);
            printf("enter breath :");
            scanf("%f",&b);
            printf("area of rectangle is : %f",2*(l+b));
        }
        else{
            printf("enter a valid number(1-0");
        }
    }
    else if(shape=='t'){
        printf("enter sides :");
        scanf("%f",&a);
        scanf("%f",&d);
        scanf("%f",&c);
        printf("sum of sides is : %f",a+d+c);
    }
    else{
        printf("enter a valid character ");
    }
    return 0;
}
