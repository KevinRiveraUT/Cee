#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b, *p;
    p = &a;
    p++;

    if(p == &b)
        printf("%p == %p", p, &b);
    else
        printf("%p != %p", p, &b);
}