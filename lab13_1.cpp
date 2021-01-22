#include <iostream>
using namespace std;

int count=1,position=1;

template <typename T>
void swap(T d[],int pos1,int pos2){
	T temp=d[pos2];
	d[pos2]=d[pos1];
	d[pos1]=temp;
}

template <typename T>
void show(T d[],int size){
	cout << "Pass " << count << ":";
	for (int i=0;i<size;i++) cout << d[i] << " ";
	cout << endl;
	count++;
}

template <typename T>
void max2First (T d[],int end){
	for (int count=position;count>0;count--){
		if(d[count-1]<d[count]){
			swap(d,count-1,count);
		}
	}
	position++;
}

template <typename T>
void insertionSort(T d[],int N){
	for (int i=0;i<N-1;i++){
		max2First(d,i+1);
		show(d,N);
	}
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
