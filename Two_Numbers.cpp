#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    double ans = a / b;

    int x = floor(ans);
    int y = ceil(ans);
    int z = round(ans);

    cout<<"floor "<<a<<" / "<<b<<" = "<<x<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<y<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<z<<endl;
    
    return 0;
}