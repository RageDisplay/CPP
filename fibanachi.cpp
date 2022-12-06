#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int k=1;
    int n;
    cout<<"Enter: ";
    cin>>n;
    int mass[n];
    mass[0]=1;
    mass[1]=1;
    while (k<=n)
    {
        mass[k+1]=mass[k-1]+mass[k];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<mass[i]<<endl;
    }
    return 0;
}