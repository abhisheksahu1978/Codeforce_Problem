#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double pi = 3.141592653;
    double r;
    cin>>r;
    double rd = (r*r);
    cout<< fixed << setprecision(9)<<pi*rd<<endl;
}