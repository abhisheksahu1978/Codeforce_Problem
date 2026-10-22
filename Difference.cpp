#include <iostream>
using namespace std;
int main(){
    long long a , b , c, d;
    cin>>a>>b>>c>>d;
    long long pdt = a * b;
    long long prd = c * d;
    long long sub = pdt - prd;
    cout<<"Difference = "<<sub<<endl; 
}