/* Input data will contain a single string of small latin letters and few spaces.
Answer should contain the string of the same length with the same characters but in reverse order.
Example:
input data:
four score and seven years ago
answer:
oga sraey neves dna erocs ruof*/

// get length of string
// start the forloop from the end
// put values in array
// when I see space, I reverse the array, print it, print the space
// when I see the end of loop
// I reverse the array and print it and exit

#include <stdio.h>
#include <string.h>
#
// char *reverse(char *str)
// {
//     int size = strlen(str);
//     char reversed[size];
//     int c;
//     for (c = 0; c <= size; c++)
//     {
//         reversed[c] = str[size - 1 - c];
//         printf("%c\n", reversed[c]);
//     }
//     return reversed;
// }

char *strrev(char *str)
{
    char *end, *wrk = str;
    {
        if(str && *str)
        {
            end = str + strlen(str) - 1;
            while(end > wrk)
            {
                char temp;

                temp = *wrk;
                *wrk++ = *end;
                *end-- = temp;
            }
        }
    }
    return str;
}

int main()
{
    char s[30] = "four score and seven years ago";
    printf("String before reverse : %s\n", s);
    
    int length = strlen(s);
    char temp[5] = "";
    int lengthOfTemp = 0;
    int i = length -1;

    for(i; i >= 0; i--)
    {
        if(s[i] != ' ')
        {
            // add to array
            temp[lengthOfTemp] = s[i];
            lengthOfTemp++;
        }
        else {
            strrev(temp);
            printf("%s", temp);
            memset(temp, '\0', sizeof(temp)); 
            lengthOfTemp = 0;
            

            if (i != 0)
            {
                printf(" ");
            }
        }
    }
}