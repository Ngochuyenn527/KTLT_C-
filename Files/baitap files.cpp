//Nhap mang a gom n ptu thuc, xuat du lieu cua mang a vao tep
//Dong 1:ghi so n;
//Dong 2: ghi cac ptu cua mang
#include<iostream>
#include<fstream>

using namespace std;
  void nhap(int *&a, int &n, char *tentep){
  	ofstream myfile;
	myfile.open(tentep,ios::out);
	myfile<<n<<endl; // Dong 1
	for(int i=0; i<n; i++){
		myfile<<a[i]<<" "; //Dong 2
	}
	myfile.close();
  }
  int main(){
  	int n;
  	cout<<"Nhap n= "; cin>>n;
  	int *a= new int[n];
  	for(int i=0; i<n; i++){
  		cout<<"a["<<i<<"]= ";
  		cin>>a[i];
	  }
	  nhap(a,n,"Huynne.txt");
  	return 0;
  }

	
	


