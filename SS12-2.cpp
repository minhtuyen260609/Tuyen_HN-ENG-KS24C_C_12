#include<stdio.h>
void mang(int arr[], int size){
	for( int i=0; i<size;i++){
		printf("   %d", arr[i]);
		
	} 
} 
int main (){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(int); 
	printf("cac phan tu cua mang la: ");
	mang(arr, size); 
	return 0; 
} 
