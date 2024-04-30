//Nhap mang a gom n so nguyen . Sao chep cac so chan cua mang dat vao cuoi mang
#include <iostream>
#include<cstdlib> // khai bao cho realloc
using namespace std;
void nhap(int *&a, int &n ){
	cout<<"Nhap n= "; cin>>n;
	a = new int[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i]; // or cin>>*(a+i);
	}
}

void xuat(int *&a, int &n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void change(int *&a, int &n){
	int m=n; // viec n++ thay doi se lam m thay doi => ta gan m=n de tranh viec laaxn voi n ban dau
	for(int i=0; i<m; i++){
		if( a[i] % 2 == 0 ){
			a=(int*)realloc(a, (n+1)*sizeof(int)); // <Con tro> = (<Kieu con tro>*) realloc(<Con tro>, <Kích thuoc moi>); 
                                                // <kich thuoc moi>   =  (n+1)*sizeof(int)
			a[n]=a[i]; 
			n++; // tang len 1 o tiep theo
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}
}
int main(){
	int *a,n;
	nhap(a,n);
	xuat(a,n);
	cout<<endl;
	change(a,n);
	return 0;
}
