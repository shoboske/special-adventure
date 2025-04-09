#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int fish(int x, int y) 
{
    return x+y;
    
    
    
 
    
}
int dog(int x,int y)
{
  return x-y;  
    
    
}
int ran() {
    int HorT = rand() %2;
    
    return HorT;
}
int mert() {
   int loop;
 int OneCount = 0;
 int ZeroCount = 0;

srand(time(NULL));

 for ( loop = 1; loop <= 10; loop++ ) {
 if ( ran() == 0 )
 ZeroCount++;

 else
 OneCount++;

 if ( loop == 10 ) {
 printf( "\n" ); 
 }  
 }
 printf( "\nThe total number of Ones was %d\n", OneCount );
 printf( "The total number of Zeros was %d\n", ZeroCount );
 printf("\n");
}
int micheal(int base,int e) {
    if ( base==0 )
    return 0;
    if (e==0)
    return 1;
    if( e==1)
    return base;
    int product=base;
    for (int loop=1; loop< e; loop++)
    {product=base*product;}
    
return product;
    
    
    
}
int recursive(int base,int e) {
    if ( base==0 )
    return 0;
    if (e==0)
    return 1;
    if( e==1)
    return base;
   
  
//base=2 e=5 
//2*16
//2*8(2,3)
//2*4(2,2)
//2*2 (2,1)
//

    
return base*recursive(base,e-1);
    
    
    
}
int main() {
    srand(time(NULL));
  int num1,num2;
  int sum;
  int dif;
  printf("Please give 2 numbers:");
  scanf("%d%d",&num1,&num2);
  sum=fish(num1,num2);
  printf("Sum of these 2 numbers is:%d",sum);
 dif=dog(num1,num2);
   printf("\n Difference of these 2 numbers is:%d",dif);
   printf("Random number is:%d",ran());
    printf("\n Exponent of these 2 numbers is :%d",micheal(num1,num2));
  printf("\n Exponent of these 2 numbers is :%d",recursive(num1,num2));

  
  
  
  
  
  
  

    return 0;
}




//Write me an application that will ask for two numbers and print the sum and the difference of the two numbers

/* if base=0 return0
if e=0 return1
  if e=1 returnbase
    product=base
   for loop from 1 to e 
   product=base*product
   after for loop
   returnproduct
   */

