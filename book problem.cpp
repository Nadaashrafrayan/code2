#include<iostream>
#include<cmath>
using namespace std;
void main(){
double cost,inflation_rate;
int number_of_years;
char chois;
cout<<"enter current price of item  ";
cin>>cost;
cout<<"enter rate of inflation  ";
cin>>inflation_rate;
cout<<"enter number of years   ";
cin>>number_of_years;
for(int i=o ;i<cost ;i++)
    {
        cost*=(1+inflation_rate);

    }
cout<<"inflation_rate in decimal function  "<<inflation_rate;
cout<<"estimated cost of item after  "<<number_of_years<<"years";
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout<<"will be:  "<<cost<<endl;
cout<<"to repeat calculations for different values then press Y or y ";
cin>>choice;
while(choice=="Y"||choice=="y")
    system("pause");
}
