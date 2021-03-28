#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<< "enter the number\n";
    cin>>num;
    int rem;
    int i=0,a[10];
    int temp;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        a[i]=rem;
        i++;
    }

    int k;
    int result=0;
    for(k=0;k<i;k++)
    {
        result=result+pow(a[k],i);
    }
    if(temp==result)
    cout<< "it is armstrong number "<<result<<endl;
    else
        cout<< "not a armstrong number\n";
    return 0;


}
