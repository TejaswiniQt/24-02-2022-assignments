/* Impelement strcmp function */

#include<stdio.h>

int mystring_compare(char *src,char *des)
{
    int i;
    for(i=0; src[i] != '\0' || des[i] != '\0'; i++)
    {
        if(src[i] != des[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    char src[50];
    char des[50];
    int flag;
    printf("Enter the string1:");
    scanf("%[^\n]%*c",src);
    printf("Enter the string1:");
    scanf("%[^\n]%*c",des);
    flag=mystring_compare(src,des);
    if(flag == 0)
    {
        printf("The strings are same\n");
    }
    else
    printf("The strings are not same\n");
}


