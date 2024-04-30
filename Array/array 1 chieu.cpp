#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int a[n];
	do{
		cout<<"'Nhap so luong ptu cua mang = ";
		cin>>n;
	}
	while(n<1 || n>100);
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Mang vua nhap la: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
