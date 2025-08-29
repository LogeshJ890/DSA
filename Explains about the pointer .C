#include <stdio.h>

int main() {
   
   int p = 300;
   int *s ;
   
   s = &p;
   
   
    printf("Value of the variable P: %d\n",p);  //prints 300
    printf("Address of the variable p :%d\n",&p); // prints address of p
    printf("The value stored in the variable s :%d\n",s);  //prints value of the s
    printf("The Address of the vaeiable s : %d\n",&s);  // prints the address of the s
    printf("The value stored in the address of the variable s :%d",*s); // prints the value stored in the address
}
