#include<bits/stdc++.h>
using namespace std;

int main()
{
    //number of elements
    int n;
    cin>>n;
    // array of elements
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];

    bool swaps = true;

    while(swaps) // keep repeating the algorithm until we do no swaps
    {
        swaps = false;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i] > ar[i+1])
            {
                swap(ar[i],ar[i+1]);
                swaps = true;
            }
        }
    }
    for(int i=0;i<n;i++)cout<<ar[i]<<"\n "[i<n-1];//if i<n-1 is true it prints space, otherwise \n

}
