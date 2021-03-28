#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    int sum=0;
    int rem;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;

    }
    cout<<"THe sum of digit of given number is "<<sum;
    return 0;
}
