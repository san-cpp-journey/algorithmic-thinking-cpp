#include<iostream>
using namespace std;

double sum(double a , double b){
	if (a<b){
		return a;
	}else{
		return b;
	}
	
} 
int main(){
	 
	cout<<sum(6,5.7)<<endl;
	
	return 0;
}
