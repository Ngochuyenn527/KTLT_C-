#include<bits/stdc++.h>

using namespace std;

float d(float x1, float y1, float x2, float y2){
	float kc = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return kc;
}

float min_d(int n, int x[], int y[]){
	float min = d(x[0],y[0],x[1],y[1]);
	for(int i=0; i<n; i++){
		for(int j=i+1; j<=n-1; j++){
			if(min>d(x[i],y[i],x[j],y[j])){
			    min = d(x[i],y[i],x[j],y[j]);
			}
		}
	}
	return min;
}
int main(){
	int n;
	int x[n], y[n];
	cout<<"Nhap so diem : ";
	cin>>n;

	// i la 1 toa do diem
	for(int i=0; i<=n-1; i++){
		cout<<"toa do diem thu "<<i<<" la: ";
		cin>>x[i]>>y[i];
	}
	for(int i=0; i<=n-1; i++){
		for(int j=i+1; j<n; j++){
		cout<<"=>Kc cua toa do diem "<<i<<" vs "<<j<<" la: "<<d(x[i],y[i],x[j],y[j])<<"\n";
		}
	}
	cout<<"Kc min giua cac toa do diem la : "<<min_d(n,x,y);
	
	return 0;
}

