#include<iostream>
using namespace std;
int main()
{
    int num,a[10];
    cout<<"Enter a number\n";
    cin>>num;
    int rem;
    int i=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        a[i]=rem;
        i++;
    }
    int k;
    for(k=0;k<i;k++)
    {
        cout<<a[k];
    }
    return 0;
}
