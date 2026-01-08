#include <iostream>
using namespace std;

int main() {
   int arr[100];
   int n;
   int key;
   
   printf("Enter the no of elements:");
   scanf("%d",&n);
   
   for(int i=0;i<n;i++){
       printf("Enter element %d :",i+1);
       scanf("%d",&arr[i]);
   }
   
    printf("Elements entered: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n Enter element to insert at End: ");
    scanf("%d",&key);
    
    arr[n] = key;
    n++;
   
   printf("Elements after insertion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
