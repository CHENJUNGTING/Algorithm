#include <stdio.h>
#define n 5
void printf(int array[]){
	for(int i = 0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
void InsertionSort(int *array){
	for(int i = 1;i<n;i++){
		int tmp = array[i];
		int j = i - 1;
		while((j >= 0) && tmp < array[j]){
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j+1] = tmp; 
	}}
int main(){
	int array[n] = {5,7,4,6,3};
	InsertionSort(array);
	printf(array);
}
