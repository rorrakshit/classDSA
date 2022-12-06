#include<iostream>
using namespace std;
int main(){
    long long int n=123456789123456789;
    int c=0;
    while(n!=0){
        n/=10;c++;
    }cout<<c;
}