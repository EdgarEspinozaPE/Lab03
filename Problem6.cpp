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
void copy(char *a,char *b){
	while(*a!=NULL){
		*b++=*a++;
	}
}
int main(){
	char A[]="Hola";
	char B[]="Que tal";
	copy(A,B);
	cout<<B;
	return 0;
}
