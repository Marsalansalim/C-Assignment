#include<iostream>

using namespace std;
int main()
{
  int a[50],size,index,target; 
 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\nenter element at a["<<index<<"] :";
  	cin>>a[index];
  }
  cout<<"\nEnter the target number :";
  cin>>target;
  int count =0;
  
  for(int i =0;i<size;i++){
  	if(a[i]==target){
  		count++;
	  }
  }
   
   cout<<"The target "<<target << "  appears"  <<count<<"  times.";
}
