#include<iostream>
using namespace std;
int main (){
	
		int arr[3][3];
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			
	cout<<"Enter your numbers:";
	cin>>arr[i][j];							
	}					
		}
		int sum=0;
		for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<"                ";
			sum=sum+arr[i][j];
		}
		cout<<endl;
	}
	cout<<"The sum is:"<<sum;
}