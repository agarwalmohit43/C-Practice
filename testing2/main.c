#include <stdio.h>

union abc
{
    int a;
    int b;
};
int main(){
    union abc s;
    int q=5,w=6;
    s.a=q;
    s.b=6;
s.a=q;

    printf("%d ",s.b);
    return 0;
   }
