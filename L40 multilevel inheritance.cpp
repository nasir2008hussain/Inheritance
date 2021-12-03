#include<iostream>
using namespace std;
class c{
	public :
		void show()
		{
			cout<<"x";
		}
};
class student{
	protected:
		int roll;
	public:
	    void setroll(int r)
		{
		 roll=r;	
		}	
		void getroll()
		{
			cout<<"Roll No : "<<roll<<endl;
		}
};
class mark:public student{
	protected:
	   int phy,math;
	public:
		
	    void setmark(int m1,int m2)
		{
			roll++;
			phy=m1;
			math=m2;
		}
		void getmark()
		{
		cout<<"Physics Mark : "<<phy<<endl;
		cout<<"Math Mark : "<<math<<endl;	
		}   
};
class result:public mark{
	protected:
		float percentage;
	public:
	    void showresult(){
	    	percentage=((phy+math+0.0)/200.0)*100.0;
	    	getroll();
	    	getmark();
	    	cout<<"Percentage : "<<percentage<<endl;
		}	
};
int main()
{
	result nasir;
	nasir.setroll(12);//multilevel inherit ka kaam yani grand super class ka func acces kr lya
	nasir.setmark(99,19);//simply parent class ka func access
	nasir.showresult();//own class func
	//result->mark
	//mark->student;
	
	
}
