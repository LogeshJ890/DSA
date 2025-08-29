
#include <stdio.h>
float simpInt(int p,int r,int t)
{
    float si;
    si = (p*r*t)/100.0;
    
    return si;
    
}
int main() {
    
    int p,r,t;
    printf("Enter the value of principle amount: ");
    scanf("%d",&p);
    printf("Enter the value of interest rate: ");
    scanf("%d",&r);
    printf("Enter the value of time period: ");
    scanf("%d",&t);

    float result;
   
    result = simpInt(p,r,t);
    printf("\nResult is %f",result);
    
    return 0;
}
