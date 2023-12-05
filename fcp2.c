#include <stdio.h>

int main()
{
 int a[3][3],b[3][3],c[3][3];
 int m,n,p,q,i,j,k;
 
 for(i=0;i<3;i++)
	 {
 		 for(j=0;j<3;j++)
 			 {
  				 a[i][j]=(i+1)*3+9*j*((i+1)*3);
   
  				 printf("%d ",a[i][j]);
			 }
  		 printf("\n");
 	}
   printf("\n");
   
   
  for(i=0;i<3;i++)
	  {
 		for(j=0;j<3;j++)
 			 {
   				 b[i][j]=(i+1)*3*6+(i+j+1)*2*(j+1);
 				 printf("%d ",b[i][j]);
  			}
  		 printf("\n");
	 }
   printf("\n");
   
   
 for(i=0;i<3;i++)
 	{
 		for(k=0;k<3;k++)
  			{
             	c[i][k] = 0;
  				for(j=0;j<3;j++)
  					{
  						c[i][k] +=a[i][j]*b[j][k] ;
                    }
  				printf("%d ",c[i][k]);
             }
   printf("\n");
 }
 
 
  return 0;
}