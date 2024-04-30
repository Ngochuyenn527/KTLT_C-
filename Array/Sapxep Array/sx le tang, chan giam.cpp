//sx so le len dau, chan cuoi, sx tang dan cho so le, giam dan cho so chan
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
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
	
    int left = 0, right = n;
    for(int i=0; i<n; i++){
    	if(a[i]%2 != 0 ){
    		b[left]= a[i]; // tang dan so le-sx so le be tu dau xuong
    		left++;
		}
		else{
			right--;
			b[right] = a[i]; // giam dan so chan - sx so chan be tu cuoi len 
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<b[i]<<" ";
	}
	delete[]a;
	delete[]b;
	return 0;
}
