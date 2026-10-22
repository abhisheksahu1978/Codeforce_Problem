#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x = a / 1000;
    if(x % 2 == 0){
        cout<<"EVEN"<<endl;
    }else{
        cout<<"ODD"<<endl;
    }

    return 0;
}