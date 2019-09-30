#include <iostream>
using namespace std;
class student
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
};
class engineering:public student
{
	public:
		int r;
		char n[10];
		public:
			void getdata()
			{
				cout<<"faculty->engineering"<<endl;
				cout<<"enter name";
				cin>>n;
				cout<<"enter rollno";
				cin>>r;
			}
			void display()
			{
				cout<<"name="<<n<<endl;
				cout<<"rollno="<<r<<endl;
			}
};
class medicine:public student
{
	public:
		int r;
		char n[10];
		void getdata()
		{
			cout<<"faculty->medicine"<<endl;
			cout<<"enter name";
		    cin>>n;
		    cout<<"enter rollno";
		    cin>>r;
		}
		void display()
		{
			cout<<"name="<<n<<endl;
			cout<<"rollno="<<r<<endl;
		}
};
class science:public student
{
	public:
		int r;
		char n[10];
		void getdata()
		{
			cout<<"faculty->science"<<endl;
			cout<<"enter name";
			cin>>n;
			cout<<"enter rollno";
			cin>>r;
		}
		void display()
		{
			cout<<"name="<<n<<endl;
			cout<<"rollno="<<r<<endl;
		}
};
int main()
{
	student *p;
	engineering e;
	medicine m;
	science s;
	p=&e;
	p->getdata();
	p->display();
	p=&m;
	p->getdata();
	p->display();
	p=&s;
	p->getdata();
	p->display();
	return 0;
}
