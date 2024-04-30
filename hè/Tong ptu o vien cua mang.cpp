#include<iostream>

using namespace std;

int main(){
	int n,m;
	cout<<"Nhap n= "; cin>>n;
	cout<<"Nhap m= "; cin>>m;
	int **a= new int *[n];
	for(int i=0; i<n; i++){
		    a[i]= new int [m];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
	    }
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int sum1=0;
		for(int j=0; j<m; j++){
			sum1+=a[0][j];
		}

	int sum2=0;
		for(int j=0; j<m; j++){
			sum2+=a[n-1][j];
		}
	
	int sum3=0;
	for(int i=1; i<=n-2; i++){
			sum3+=a[i][0];
	}
	
	int sum4=0;
	for(int i=1; i<=n-2; i++){
			sum4+=a[i][m-1];
	}
	
	int Tong= sum1 + sum2 + sum3 + sum4;
	cout<<"Tong cac ptu o vien cua mang la: "<<Tong;
	return 0;

}
