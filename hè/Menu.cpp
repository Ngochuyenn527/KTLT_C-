#include<bits/stdc++.h>

using namespace std;

void nhap( int *&a,int &n){
	cout<<"Nhap n= "; cin>>n;
	a=new int [n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuat(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void snt(int *a, int n){
	int demsnt=0; int s=0;
	for(int i=0; i<n; i++){ 
	    if(a[i]>2){
	    	int dem=0;
	    	for(int j=2; j<=sqrt(a[i]); j++){ //duyet doan tu 2 den can cua no
	    		if(a[i]%j==0) dem++; // neu trong khoang do 0 chia het cho so nao thi la snt
			}
		if(dem==0){
		demsnt++;
        cout<<"Cac so nto la: "<<a[i]<<endl;
        s+=a[i];
		}
		}
    }
    cout<<"So luong so nto la: "<<demsnt<<endl;
    cout<<"Trung binh cong cac so nto la: "<<(float)s/demsnt<<endl;
    if(demsnt==n) cout<<"Mang hop le";
    else cout<<"Mang 0 hop le";
}

void tim(int *a, int n){
	int demmin=n;
	for(int i=0; i<n; i++){ // duyet so sanh a[i] voi tung phan tu a[j] tang dan
		int dem=0;
		for(int j=0; j<n; j++){ 
			if(a[i]==a[j]) dem++; // neu bang nhau thi dem
		}
		if(dem<demmin){
			demmin=dem; // demmin se thay doi vidu if(3<n) demmin=3;
		}
	} // thay doi xong demmin lan 1 lai quay lai vong for de sosanh tiep
	
	cout<<"So lan xuat hien it nhat trong mang la: "<<demmin;
	cout<<"\nphan tu xuat hien it nhat la:";
	for(int i=0; i<n; i++){
		int dem=0;
		for(int j=0; j<n; j++){
			if(a[i]==a[j]) dem++;
		}
		if(dem==demmin)
		cout<<a[i]<<" "; // liet ke ra ptu xh it nhat co dem=demmin
	}
	cout<<endl;
}

void daovachen(int *&a, int n){
	int *b=new int[n+1];
	b[0]=2022;
	for(int i=0; i<n; i++){
		b[i+1]=a[n-i-1]; // vidu n=5 => a[0] -> a[4], => b[0 + 1] = a[5-0-1]  => b[1]=a[4]
	}
	delete[] a;
	cout<<"\nmang moi la: ";
	for(int i=0;i<n+1;i++){
		cout<<b[i]<<" ";
	}
	ofstream f1;
	f1.open("kttx2.txt", ios::app);
	for(int i=0;i<n+1;i++){
		f1<<b[i]<<" ";
	}
	f1.close();
	a=b;
}

void soluong(int *a, int n){
	int dem=0,sum;
	for(int i=0; i<n; i++){
		while(a[i] != 0){
			sum=a[i]%10;
			dem++;
		    a[i]/=10; // chia den khi nao all a[i]==0 thi stop
	    }
	}
	cout<<"Tong sl cac chu so trong mang bd la: "<<dem<<endl;
}

void show(int *&a, int n){
	int dem=0;
	for(int i=0; i<n; i++){
		while(a[i] !=0 ){
			if(a[i]%10==2){
				dem++;
			}
			a[i]/=10; // chia den khi nao all a[i]==0 thi stop
		}
	}
	cout<<"\nSo chu so 2 xh trong mang la: "<<dem<<endl;
}

int main(){
	int choose;
	int *a,n;
	do{
		cout<<"Menu(chon ham muon xu ly\n";
		cout<<"1-Nhap mang\n";
		cout<<"2-Xuat mang\n";
		cout<<"3-snt\n";
		cout<<"4-tim\n";
		cout<<"5-daovachen\n";
		cout<<"6-so luong\n";
		cout<<"7-show\n";
		cout<<"Lua chon cua ban la:";
		cin>>choose;
		if(choose == 1){
			nhap(a,n);
		}
		else if(choose == 2){
			xuat(a,n);
		}	
	}
	while(choose!=0);

}
