#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u, double a, double t){
  return (u*t)+(0.5*a*pow(t,2));
}

int main(){
  double u,a,t;
  cin>>u>>a>>t;
  cout<<findDistance(u,a,t);
}
