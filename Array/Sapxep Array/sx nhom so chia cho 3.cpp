//sx tang dan moi nhom lan luot so chia het cho 3, chia 3 du 1, chia 3 du 2 

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int *a = new int[n];
	int *b = new int[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
// sx mang tang dan
    for(int i=0; i<n; i++){
    	for(int j=i+1; j<n; j++){
    		if(a[i]>a[j]){
    			int temp = a[i];
    			a[i] = a[j];
    			a[j]= temp;
			}
		}
	}
	
	int left = 0;
	for(int i=0; i<n; i++){
		if(a[i]%3==0){
			b[left] = a[i];
			left++;
		}	
	}
	for(int i=0;i<n;i++){
		if(a[i]%3==1) {
			b[left]=a[i];
			left++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]%3==2) {
			b[left]=a[i];
			left++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
	delete[] a;
	delete[] b;
	return 0;
}
