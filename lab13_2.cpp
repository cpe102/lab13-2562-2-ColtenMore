#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double A[N][N]){
	for(int i=0; i<N; i++){
		cout<<"Row "<<i+1<<": ";
		cin>>A[i][0]>>A[i][1]>>A[i][2]>>A[i][3]>>A[i][4];
	}
}

void findLocalMax(const double A[N][N], bool B[N][N]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(A[i][j]>=A[i-1][j] &&A[i][j]>=A[i][j-1] &&A[i][j]>=A[i][j+1] &&A[i][j]>=A[i+1][j]){
				B[i][j]=1;
			}else{
				B[i][j]=0;
			}
		}
	}
}

void showMatrix(const bool B[N][N]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(i>3 or i<1 or j>3 or j<1){
				cout<<"0 ";
			}else{
				if(B[i][j]==1){
					cout<<"1 ";
				}else{
					cout<<"0 ";
				}
			}
		}
		cout<<"\n";
	}
}