#include <stdio.h>
int main()
{
    int first = 0 , middle = 0,last ,search,n,i,array[50];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d",&search);
    last = n-1;
    while(first<=last){
        middle = (first+last)/2;
        if(array[middle]<search){
            first = middle+1;
        }else if(array[middle]== search){
            printf("Element found at position %d",middle+1);
            break;
        }else {
            last=middle-1;
        }
    }
    if(first>last){
        printf("element not found");
    }

    return 0;
}


