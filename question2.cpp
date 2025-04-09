#include <stdio.h>
int negatives(int b[],int,int);
int main()
{
int n[7] = { 6, -3, -4, 9, -11, -2, 5 };
printf("count of negative numbers in array: %d",negatives(n,7,0));



return 0;
}
int negatives(int arr [],int len,int min)

{
 int count=0;
    for (int i = 0;i < len;i++)
{
if (arr[i]<0 )
{
count++;
}
}
return count;
}

