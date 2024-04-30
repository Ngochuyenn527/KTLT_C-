// Nhap mang a gom n so nguyen . Sao chep cac so le cua mang dat vao cuoi mang
#include<iostream>
#include<cstdlib>

using namespace std;

void nhap( int *&a, int &n){
	cout<<"Nhap n= "; cin>>n;
	a= new int[n]; 
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>*(a+i);
	}
}
void xuat(int *&a, int &n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}
void change( int *&a, int &n){
	int m=n;
	for(int i=0; i<m; i++){
		if(a[i]%2 !=0){
			a =(int*)realloc(a,(n+1)*sizeof(int));
			a[n]=a[i];
			n++;
		}
	}
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}
int main(){
	int *a, n;
	nhap(a,n);
	xuat(a,n);
	cout<<" ";
	change(a,n);
	return 0;
}

