#include <stdio.h>
#include <stdlib.h>
void swap(int arr[],int i,int j){
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void printArray(int arr[],int n){
	int i;
	for(i=1;i<=n;i++)printf("%d ",arr[i]);
}

void heapify(int arr[],int i,int size){
	int l,r,smallest;
	l=2*i;
	r=2*i+1;
	smallest=i;
	
	if(l<=size&&arr[l]<arr[i])smallest=l;
	if(r<=size&&arr[r]<arr[smallest])smallest=r;
	if(smallest!=i){
		swap(arr,smallest,i);
		heapify(arr,smallest,size);
	
	}
}

void buildMinHeap(int arr[],int n){
	int i;
	for(i=n/2;i>0;i--){
		heapify(arr,i,n);
	}
}

void heapsort(int arr[],int n){
	int i=0;
	buildMinHeap(arr,n);
	for(i=n;i>0;i--)
	{
		swap(arr,1,i);
		heapify(arr,1,i-1);
	}
}


int main(){
	int arr[11]={0,11,2,9,13,57,25,17,1,90,3},size;
	system("cls");
	size=sizeof(arr)/sizeof(arr[0]);
	printf("Unorted array : ");
	printArray(arr,size-1);
	heapsort(arr,size-1);
	printf("\n\nSorted array : ");
	printArray(arr,size-1);
	printf("\n\n");
	return 0;
}