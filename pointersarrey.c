#include<stdio.h>

void main ()
{
    int a[6]={3,2,5,7,9,18};
    int *p;
    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",a[0]);
    printf("%d\n",++*p);
    printf("%d\n",++p);
    printf("%d\n",*p++);
    printf("%d\n",*(p++));
    printf("%d\n",(*p)++);
}