#include<iostream>
using namespace std;

int main()
{
   int n,count=0,max=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
for(int i=0;i<n;i++){
    if(arr[i]==i){
        count++;
        if(max<count)     
          max=count;
    }
    else
    count=0;
}
cout<<max;
return 0;
}