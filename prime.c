#include <stdio.h>
int main(){

   int num,i,count,min,max;
   scanf("%d%d",&min,&max);
    num = min;
    while(num<=max){

         count = 0;
         i=2;

         while(i<=num/2)
         {
            if(num%i==0)
            {
                count++;
                break;
            }
             i++;
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);

         num++;
    }
  
   return 0;
}
