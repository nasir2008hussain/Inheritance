/*protected data can be access inside child class withoud concerning inherited mode*/
/*private data can't be inherited*/
/*public data depend on inherited mode to access outside class*/
/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/
#include<iostream>
using namespace std;
class A{
	int a;
	protected:
		int b;
	public:
	    int c=9;
			
};
class B:private A{
	public:
		void process()
		{
			b++;
			cout<<b;
		}
	
};
int main()
{
	B a;
	//cout<<a.c; error becasue privately inherit so all data member  become private;
   //cout<<a.c;error becasue protectedly inherit so all data member  become protected;
   //cout<<a.c;no error if publically inherit;
	a.process();//isky under A ka protected member hy jo kih child class khud access kr skta hy mgr outside nhi
	
}
