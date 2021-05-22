#include<iostream>
using namespace std;
int main()
{  
 int arr[]={1,2,3,5,4,5};
 int *p;
 p=arr;

for (int i=0;i<5;i++)
    { 
     cout<<*p<<endl;
     ++p;
	}
return 0;
}
