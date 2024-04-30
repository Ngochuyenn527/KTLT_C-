/*
Dung con tro cap phat dong: Nhap mang a gom n ptu
Tach ptu am sang mang b, duong sang mang c,
In 3 mang a,b,c ra man hinh 
*/
#include<iostream>
#include<cstdlib>

using namespace std;

void nhap(int *&a, int &n){
	cout<<"Nhap n= "; cin>>n;
	a=new int[n];
	for(int i=0; i<n; i++){
	cout<<"a["<<i<<"]= ";
	cin>>*(a+i);
	}
}
void xuat(int *&a, int &n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void change(int *&a, int &n){
	int d=0, e=0;
	int *b = new int [n];
	int *c = new int [n];
	for(int i=0; i<n; i++){
		if(a[i] < 0){
			b[d]=a[i];
			d++;
		}
		if(a[i] > 0){
			c[e]=a[i];
			e++;
	}
} 
    for(int i=0; i<d; i++){
    	cout<<b[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<e; i++){
    	cout<<c[i]<<" ";
	}
}
int main(){
	int *a,n;
	nhap(a,n);
	xuat(a,n);
	cout<<" ";
	change(a,n);
	return 0;
}
	
