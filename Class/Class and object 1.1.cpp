//Ly thuyet
#include<bits/stdc++.h>
//Class : dinh nghia 1 class - giong struct
//object : khai bao, khoi taoj 1 object
//private: chua cac thuoc tinh
//public: chua cac phuong thuc
//1 class =thuoc tinh + phuong thuc
using namespace std;

/*struct Phu_nu{
	Phu_nu(const string &ht, bool z)
	  //or : ho_ten(ht), xinh_gai(z)
	{                     
		ho_ten = ht;    
		xinh_gai=z;
	}
	string ho_ten;
	bool xinh_gai;
*nhung class co public and private. Nen  string va bool viet tach ra ngoai
    
}; 
*/


class Phu_nu{
	private:
		bool xinh_gai;
		
		
	public:
		string ho_ten;
		
		//Constructor - ham tao - ten trung voi ten cua class
		//tao qua new
		Phu_nu(const string &ht, bool z) // truyen tham chieu 
		    : ho_ten(ht), xinh_gai(z)	 // const chong thay doi du lieu goc truyen
		{//or
		    /* this->ho_ten = ht; 0 can sd this cung duoc
			   this->xinh_gai = z; */
		}
		
		
		//Distructor - ham huy -  ten trung voi ten cua class
		//huy bang delete
		~Phu_nu()
		{
			cout<<"Chung ta chia tay di "<<ho_ten<<"\n";
		}
		
		//nhap ten nhac cu tra ve am thanh
		string choi_nhac_cu(string nhac_cu)
		{
			return "";
		}
		
	
		
};

int main(){

	Phu_nu *i4 = new Phu_nu( "Phuong ", true);  // int *a = new int
	cout<< i4->ho_ten <<"\n"; 
//	cout<< i4->xinh_gai <<"\n"; bao loi vi xinh_gia thuoc phan private
 
    i4->choi_nhac_cu("piano");
	
	delete i4;
}
