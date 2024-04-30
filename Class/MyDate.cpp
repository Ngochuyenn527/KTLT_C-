#include<bits/stdc++.h>

using namespace std;
class MyDate{
	private:
		int day, month, year;
		
	public:
		MyDate(int d, int m, int y)
		{
			day = d;
			month = m;
			year = y;
		}
	
	void showday()
	{
		cout<<"Day: "<<day<<"\n";
	}
	void showmonth()
	{
		cout<<"Month: "<<month<<"\n";
	}
	void showyear()
	{
		cout <<"Year: "<<year<<"\n";
	}
	void showdate()
	{
		cout<<"Date: "<<day<<"-"<<month<<"-"<<year<<"\n";
	}
};
int main(){
	MyDate *md = new MyDate(27,5,2004);
	md->showday();
	md->showmonth();
	md->showyear();
	md->showdate();
	return 0;
}
