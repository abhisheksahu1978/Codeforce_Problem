#include <iostream>
using namespace std;
int main(){
    string first_name,l1_name;
    string second_name,l2_name;
    cin>>first_name>>l1_name;
    cin>>second_name>>l2_name;
    if(l1_name == l2_name){
        cout<<"ARE Brothers"<<endl;
    }else{
        cout<<"NOT"<<endl;
    }
}