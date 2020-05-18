#include<iostream>
using namespace std;
int sizechar(char *a){
	int i=0;
	while(*a!=NULL){
		a++;
		i++;
	}
	return i;
}
int sizecharrecursiva(char *a,int i){
	if(*a++!=NULL)
		sizecharrecursiva(a,i+1);
	else
		return i;
}
int main(){
	char A[]="Que tal";
	cout<<sizechar(A)<<"\n";
	cout<<sizecharrecursiva(A,0);
	return 0;
}
