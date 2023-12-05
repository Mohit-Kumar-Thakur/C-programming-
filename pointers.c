#include<stdio.h>
void main (){
    int a = 5,*p;
    p = &a;
    printf("%d",a);
    printf("%u",&a);
    printf("%d",*p);
    printf("%d",p);
    printf("%d",&p);
    printf("%d",&*p);
}