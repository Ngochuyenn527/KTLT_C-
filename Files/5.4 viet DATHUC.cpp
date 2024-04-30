#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int *a,n;
	cout<<"Nhap n= "; cin>>n;
	a=new int [n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	
// create
	ofstream f;
	f.open("DATHUC.txt", ios::out);
	f<<n<<endl; // dong 1
	for(int i=0; i<n; i++){
		f<<a[i]<<" "; // dong 2
	}
	f<<endl;
	for(int i=0; i<n; i++){
		f<<a[i]<<"x["<<i<<"]"; // dong 3
	    if(i!=(n-1)) f<<" + ";  // neu muon xuat hien dau cong can taoj dieu kien
	}
	f.close();
	
//read and cout
	ifstream ff;
	ff.open("DATHUC.txt", ios::in);
	ff>>n; // dong 1
	cout<<"Kich thuoc mang a la: "<<n<<endl; //cout
	cout<<"Cac phan tu cua mang a la: "; // cout
	for(int i=0;i<n;i++){
		ff>>a[i]; // dong 2
		cout<<a[i]<<" "; // cout
	}
	cout<<endl;
	string s;
	while(getline(ff,s)); // dong 3 duyet tung dong cua ff 
	cout<<"da thuc:"<<s<<endl; // cout
	ff.close();
	
	delete[] a;
	return 0;
	
}
