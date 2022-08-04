#include <stdio.h>

int sum(int n){
    if(n==0)
        return 0;
      
            return sum(n-1)+n;
        
    
}

void main ()
{
int r;
r = sum(95);
printf ("%d\n", r);
} 
 
