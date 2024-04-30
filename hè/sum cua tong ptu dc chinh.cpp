//Tinh tong cac ptu thuoc duong cheo chinh cua matrix vuong
#include<iostream>

using namespace std;

int main(){
	int n,m;
	do{
		cout<<"Nhap n= "; cin>>n;
		cout<<"Nhap m= "; cin>>m;
		if(n != m) cout<<"Nhap lai!\n";
	}
	while(n != m);
	
	
	int **a=new int *[n]; // khi muon tao mang 2 chieu can sd con tro tro toi con tro
	for(int i=0; i<n; i++){ // a tro toi lan luot cac ptu a[i]
			a[i]= new int [m]; // cac  ptu a[i] tro lan luot cac ptu m
		}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j]; // nhap mang 2 chieu
		}
	}
	
	// in ra man hinh mang 2 chieu
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int sum=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	
	int sum1=0;
	for(int i=0; i<n; i++){
		for(int j=m-1; j>=0; j--){
			if(j==n-i-1){ 
				sum1+=a[i][j];
			}
		}
}
	cout<<"Tong cua dtreo tu trai->phai = "<<sum<<endl;
	cout<<"Tong cua dtreo tu phai->trai = "<<sum1<<endl;
	cout<<"Tong 2 dtreo= "<<sum+sum1;

	delete []a;
	return 0;
}
