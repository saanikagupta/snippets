#include<stdio.h>
#include<math.h>
int main()
{ 
    int testcase;
    
    int b,ni,y;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++)
    {   b=0;
        ni=0;
        y=0;
         int k;
                scanf("%d" ,&k);
             
                
            int q = (k-1)/26 ;
            int n = k-1-(26*q);
            long int z = pow(2,q);
         
  

         if(n<2)
            b = 1;
        else if(n<10)
         ni = 1;
        else
            y = 1;
     
        printf("\n %ld %ld %ld ",z*b,z*ni,z*y);
        
    }
return 0;
}
