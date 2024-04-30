//sap xep cac so lon dau, so be cuoi, so giua tang dan
#include<iostream>
#include<cstdlib> // de su dung duoc lenh swap(a[i] , a[j])- sap xep 
using namespace std;
	void nhap(int a[], int n){
		for(int i=0; i<n; i++){
			cout<<"a["<<i<<"]= ";
			cin>>a[i];
		}
	}
	
	void sapxep(int a[], int n){
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[i] < a[j]){
					int doi=a[i];
				a[i]=a[j];
				a[j]=doi;    // sap xep giam dan tu lon den be.
				}
			}
		}
		int y=0, z=n;  // y,z là vi tri o nho
		for(int i=1; i<n; i++){
			y++;
			if(a[0] > a[i]) break;
		}
		for(int i=n-2; i>0; i--){
			z--;
			if(a[n-1] < a[i]) break;
		}
		for(int i=y; i<z; i++){
			for(int j=i+1; j<z; j++){
				if(a[i] > a[j]){
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	void xuat(int a[], int n){
		for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
		}
	}
	int main(){
		int n; cout<<"n= "; cin>>n;
		int a[n];
		nhap(a,n);
		sapxep(a,n);
		xuat(a,n);
		return 0;
	}
	


