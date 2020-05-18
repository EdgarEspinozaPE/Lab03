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
int Sumaelementos(int *A,int t){
	int s=0;
	for(int i=0;i<t;i++){
		s=s+*A++;
	}
	return s;
}
int sumarecursiva(int *A, int i, int t, int s){
	if(i<t){
	sumarecursiva(A, i+1, t, s + *A++);
	}	
	else{
	return s;
	}
}
int main(){
	int A[5];
	ingresar(A,5);
	int *a=&A[0];
	*a++;
	cout<<*a<<"\n";
	cout<<Sumaelementos(A,5)<<"\n";
	cout<<sumarecursiva(A,0,5,0)<<"\n";
}
