#include<iostream>
using namespace std;
void ingresar(int *A,int t){
	for(int i=0;i<t;i++){
		cin>>*(A+i);
	}
}
void mostrar(int *A,int t){
	for(int i=0;i<t;i++)
		cout<<*(A+i)<<" ";
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void ordenar(int A[],int t){
	int *a=&A[0];
	int *b=&A[1];
	for(int i=0;i<t-1;i++){
		a=&A[0];
		b=&A[1];
		for(int j=0;j<t-i;j++){
			if(*a>*b)
				swap(*a++,*b++);
			else
			a++;
			b++;
		}
	}
}
int main(){
	int A[5];
	ingresar(A,5);
	mostrar(A,5);
	cout<<"\n";
	ordenar(A,5);
	mostrar(A,5);	
	return 0;
}
