#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cout<<"Nhap n = "; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	int k;
	cout<<"Nhap so ptu cua day con k = "; cin>>k;
	int summax = 0;
	for(int i=0; i<=n-k; i++){
		int sum = 0; // reset sum = 0
		for(int j=i; j<i+k; j++){
			sum += a[j];	
		}
			if(sum > summax ) summax = sum;
	}

	cout <<"Day con max co gtri la: "<<summax;
	return 0;
	
}
