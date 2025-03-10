#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int num;
	for(int i=1; i<N; i++){
		for(int k=0; k<N; k++){
			if(k==i){
				cout<<"["<<d[k]<<"] ";
				num=d[k];
			}else{
				cout<<d[k]<<" ";
			}
		}
		cout<<"=> ";

		for(int j=0; j<N; j++){
			if(d[j]<	d[i]){
				swap(d,j,i);
			}
		}
		
		for(int l=0; l<N; l++){
			if(d[l]==num){
				cout<<"["<<d[l]<<"] ";
				num++;
			}else{
				cout<<d[l]<<" ";
			}
		}
		cout<<"\n";
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
