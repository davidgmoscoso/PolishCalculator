#include<stdio.h>
#include<stdlib.h>
#include "calc.h"


#define MAXOP 100


int main(){

    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF){
        switch (type) {
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
            if(op2 != 0)
                push(pop() / op2);
            else
                printf("error: division para cero\n");
            break;
        case '\n':
            printf("\t%g\n", pop());
            break;
        default:
            printf("comando desconocido: %s", s);
            break;
        }
    }
    return 0;
}














