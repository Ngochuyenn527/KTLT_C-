#include<iostream>
#include<string>

using namespace std;
struct Idol{
	Idol(string ht, int v1, float cc)
	   // : ho_ten(ht), vog_mot(v1), chieu_cao(cc) DUNG TRONG CLASS
	{
		ho_ten = ht;
		vong_mot = v1;
		chieu_cao = cc;
	} 
	string ho_ten;
	int vong_mot;
	float chieu_cao;
	
	void choigame(){
		cout<<"choi game gioi";
	}
};
   

int main(){ 
//Cach 1:
	Idol Jennie =Idol("jennie", 85, 1.60);
	Idol Lisa = Idol("lisa", 90, 1.65);
    Jennie.choigame();
    COUT<<"\n";

/*Cach 2:
    Idol a[2];
    a[0]=Idol("jennie", 85, 1.60);
    a[1]=Idol("lisa", 90, 1.65);
    for(auto idol :a){
    	cout<<idol.ho_ten<<", "<<idol.vong_mot<<", "<<idol.chieu_cao<<endl;
	}
*/


	// do phuc tap cua thuat toan O(n) - So buoc duyet - chi qtam den bac lon nhat cua ham phu thuoc vao n;

    int max=0;
    int n=8;
    int a[n]={87,90,85,88,86,84,83,93};
    for(int i=0; i<n; i++){
    	if(a[i]>max) max=a[i]; // can duyet n lan  -> O(n)
	}
	cout<<"Max= "<<max<<endl;
	
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){ // sx mang tang dan
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	} // Co N*(N-i) = N^2 - N*i buoc  -> O(n^2)
	
	
	//Gsu mang da sx tang dan
	cout<<"Max= "<<a[n-1]<<endl; // can duyet 1 buoc -> O(1)
	
	
	
	//lOGARIT - trong IT log == log co so 2
	//gsu ta co mang da sx
	int m=8;
	int b[m]={79,80,81,82,83,84,85,86};
	int x=85; // tim ptu bat ky
	for(int i=0; i<m; i++){
		if(b[i]==x){
			cout<<i<<endl; // in ra vi tri
			break;
		}
	} 
/* => de giam cac buoc tim xuong toi thieu ta sd pp "chia de tri"- chia doi mang 

tim ptu 85
      b[m]={79,80,81,82,      83,84,      *85,      86}; => O(n) = y //3
8/2/2/2 = 8 / 2^3 = n / 2^y 
                => log co so 2 hai ve
                => log n = y
                => O(n) = log n
 */
	int y;
	cout<<"Nhap gtri can tim y = "; cin>>y;
	int l=0,r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
			return m;
		else if(x>a[m])
			l=m+1;
		else
			r=m-1;
	}
	return -1;

	
	
}
 
