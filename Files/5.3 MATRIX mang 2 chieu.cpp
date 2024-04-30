//Tao 1 tep tin matrix.txt
//Dong 1 chua 2 so nguyen n,m la so dong, so cot cua matrix
//n dong tiep theo, moi dong chua m so nguyen la cac ptu cua matrix
//Doc du lieu cua matrix.txt len 1 mang 2 chieu. Hien thi mang 2 chieu
#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
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
	ofstream f; // write tep cua mang 2 chieu
	f.open("matrix.txt", ios::out);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			f<<a[i][j]<<" ";
		}
	f<<endl;
	}
	f.close();
	
	ifstream f1("matrix.txt", ios::in); // read tep cua mang 2 chieu
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			f1>>a[i][j];
		}
	}
	f1.close();
// in ra man hinh mang 2 chieu
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
// delete nhung con tro:  a[i] va a
    for(int i=0; i<n; i++){
    	delete[] a[i];
	}
	delete []a;
	return 0;

	
}


