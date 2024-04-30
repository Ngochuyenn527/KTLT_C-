#include<bits/stdc++.h>

using namespace std;

class Hoadoncafe{
	private:
		std::string nameofcafe;
		double giatien1kg;
		double khoiluong;
		
	public:
		Hoadoncafe(string n, double t, double m)
		{
		nameofcafe = n;
		giatien1kg = t;
		khoiluong = m;	
		}
		   
		
	void ten()
	{
		cout<<"Ten loai cafe ban chon "<<nameofcafe<<"\n";
	}
	
	void giatien()
	{
		cout<<"gia tien 1kg la: " <<giatien1kg<<"\n";
	}
	
	void klmua()
	{
		cout<<"Khoi luong mua: "<< khoiluong<<"kg"<<"\n";
	}
	
	double sotienphaitra()
	{
		return giatien1kg*khoiluong;
	}
	
	bool ktrakl(double kl)
	{
		return khoiluong > kl;
	}
	
	bool ktragiatien(double gt)
	{
		return giatien1kg*khoiluong > gt;
	}
	
	double giamgia(double x)
	{
		
		return sotienphaitra() * (x/100);
	}
	
	double giasaukhigiam(double x)
	{
		return sotienphaitra() - giamgia(x);
	}
};

int main(){
	double x;
	Hoadoncafe *hd = new Hoadoncafe("Lotte", 20000, 1.5);
	hd->ten();
	hd->giatien();
	hd->klmua();
	cout<<"So tien phai tra la: "<<hd->sotienphaitra()<<"\n";
	cout<<"ktra kl mua > 2 kg:  "<<hd->ktrakl(2)<<"\n";
	cout<<"So phan tram giam la:\n "; cin>>x;
	cout<<"=>giam gia cua hd la: "<<hd->giamgia(x)<<"\n";
	cout<<"=>so tien phai tra sau khi giam la: "<<hd->giasaukhigiam(x)<<"\n";
}
