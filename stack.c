#include<stdio.h>

#define MAXVAL 100

static int sp = 0;
static double val[MAXVAL];

void push(double f){
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("stack full, can't push %g\n", f);
}

double pop(void){
    if(sp > 0)
        return val[--sp];
    else{
        printf("stack empty, can't pop");
        return 0;
    }
}
