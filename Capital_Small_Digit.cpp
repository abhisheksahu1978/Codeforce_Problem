#include <iostream>
using namespace std;
int main(){
    char ch ;
    
    cin>>ch;
    if(ch >= 65 && ch <=91){
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }else if( ch >= 97 && ch <= 123){
        cout<<"ALPHA\nIS SMALL"<<endl;
    }else{
        cout<<"IS DIGIT"<<endl;
    }
}