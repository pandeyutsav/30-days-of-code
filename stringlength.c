#include <stdio.h>
int main()
{
    int age;
    char s [50]="helloall";
    int count=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("length is %d",count);
    
}
