#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        char co = ch - 32;
        cout<<co<<endl;
    }else if(ch >= 'A' && ch <= 'Z'){
        char po = ch + 32;
        cout<<po<<endl;
    }else{
        cout<<"invalid character"<<endl;
    }
}