#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x){
    int i=2;
    while(i<x){
        if(x%i==0){
            return i;
        }else{i++;}
    }
}

int main(){
    int x,i=2;
    cin>>x;
    cout<<findDivisor(x);

}