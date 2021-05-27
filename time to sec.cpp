#include<iostream>
using namespace std;
int main()
{ 
  int hr,min,sec,s1,s2,total;
  cout<<"Enter time";
   cout<<"\nhours:";
   cin>>hr;
    cout<<"\nminutes: ";
   cin>>min;
    cout<<"\nseconds:";
   cin>>sec;
    {
      if(sec<=60)
     {
	   cout<<"\nThe Time is"<<hr<<":"<<min<<":"<<sec;
      s1=hr*3600;
      s2=min*60;
      total=s1+s2+sec;
      cout<<"\nTime in Total Seconds:"<<total;
     }
      else
     cout<<"\nEnter in the format of 23:59:59";
    }
}
