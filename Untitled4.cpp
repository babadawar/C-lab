#include <iostream>
using namespace std;

class point  {
private:
    int x,y;

public:
    point(int x,int y) : x(0) ,y(0) {}


 

    point operator +=( point p2){
    	x=x+p2.x;
    	y=y+p2.y;
    	return p1;
	}
	void show()
	{cout<<x<<y;
	}
};

int main() {
   
  point p1(1,2),p2(3,4);
 
  p1+=p2;
     

    return 0;
}
