//sx so le len dau, chan cuoi, sx tang dan cho so le, giam dan cho so chan
#include<iostream>

using namespace std;

void nhap(int *&a, int &n){
	cout<<"Nhap n = "; cin>>n;
	a = new int[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}

void show(int *a, int n){
	int *b=new int[n];

//le dau
	int y=0, z=n-1;
	for(int i=0; i<n; i++){
		if(a[i]%2 !=0){
			b[y]=a[i];
			y++;
		}
	}

//chan cuoi	
	for(int i=0; i<n; i++){
		if(a[i]%2 ==0){
			b[z]=a[i];
			z--;
		}
	}
	
//sx le tang dan
	for(int i=0; i<y; i++){
		for(int j=i+1; j<y; j++){
			if(b[i]>b[j]){
				int temp = b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	
	for(int i=z; i>=y; i--){
		for(int j=i-1; j>=y; j--){
			if(b[i]>b[j]){
				int tamp = b[i];
				b[i]=b[j];
				b[j]=tamp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<b[i]<<" ";
	}
	
}

int main(){
	int *a,n;
	nhap(a,n);
	show(a,n);
	delete[]a;
	return 0;
}


