#include<iostream>
using namespace std;
class A{
	int data1;
	public:
		int data2;
		void setdata();
		int get1();//private can't inherit so we use get1() in public to access data1
		int get2();
};
class B: A{
	int data3;
	public:
		void process();
		void display();
};
void A::setdata()
{
	data1=20;
	data2=40;
}
int A::get1()
{
	return data1;
}
int A::get2()
{
	return data2;
}
void B::process()
{
	setdata();
	data3=data2*get1();
}
void B::display()
{
	cout<<"data 1 : "<<get1()<<endl;
	cout<<"data 2 : "<<data2<<endl;//publically inherit
	cout<<"data 3 : "<<data3<<endl;
}
int main()
{
	B b;
	A a;
	//b.setdata();valid when publically inherited otherwise write in mem func of any derived class to use it
	//a.data2; this can't give error bcz it is public of base class
	//b.data2; can't access because it become private in derived class  when privately inherited
	b.process();
	b.display();
}
/*we can use private data inside the derived class when privately inherited*/
