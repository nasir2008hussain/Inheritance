/*Ambiguous base classes (C++ only) When you derive classes, 
ambiguities can result if base and derived classes have members with 
the same names. Access to a base class member 
is ambiguous if you use a name or qualified name that does not refer 
to a unique function or object.*/
#include<iostream>
using namespace std;
class A{
	public:
		void greet()
		{
			cout<<"I am A class"<<endl;
		}
};
class B{
	public:
		void greet()
		{
			cout<<"I am B class"<<endl;
		}
};
class C:public A,public B{
	public:
		void greet()
		{
			cout<<"You are in C class"<<endl;
			B::greet();
			A::greet();
		}
	
};
int main()
{
	C c;
	c.greet();
}
