#include <iostream>
using namespace std;

int main()
{
   string str;
   int i,j,r;
    cout << " Input number of rows (half of the diamond): ";
    cin >> r;
    for(int i=0;i<2*r-1;i++){
   	cout<<"*";
   }
   cout<<endl;
   for(i=1;i<r;i++)
   {
     for(j=1;j<=r-i;j++)
     cout<<"*";
     for(j=1;j<=2*i-1;j++)
       cout<<" ";
       for(j=r-i;j>=1;j--)
     cout<<"*";
     cout<<endl;
   }
  
   for(i=r-2;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     cout<<"*";
     for(j=1;j<=2*i-1;j++)
       cout<<" ";
       for(j=r-i;j>=1;j--)
     cout<<"*";
     cout<<endl;
   }
   for(int i=0;i<2*r-1;i++){
   	cout<<"*";
   }
}
