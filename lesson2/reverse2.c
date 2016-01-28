#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world";
    int len = strlen(str);
    printf ("the len is %d \n", len);
    
    char temp;
    int j = len-1;
    int i;
    
    for (i=0; i<j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf ("reversed string %s\n", str);
}
