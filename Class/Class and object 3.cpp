#include<bits/stdc++.h>

using namespace std;

class Sinhvien{
	private:
		string msv;
		string ten;
		string lop;
		string truong;
		int tuoi;
		
	public:
		Sinhvien()
		{
			msv = "2022604722";
			ten = "Ngoc Huyenn";
			lop = "KTPM03";
			truong = "Dai Hoc Cong nghiep Hanoi";
			tuoi = 19;
		}
		void choigame(){
			cout<<"choi game gioi"<<"\n";
		}
		
		void inthongtin(){
			cout<<msv<<" "<<ten<<" "<<tuoi;
		}
};
//Tinh ke thua:
class Sinhvien_Ngoan :  Sinhvien // ke thua
{
	public:
		Sinhvien_Ngoan(){
			msv = "2022604722";
			ten = "Ngoc Huyenn";
			tuoi = 19;
		}
		
		void hoc_gioi()
		{
			cout<<"Xuat sac"<<"\n";
		}
		
};


int main(){
	Sinhvien a;
	a.choigame();
	//cout<<a.ten; // 0 cout duoc do private
//Vay de truy cap duoc private => bo sung them 1 phuong thuc trong public
	a.inthongtin();
	
	Sinhvien_Ngoan b;
	b.hoc_gioi();
	return 0;
}
