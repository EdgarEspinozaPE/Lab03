#include<iostream>
using namespace std;
int sizechar(char A[]){
	int c=0,i=0;
	while(A[i]!=NULL){
		c++;
		i++;
	}
	return c;
}
void concatenar(char *a,char B[]){
	char *b=&B[sizechar(B)];
	while(*a!=NULL){
		*b++=*a++;
	}
		
	
}
int main(){
	char A[]="Que tal";
	char B[15]="Hola";
	concatenar(A,B);
	cout<<B;
	return 0;
}
