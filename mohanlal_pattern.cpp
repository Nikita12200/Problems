#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	for(int i=1; i<=rows;i++){
		if(i%2==0){
			for(int j=1;j<=2*i;j++){
				if(j==1||j==2*i){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
				
			}
			cout<<endl;
		}
		else{
			for(int j=1;j<=(2*i-1);j++){
				cout<<"1";
				
			}
			cout<<endl;
		}
		
	}
  return 0;	
}
