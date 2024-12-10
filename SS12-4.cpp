#include <stdio.h>
int elementMax(int arr[], int size){
    int max=arr[0]; 
    for (int i=1;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={234, 345, 685, 476, 265, 30}; 
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Gia tri lon nhat trong mang la: %d", elementMax(arr, size));
    return 0;
}

