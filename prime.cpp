#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<< "enter the number to check prime or not\n";
    cin>>num;
    int i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            count++;
    }
    if(count==2)
    {
        cout<<"It is a prime\n";

    }
    else
        cout<<"Not a prime\n";
         return 0;
}



