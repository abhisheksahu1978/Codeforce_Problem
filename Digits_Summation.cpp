#include <iostream>
using namespace std;
int main(){
    long long n , m;
    cin>>n>>m;
    long long o = n % 10;
    long long t = m % 10;
    long long sum = o + t;
    cout<<sum<<endl;
}