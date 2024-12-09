#include<bits/stdc++.h>
using namespace std;
//Functions are set of code which performs something for u.
//Functions are used to modularise code
//Functions are used to increase the readibility and to use the same code multiple times.
//Types of function:1)One that return void/VOid functions
//2) Return valued function
//3)Parameterised function
//4)Non Parameterised function
//Functions are declared outside the main function in c++.
//Note:Every function with a return data-type must have a return.
void greet(string name){
cout<<"Hello "<<name<<endl;
}
int sum(int num1, int num2){
return num1 + num2;
}
int main(){
    string naam;
    cin >> naam;
    greet(naam);
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    cout<<"Sum of two numbers: "<<sum(num1,num2)<<endl;
    return 0;
}