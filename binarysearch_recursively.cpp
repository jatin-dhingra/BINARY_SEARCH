#include <bits/stdc++.h>
using namespace std;

int BSrecursively(int arr[],int key,int length,int low,int high)
{
  int mid;
  if(low<=high)
  {
    mid=(low+high)/2;
    if(key==arr[mid])
    {
      return mid;
    }
    else if(key<mid)
    {
      return BSrecursively(arr, key,length,low,mid-1);
    }
    else
    {
      return BSrecursively(arr,key,length,mid+1,high);
    }
  }
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
  int low{};
  int high=length-1;
  int ans=BSrecursively(arr,key,length,low,high);
  cout<<"searched key is present at index :"<<ans<<endl;
}
