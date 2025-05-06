/*nput data will contain a single string of small latin letters and few spaces.
Answer should contain the string of the same length with the same characters but in reverse order.
Example:
input data:
four score and seven years ago
answer:
oga sraey neves dna erocs ruof*/



#include "string.h"
#include "stdio.h"
char* reverse(char* str)
{
    int size=strlen(str);
char reversed[size];
int c;
for (c = 0; c <= size; c++)
{
reversed[c]=str[size-1-c];
printf("%c\n",reversed[c]);



}
return reversed;

   


}

int main()
{
char s[30] = "Hello";
printf("enter a common earth phrase:");
//scanf(s);
printf("String before reverse : %s\n", s);
printf("String after reverse : %s\n",  reverse(s));
} 