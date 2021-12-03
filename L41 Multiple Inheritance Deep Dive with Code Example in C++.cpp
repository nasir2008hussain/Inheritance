#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
	     void seta(int a1)
		 {
		 	a=a1;
			 }	
};
class B{
	protected:
		int b;
	public:
	     void setb(int b1)
		 {
		 	b=b1;
			 }	
};
class C:public A,public B{
	protected:
		int c;
	public:
	    void show()
		{
			a++;
			b++;
		 cout<<"A : "<<a<<endl;//publically inherit so protected data member can be access in derived class
		 cout<<"B : "<<b<<endl;
		 cout<<"C : "<<a+b<<endl;	
		}	
};
int main()
{
	C c1;
	c1.seta(34);
	c1.setb(10);
	c1.show();
	//C->B;
	//C->A; and B and A can't access except their own func
}
