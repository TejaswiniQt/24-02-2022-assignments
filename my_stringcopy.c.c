/* Impelement strcpy function */

#include<stdio.h>

int mystring_length(char *src)
{
    int count=0;
    while(*src)
    {
        count++;
        src++;
    }
    return count;
    
}

void my_string_copy(char *src,char *des,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        des[i] = src [i];
    }
    des[i] = '\0';
}

int main()
{
    char src[50];
    char des[50];
    printf("Enter the string:");
    scanf("%[^\n]%*c",src);
    int len = mystring_length(src);
    my_string_copy(src,des,len);
    printf("The copied string is: %s\n",des);
}


