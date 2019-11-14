#include <stdio.h>
main()
{
    int count = 0;
    int a=1;
    char b;
    int c;
    while((b=getchar())!='/n'){
        c=c*10+(b-'0');
    }
    int d=1;
    while(a!=0){
        a=a<<1;
        d=a&c;
        if(d!=0){
            count++;
        }
    }
    printf("%d\n",count);
}