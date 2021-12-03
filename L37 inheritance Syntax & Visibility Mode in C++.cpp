#include<iostream>
using namespace std;
class A{
	private:
		
	public:
		int id;/*this can't access if inherit mode is private because by private ,even public member
		become private member of derived class*/
		int salary=1;
		A(){//to avoid error because derived class call constructor of base class
		}
	    A(int iid)
	    {
	    	id=iid;
	    	salary=3000;
		}
};
class B: public A{    /*by default mode is private*/
	public:
		int code;
		B(int iid)
		{
			code=9;
			id=iid;
		}
};
int main()
{
	A a(3);
	cout<<a.salary<<endl;//salary is public in A;
	B b(7);
	cout<<b.id<<endl;
	cout<<b.salary<<endl;//publically inherit so we can access public data of base class
	cout<<b.code<<endl;
	
}
/* public mode: public data of base become public data of derived
private mode: public data of base become private data of derived so can't access from outside the class
private data can't be inherited
derived class call the constructor of base class so make one empty constructor to avoid error*/
