#include <iostream>
using namespace std;
class fraction
{
	public:
		int a,b;
		public:
			fraction(int x=0,int y=0){
				a=x;
				b=y;
			}
			void display()
			{
				cout<<a<<"/"<<b<<endl;
			}
			fraction operator +(fraction f){
				fraction r;
				r.a=(a*f.b)+(b*f.a);
				r.b=b*f.b;
				return(r);
			}
			fraction operator -(fraction f){
				fraction r;
				r.a=(a*f.b)-(b*f.a);
				r.b=b*f.b;
				return(r);
			}
			fraction operator *(fraction f){
				fraction r;
				r.a=a*f.a;
				r.b=b*f.b;
				return(r);
			}
			fraction operator /(fraction f){
				fraction r;
				r.a=a*f.b;
				r.b=b*f.a;
				return(r);
			}
			fraction operator ++(){
				a+=b;
				return *this;
			}
			fraction operator ++(int){
				fraction temp(*this);
				++*this;
				return temp;
			}
			fraction operator --(){\
			a-=b;
			return *this;
			}
			fraction operator --(int){
				fraction temp(*this);
				--*this;
				return temp;
			}
};
int main()
{
	fraction f1(2,3);
	fraction f2(1,4);
	fraction f3;
	cout<<"addition=";
	f3=f1+f2;
	f3.display();
	cout<<"subtraction=";
	f3=f1-f2;
	f3.display();
	cout<<"multiplication=";
	f3=f1*f2;
	f3.display();
	cout<<"division=";
	f3=f1/f2;
	f3.display();
	cout<<"pre increment=";
	f3=++f1;
	f3.display();
	cout<<"post increment=";
	f3=f2++;
	f3.display();
	cout<<"pre decrement=";
	f3=--f1;
	f3.display();
	cout<<"post decrement=";
	f3=f2--;
	f3.display();
	return 0;
}
