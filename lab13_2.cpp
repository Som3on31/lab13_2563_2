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
	for (int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for (int j=0;j<N;j++) cin >> source[i][j];
	}
}


void findLocalMax(const double s[][N], bool result[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if (i==0 || j==0 || i==N-1 || j==N-1) result[i][j]=0;
			else if (s[i][j]>=s[i-1][j] && s[i][j]>=s[i+1][j] && s[i][j]>=s[i][j-1] && s[i][j]>=s[i][j+1]) result[i][j]=1;
			else result[i][j]=0;
		}
	}
}


void showMatrix(const bool source[][N]){
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++) cout << source[i][j] << " ";
		cout << endl;
	}

}
