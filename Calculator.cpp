#include<iostream>
#include<unistd.h>
using namespace std;

int add(int x,int y){
return x+y;
}
int sub(int x,int y){
return x-y;
}
int mul(int x,int y){
return x*y;
}
int mode(int x,int y){
return x%y;
}
float div(float x,float y){
return x/y;
}
int main()
{
    add(3,5);
    sub(3,5);
    mul(3,5);
    mode(3,5);
    div(5.0f,5.0f);
    int n;
    cout<<"enter value if n";
    cin>>n;
    if(n<10){
    if(n>0){
    cout<<"N is positive";
    }else
       cout<<"N is negative";
    }
    else
       cout<<"n is greater than 10";
    }