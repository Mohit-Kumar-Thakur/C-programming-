#include<stdio.h>
int main(){
    float a;
   
    printf("Enter any value:");
    scanf("%f",&a);
     int c;
    c=a;
    float b = a-c;
    printf("the fractional part is:%d",b);
    return 0;
}