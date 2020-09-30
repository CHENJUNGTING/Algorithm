#include <stdio.h>
#define var 5
int swap(int array[],int j,int i,int smallest){
	array[j] = array[i];
	array[i] = smallest;
}
int main(){
	int array[var];
	int j = 0;
	int smallest;
	for(int i = 0; i < var ; i++) scanf(" %d",&array[i]);
	//selection soft
	for(int i = 0 ;i < var - 1 ; i++){
		j = i;
		smallest = array[i];
		// find smallest
		for(int x = i + 1;x < var; x++){
			if(smallest > array[x]){
				smallest = array[x];
				j = x;
			}
		}
		swap(array,j,i,smallest);
	}
	for(int i=0;i<var;i++){
		printf("%d ",array[i]);
	}
}
