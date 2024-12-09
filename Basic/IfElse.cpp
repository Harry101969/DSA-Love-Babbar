#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
   cin>>age;
    cout<<"You Entered: "<<age<<endl;
    if(age>=18){
     cout<<"You are an adult"<<endl;
    }else{
        cout<<"You are not an adult"<<endl;
    }

    int marks;
     cout<<"Enter your age: "<<endl;
   cin>>marks;
    cout<<"You Entered: "<<marks<<endl;
    if(marks<= 100 && marks >=80){
        cout<<"Grade: A"<<endl;
    }else if (marks <= 79 && marks >= 60)
    {
          cout<<"Grade: B"<<endl;
    }
    else if (marks <= 59 && marks >= 50)
    {
          cout<<"Grade: C"<<endl;
    }
    else if (marks <= 49 && marks >= 45)
    {
          cout<<"Grade: D"<<endl;
    }
    else if (marks <= 44 && marks >= 25)
    {
          cout<<"Grade: E"<<endl;
    }
    else if (marks <= 25)
    {
          cout<<"Grade: F"<<endl;
    }else{
        cout<<"Invalid Marks"<<endl;
    }
    return 0;
}