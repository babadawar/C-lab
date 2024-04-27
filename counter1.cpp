#include<iostream>
using namespace std;

class counter {
	private:
		int c;
		public:
			static int n;
			counter():c(0){
			}
			
			int count(){
				n++;
				cout<<n;	
				return n;
			}
	
			
};
int counter:: n=0;

int main(){
	counter c1,c2;
	c1.count();
	c2.count();
}