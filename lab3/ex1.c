#include <stdio.h>
#define MAXLINE 200

int main ()
{
    char s1[200]={'\0'}, s2[200]={'\0'};
    while(scanf("%199s%199s",s1,s2)!=EOF){
       /* Linux:Ctrl+D;*/
       /*Windows:Enter, Ctrl+Z, Enter;*/
    }
}
int strindex(char s[], char t[])
{
    int i, j, k, x;
    x = -1;
    
    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k];j++, k++);
        if (k > 0 && t[k] == '\0')
        x = i;

    }
    return x;
}