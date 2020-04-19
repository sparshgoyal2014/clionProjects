#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;

        int t;
        cin>>t;
        while(t--)
        {
            int n,k;
            cin>>n>>k;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            int c=0;
            int sum=0;
            for(int j=0;j<n;j++)
            {
//                while(true)
//                {

                    for(int q = 0; q<50; q++){

                    if(j-k-c>0)
                    {
                        if(arr[j-k-c]<arr[j])
                        {
                            sum+=k-c;
                            break;
                        }
                    }
                    else if(arr[j+k+c]<arr[j]&&(j+k+c)<=n)
                    {
                        sum+=k+c;
                        break;
                    }
                    c++;
                }
            }
            cout<<sum<<endl;
        }
     return 0;
}
