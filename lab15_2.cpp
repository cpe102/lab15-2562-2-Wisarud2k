#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *dptr,int n,int m){
	for(int i=0;i<n*m;i++){
		*dptr=rand()%101/100.0;
		dptr+=1;
		
	}
}

void showData(double * data,int x,int y){
	for(int i=1;i<=x*y;i++){
		cout << *data << "\t";
		data+=1;
		if(i%y==0){
			cout << "\n";
		}
		
	}
}

void findColSum(const double* dptr,double *result,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			*(result+j)+=*dptr;
			dptr+=1;
		}
	}
}