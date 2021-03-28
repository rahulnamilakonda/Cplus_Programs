#include<iostream>
using namespace std;
int main()
{
    int num,num1=0,num2=1,num3;
    int i;
    cout<<"Enter the number of terms req\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        if(i==0)
        {
         cout<<"0\t";
        }
        else if(i==1)
        {
            cout<<"1\t";

        }
        else
           {
            num3=num1+num2;
            num1=num2;
            num2=num3;
            cout<<num3<<"\t";
           }


    }
return 0;
}
