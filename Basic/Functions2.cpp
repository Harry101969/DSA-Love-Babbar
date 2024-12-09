#include<bits/stdc++.h>
using namespace std;
//Learning pass by value and pass by reference

//Function for pass by value
void doSomething(int num){
cout<< num<<endl;
num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;
}
//function for pass by reference
void doSome(string &s)//This & sign is the reason of getting the address of the variable and making changes to it
{
s[0] = 'T';//Note char a always kept in single quotations
cout<<s<<endl;
}

//NOw lets do it with arrays
//Note:Arrays are always passed by reference so & is not required
void doSOmethingWithArray(int arr[],int n){
    arr[0] += 100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}
int main(){
int num = 10;
doSomething(num);
cout<<num<<endl;

string str = "Raj";
doSome(str);
cout<<str<<endl;

int n = 5;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
doSOmethingWithArray(arr,n);
cout<<"Value inside the int main function: "<< arr[0] <<endl;
    return 0;
}