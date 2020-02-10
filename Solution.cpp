#include <iostream>
using namespace std;

void func(int arr[],int start,int last,int c)
{ 
    if(start>last)
    {
        
        if(c==0)
        { 
            for(int i=0;i<=last;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            func(arr,start+1,last,c-arr[start]);      
    }  
}

  int main()
  {
      int c, len;
      cout<<"Enter the length of array: ";
      cin>>len;
      cout<<"Enter the value of c: ";
	  cin>>c;
      int* arr=new int[len];
      func(arr,0,len-1,c);

      return 0;
  }
