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


void inputMatrix(double source[][N]){
	int a,b,c,d,e;
	for (int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		cin << a << b << c << d << e;
		for (int j=0;j<N;j++) source[i][j]=a;
	}


}

void findLocalMax(const double source[][N], bool result[][N]){




}

void showMatrix(const bool source[][N]){
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++) cout << source[i][j] << " ";
		cout << endl;
	}

}
