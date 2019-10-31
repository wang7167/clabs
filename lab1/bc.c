#include <studio.h>

#include <stdlib.h>

int main(void){

    int n;

    int a=0;

    int b[100];

    int count=0;

    

    printf("enter a positive four-digitinteger:\n");

    scanf("%d",&n);

    printf("binary system:");

    while(n){

        b[a]=n%2;

        a++;

        n/=2;

    }

    for(int j=a-1;j>=0;j--){

        printf("%d",b[j]);

        if(b[j]==1){

            count++;

           }

        printf("\n\"1\"the number of times%d\n",count);

        system("pause");

        return  0;    

 }