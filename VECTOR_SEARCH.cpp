#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int checker(vector<int>a)
{   int k;
     cout<<"Enter the element to be searched: ";
     cin>>k;
	for(int i=0;i<a.size();++i)
	  {
	      if(k==a[i])
	   {
	       return 0;
	       
	   }
	      
	  }
    	return 1;
}
int main()
{	int n;
	vector<int>a;
	cout<<"Enter the size:";
	cin>>n;
    cout<<"Enter the element:\n";
	for(int i=0;i<n;++i)
    { 
        int u;
        cin>>u;
        a.push_back(u);
    }
    int k=checker(a);  
    if(k==0)  
     {
         cout<<"\n\nValue is found";
         
     }
    else 
     {
         cout<<"\n\nValue is not found";
         
     }
    return 0;
}
