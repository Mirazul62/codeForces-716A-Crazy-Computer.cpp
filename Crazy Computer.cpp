#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,c,a[100000],count=1,j;
    cin>>n>>c;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {


        if(a[i+1]-a[i]>c)
        {
        count=1;
     //    cout<<">"<<count<<endl;
       }

        else
        {
        ++count;
      //   cout<<count<<endl;
       }

    }

     cout<<count<<endl;



}
