//Tinh ke thua

//Tinh thua ke: ke thua toan bo du lieu cua cai bandau
//muon truy cap phan private can doi private == protected
//chi co tinh ke thua moi truy cap duoc private
// ben ngoai van 0 truy cap duoc vao private
#include<bits/stdc++.h>

using namespace std;
 
class Phu_nu{
	
	protected:
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
		
		
		virtual string choi_nhac_cu(string nhac_cu)
		{
			return "nothing";
		}
		
		
		void add(){
			cout<<xinh_gai<<"\n";
		}
		
		
		void choigame()
		{
			cout<<"choi game gioi"<<"\n";
		}	
};

class Gai_ngoan : public Phu_nu
{
	public:
		Gai_ngoan(const string &ht, bool z)  
		    : Phu_nu(ht, z)	 
		{}
		
		string choi_nhac_cu(string nhac_cu)
		{
			return "nooooooooooo";
		}
		
		void noi_tro()
		{
			cout<<ho_ten<<"dang lam noi tro gioi"<<"\n";
		}
		
};


class Gai_hu : public Phu_nu
{
	public:
		Gai_hu(const string &ht, bool z)  
		    : Phu_nu(ht, z)	 
		{}
		
	 string choi_nhac_cu(string nhac_cu)
		{
			return "aaaaaaaaaaaaa";
		}
		
		void di_bar()
		{
			cout<<ho_ten<<"di bar 0 ve"<<"\n";
		}
	    
};




int main(){

	Gai_ngoan *in4 = new Gai_ngoan( "Phuong ", true);  
    in4->add();
    cout<<in4->choi_nhac_cu("piano")<<"\n";
    in4->noi_tro();

    delete in4;
    cout<<"\n";
    
    
    Gai_hu *in5 = new Gai_hu( "Huyenn ", true);  
    in5->add();
    cout<<in5->choi_nhac_cu("piano")<<"\n";
    in5->di_bar();

    delete in5;
    cout<<"\n";
    
//con tro la kieu Phu_nu nhung object lai la Gai_hu
//duoc dung vi Gai_hu thi chac chan la Phu_nu
//nhung 0 duoc lam nguoc lai vi Phu_nu thi chua chac la Gai_hu
    Phu_nu *in6 = new Gai_hu( "Huyenn ", true); 
    cout<< in6->choi_nhac_cu("piano")<<"\n"; // cout ra kieu cua con tro cua Phu_nu
//nhung object la Gai_hu
//vay muon cout ra cua object can them virtual dang truoc con tro
//line 34
    
	return 0;
}
