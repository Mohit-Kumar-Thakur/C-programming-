#include <stdio.h>
#include <unistd.h>

int main() {

int num_sec;
int i;

 printf("enter the no. of secends for countdown");

scanf("%d",& num_sec);

for (i= num_sec; i>=0; i--)
{

printf("\rcountdown; %d, i");
sleep(1);
}

printf("\n\n times up\n");


return 0;

}