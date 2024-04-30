//Cai dat lop SINHVIEN gom cac thuoc tinh msv, hoten, tuoi, diem 
//va cac phuong thuc NHAP va XUAT
#include<bits/stdc++.h>

using namespace std;

class SINHVIEN{
	private:
		string msv;
		string hoten;
		int tuoi;
		float diem;
	
	public:
		void nhap(){
		cout<<"Nhap thong tin"<<"\n";
		cout<<"Nhap msv: "<<"\n";
		cin>>msv;
		cout<<"Nhap ho ten: "<<"\n";
		fflush(stdin);
		getline(cin, hoten);
		cout<<"Nhap tuoi: "<<"\n";
		cin>>tuoi;
		cout<<"Nhap diem: "<<"\n";
		cin>>diem;
		}
		
	
	void xuat(){
		cout<<"\n________________________\n";
		cout<<"Ma sv : "<<msv<<"\n";
		cout<<"Ho Ten : "<<hoten<<"\n";
		cout<<"Tuoi : "<<tuoi<<"\n";
		cout<<"Diem : "<<diem<<"\n";
	}
};

int main(){
	SINHVIEN a;
	a.nhap();
	
	cout<<"\n";
	SINHVIEN b;
	b.nhap();
	
	a.xuat();
	b.xuat();
	return 0;
}
