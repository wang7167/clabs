#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char[]);
void ungets(char[]);
void push(double);
double pop(void);
int main(int argc, char *argv[] )
{
    char s[MAXOP];
    double op2;
    while(--argc>0){
        ungets(" ");
        ungets(*++argv);
        switch (getop(s)){
            case NUMBER:
            push(atof(s));
            break;
            case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
            default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    printf("\t%.8g\n",pop());
    return 0;
}