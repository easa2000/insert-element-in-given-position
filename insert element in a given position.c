// Insert an array of element in a given position
#include<stdio.h>
void main(){
    int n,i,num,pos,arr[20];
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements:  ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the number to be insert: ");
    scanf("%d",&num);
    printf("\n Enter the position at which the number has to be enetered: ");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    n++;
    printf("\n The array after insertion of %d is ",num);
    for(i=0;i<n;i++){
        printf("\t %d",arr[i]);
    }
}
