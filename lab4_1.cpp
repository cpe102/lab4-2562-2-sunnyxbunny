#include<iostream>
#include<cmath>
using namespace std;

double omg(double x){
    return 3*pow(x,3)+(2*2.71828)+pow(2,((2*x)+1))+sqrt(pow(x,2)+1); 
}

int main()
{
    double x;
    cout<<"Enter x = ";
    cin>>x;
    cout<<"Result y = "<<omg(x);

}