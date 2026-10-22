#include <iostream>
using namespace std;
int main(){
    int X , Y;
    cin>>X>>Y;
    int sum = X + Y;
    int multiplies = X * Y;
    int subtract = X - Y;
    cout<<X<<" + "<<Y<<" = "<<sum<<endl;
    cout<<X<<" * "<<Y<<" = "<<multiplies<<endl;
    cout<<X<<" - "<<Y<<" = "<<subtract<<endl;
}