#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
	public:
	    void set_roll(int r)
		{
			roll=r;
		}
		void show_roll()
		{
		cout<<"Roll NO : "<<roll<<endl;	
		}	
};
class test:public virtual student{
	protected:
		int math,phy;
	public:
	    void set_test(int m,int p)
		{
		  math=m;
		  phy=p;	
		}
		void show_test()
		{
		 cout<<"Physics Mark : "<<phy<<endl;
		 cout<<"Math Mark : "<<math<<endl;	
		}	
};
class sport:public virtual student{
	protected:
		int score;
	public:
	    void set_score(int s)
		{
			score=s;
		}	
		void show_score()
		{
			cout<<"PT score : "<<score<<endl;
		}
};
class result:public test,public sport{
	private:
		int total;
	public:
	    void show_result(){
		  total=score+math+phy;
		  show_roll();//ab compiler ko yeh nhi smj aye ga kih test() sy jaye ya sport() sy jaye student tk
		  //islie ham in donon class ko virtual bnaty hy duplication sy bchny ky liye
		  show_test();
		  show_score();
		  cout<<"Your Result : "<<total<<endl;
		}	
};
int main()
{
	result nasir;
	nasir.set_roll(12);
	nasir.set_test(56,89);
	nasir.set_score(89);
	nasir.show_result();
}
