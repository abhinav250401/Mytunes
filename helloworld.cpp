#include<iostream> //headerfiles
using namespace std; //namespace

//main function starts from here
int main()
{
    #ifndef ONLINE_JUDGE //preprocessor keyword
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    cout<<"Welcome to my first C++ Program under the C++ placement"<<endl;
    cout<<"Hey lad"<<endl;
    cout<<"This is a sample program for addition"<<endl;

    int num1,num2,sum; //variable declaration
    cout<<"Enter the two numbers"<<endl;
    cin>>num1;
    cin>>num2;
    sum=num1+num2;
    cout<<"The sum of the given numbers is"<<sum;
    cout<<"Thank you";

}
