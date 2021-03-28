#include<iostream>
using namespace std;
int main()
{
    int num,result=0,rem;
    cout<< "enter the number\n";
    cin>>num;
    int i,j;
    int sum=0;
    int temp;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        result=result*10+rem;
        num=num/10;

    }
    if(temp==result)
    {
        cout<<"Plandrome\n";

    }
    else
    {
        cout<< "not a plandrome\n";
    }
}
