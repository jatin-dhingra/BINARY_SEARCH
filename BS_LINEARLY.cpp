#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int key,int length)
{
  int low{};
  int high=length-1;

  while(low<=high)
  {
    int mid=(high+low)/2;
    if(key==arr[mid])
    {
      return mid;
    }
    else if(key<arr[mid])
    {
        high=mid-1;
    }
    else
    {
      low=mid+1;
    }
  }
  return -1;
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
  int length=sizeof(arr)/sizeof(arr[0]);
  cout<<"The array is [";
  for(int i{1};i<=length;i++)
  {
    cout<<i<<" ";
  }
  cout<<"]"<<endl;
  int key;
  cout<<"enter the key want to search! : ";
  cin>>key;
  int ans=binarysearch(arr,key,length);
  cout<<"searched key is present at index :"<<ans<<endl;

}
