#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;
    cout<<"Enter Three Numbers :-  ";
    cin >>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<"Greater Number is: "<<num1;
    }
    else if(num2>num1 && num2>num3){
        cout<<"Greater Number is: "<<num2;
    }
    else if(num3>num1 && num3>num2){
        cout<<"Greater Number is: "<<num3;
    }
    else if(num1==num2==num3){
        cout<<"All Numbers are Equal";
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}
