/* 
Dung con tro cap phat dong nhap mang a gom n ptu 
Xoa cac ptu chan ra khoi mang a (chu y giai phong o nho khi xoa)
In mang ra man hinh 
*/
#include<iostream>

using namespace std;

void nhap(int *&a, int &n){
	cout<<"Nhap n= "; cin>>n;
	a= new int[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuat(int *&a, int &n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void change( int *&a, int &n){
	int demle=0;
	for(int i=0; i<n; i++){
		if(a[i]%2 != 0) demle++;
	}
	int *b=new int[demle];
	int j=0;
	for(int i=0; i<n; i++){
		if(a[i]%2 != 0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0; i<demle; i++){
		cout<<b[i]<<"\t";
	}
}
int main(){
	int *a,n;
	nhap(a,n);
	xuat(a,n);
	cout<<" ";
	change(a,n);
	delete[] a; // giai phong bo nho cua con tro a vi 0 sd nua
	return 0;
}
