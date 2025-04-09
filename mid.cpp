#include <stdio.h>
int func(int);


int main()
{
int n=1;
n=func(1);
//for (int i = 1;i <= 4;i++)
//n *= i;
printf("%d", n);
return 0;
}

int func(int num)
{
if(num==4 )
return num;
return num*func(num+1);

}