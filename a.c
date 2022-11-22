#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
 char s[20],c;
 printf("enter a string : ");
 gets(s);
 for(c='a';c<='z';c++)
 {
    count=0;
    for(i=0;s[i];i++)
    {
        if(c==s[i])
        count++;
    }
    if(count>0)
     printf("variable %c is in %d \n",c,count);
 }
}
