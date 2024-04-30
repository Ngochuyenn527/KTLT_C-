//Private all
#include<bits/stdc++.h>

using namespace std;

//OOP tuan theo quy luat phai private all du lieu trong class
//nen ta se cho string and bool -> private
//private - nguoi khac se 0 sua duoc 
class Phu_nu{
	
	private:
		bool xinh_gai;
		string ho_ten;
		
	public:
		
		//Constructor - ham tao - ten trung voi ten cua class
		//tao qua new
		Phu_nu(const string &ht, bool z)  
		    : ho_ten(ht), xinh_gai(z)	 
		{}
		
		
		//Distructor - ham huy -  ten trung voi ten cua class
		//huy bang delete
		~Phu_nu()
		{
			cout<<"Chung ta chia tay di "<<ho_ten<<"\n";
		}
		
		
		string choi_nhac_cu(string nhac_cu)
		{
			return "";
		}
		
		
		void add(){
			cout<<xinh_gai<<"\n";
		}
		
		
		void choigame()
		{
			cout<<"choi game gioi"<<"\n";
		}
		
		
		
	
};

int main(){

	Phu_nu *i4 = new Phu_nu( "Phuong ", true);  // int *a = new int
//	cout<< i4->ho_ten<<"\n";  bao loi vi ho_ten thuoc phan private
	
//	cout<< i4->xinh_gai <<"\n"; bao loi vi xinh_gia thuoc phan private
//Vay de truy cap duoc private => bo sung them 1 phuong thuc trong public
    i4->add();
    i4->choi_nhac_cu("piano");
    i4->choigame();
    delete i4;
 
	return 0;
}
