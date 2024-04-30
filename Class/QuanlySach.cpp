//Xay dung ung dung quan ly Sach
//Sach bao gom ten sach, gia ban, nam xuat ban, tac gia
//Tac gia bao gom ten tac gia, ngay sinh
//Ngay sinh bao gom ngay thang nam

//in ra ten 1 quyen sach
//ktra sach cung nam xuat ban
//tinh gia sach sau khi giam x%
#include<bits/stdc++.h>

using namespace std;

class Sach{
	private:
		string name;
	    double giaban;
	    int namxuatban;
	    string tacgia;
		
	public:
	    Sach(string n, double t, int y, string tg)
	{
		this->name = n;
		this->giaban = t; 
		this->namxuatban = y;
		this->tacgia= tg;
		
	}
	
	void ten()
	{
		cout<<"ten sach la: " <<name<<"\n";
	}
    
    bool ktragia(Sach other)
    {
    	return this->giaban == other.giaban;
	}
	
	double giasaukhigiam(double x)
	{
		return giaban - giaban*(x/100);
	}
};

class TacGia{
	private:
		string name;
		int ngaysinh;
	public : 
	 TacGia(string n, int ns)
	 : name(n), ngaysinh(ns)
	 {
	 }
};

class Ngay{
	private:
		int day,month, year;
	public:
		Ngay(int d,int m, int y)
		:day(d), month(m), year(y)
		{
		}
		
};

int main(){
	Sach *book1 = new Sach("Harry Potter", 150000, 1990, "Don's know");
	Sach *book2 = new Sach("Conan", 150000, 1999, "Don's know");

	book1->ten();
    cout<<"Ktra gia ban:";
    cout<<"book1 vs book2: "<< book1->ktragia(book2);

	int x;
	cout<<"Nhap so phan tram giam gia"<<"\n";
	cin>>x;
	cout<<"Gia sach sau khi giam gia la: "<<book1->giasaukhigiam(x);
	return 0;
}
