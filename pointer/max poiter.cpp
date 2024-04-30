/*Nhap mang a gom n ptu thuc, sd con tro va cap phat bo nho dong.
=> Tim ptu lon nhat va lon thu 2 trong mang */
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n;cout<<"Nhap n= ";cin>>n;
	int *a= new int[n]; // or int *a=(int*)calloc(n,sizeof(int));
	for(int i=0; i<n; i++){
			cout<<"a["<<i<<"]= ";
			cin>>*(a+i); // *(a+i) == a[i];
		}
	int max1, max2;
		max1=a[0];
	for(int i=0; i<n; i++){
			if(max1< *(a+i) ) max1= *(a+i);
		}
		
	int i=0;
	while(a[i] == max1 ) i++;
	for(int i=0; i<n; i++){
		if(max2< *(a+i) && *(a+i) != max1 ) max2= *(a+i);
	}
		

	cout<<"max1= "<<max1<<endl;
	cout<<"max2= "<<max2;
	return 0;
	}
