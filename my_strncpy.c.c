/* Impelement strncpy function */

#include<stdio.h>

void my_strncpy(char *src,char *des,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        des[i] = src [i];
    }
    des[i] = '\0';
}

int main()
{
    char src[50];
    char des[50];
    int n;
    printf("Enter the string:");
    scanf("%[^\n]%*c",src);
     printf("Enter the number of bytes to be copy:");
    scanf("%d",&n);
    my_strncpy(src,des,n);
    printf("The copied string is: %s\n",des);
}


