#include<iostream>
using namespace std;

class counter {
	private:
		int c;
		public:
			counter(): c(0)
			{
			}
			int count(){
				c++;
				cout<<c;	
				return c;
			}
			
			
};

int main(){
	counter c1,c2;
	c1.count();
	c2.count();
	}