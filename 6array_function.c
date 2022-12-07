#include <stdio.h>

/*void printArray(int *ptr, int n)
{
    for (int i = 0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
}*/

void printarray(int ptr[], int n){
    for(int i=0; i<n; i++){
            printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2]=5555;
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }

}
int main()
{
    int arr[] = {1,234,44,55,64,67,23,88};
    printarray(arr, 8);
    printf("%d", arr[2]);
    return 0;
}