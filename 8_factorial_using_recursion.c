//factorial using recursion

#include <stdio.h>


int f(int n){
    if(n==0)
    return 1;
    else
    return f(n-1)*n;
}

int main()
{
    int r;
    r=f(10);
    printf("%d",r);
    return 0;
}
