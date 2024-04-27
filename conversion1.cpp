/*Assuming there are 7.481 gallons in a cubic foot,write a program that asks the user to
 enter a number of gallons,and then displays the equivalent in cubic feet*/ 

 #include<iostream>
using namespace std;
int main(){
    double gallons,cubicfeet;


    cin>>gallons;
cubicfeet=7.481*gallons;
cout<<cubicfeet;
    return 0;

}
