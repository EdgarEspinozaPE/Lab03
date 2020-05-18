#include<iostream>
using namespace std;
void ingresar(int *A,int t){
	for(int i=0;i<t;i++){
		cin>>*A++;
	}
}
void mostrar(int *A,int t){
	for(int i=0;i<t;i++)
		cout<<*A++<<" ";
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void reversevector(int A[],int t){
	int *a=A;
	int *b=(a+t-1);
	for(int i=0;i<t/2;i++){
		swap(a++,b--);
	}
}
void reverserecursivo(int *a,int *b,int t){	
	if(b<a){
		return;
	}
	swap(a++,b--);
	reverserecursivo(a,b,t-1);		
}
int main(){
	int A[4];
	int *a=&A[0];
	int *b=&A[3];
	ingresar(A,4);
	mostrar(A,4);
	cout<<"\n";
	reversevector(A,4);
	mostrar(A,4);
	cout<<"\n";
	reverserecursivo(a,b,4);
	mostrar(A,4);
	return 0;
}
