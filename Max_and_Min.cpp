#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    //smallest
    if(a <= b && a <= c){
        cout<<a<<" ";
    }else if(b <= a && b <= c){
        cout<<b<<" ";
    }else{
        cout<<c<<" ";
    }

    //greatest
    if(a >= b && a >= c){
        cout<<a<<endl;
    }else if(b >= a && b >= c){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }

}