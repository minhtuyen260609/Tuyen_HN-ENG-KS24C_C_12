#include<stdio.h>
int factorial(int n){
	if(n==1){
		return 1; 
	} 
	return n*factorial(n-1); 
}
int main(){
	printf("ket qua gia thua cua so la: %d", factorial(7)); 
} 
 
