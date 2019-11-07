#include <stdio.h>
int main()
{
    unsigned int a;
    a = 1;
    while(a>0){
        a++;
    }
    printf("%u\n",a-1);
    unsigned int b,c;
    b = a-1;
    c = 0;
    do{
        b=b/10;
        c++;
    }
    while(b>0);
    printf("%d\n",c);
    return 0;
}