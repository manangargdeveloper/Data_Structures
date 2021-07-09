#include <iostream>
using namespace std;
int main()
{
    int n = 10, k = 5;
    int num;
    cin>>num;
    if(num>=1 && num<=5)
    {
        cout<< "Number of candies sold : "<<num<<"\n";
        cout<< "Number of candies left : "<<n-num;
    }
    else
    {
        cout<<"Invalid input :\n";
        cout<<"Number of candies left :"<<n;
    }
    return 0;
}
