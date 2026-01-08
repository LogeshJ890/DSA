#include <iostream>
using namespace std;

int main() {
   int arr[100];
   int n;
   int ele,pos,temp;
   
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
    
    printf("\n Enter element to insert at specific position : ");
    scanf("%d",&ele);
    
    printf("Enter the position to insert element: ");
    scanf("%d",&pos);
    
    int index = pos-1;
    
    if(index <= 0 || index > n-1){
        printf("invalid postion");
 
    }
    else{
       for(int i = n-1; i >= index;i--){
            arr[i+1] = arr[i];
        }
        n++;
        arr[index] = ele;
        }
    
   
   printf("Elements after insertion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
