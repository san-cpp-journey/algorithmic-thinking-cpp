#include <iostream>
#include <cstdio>
using namespace std;

int max_value(int a , int b , int c , int d){
    int max_1 , max_2 , final_max;
    if (a > b){
        max_1 = a;
    }else{
        max_1 = b;
    }
    if ( c > d){
        max_2 = c;
    } else{
        max_2= d;
    }
    if (max_1 > max_2){
        final_max = max_1;
    }else{
        final_max = max_2;
    }
return final_max;
}
int main(){
    int a , b, c , d;
    cin>>a>>b>>c>>d;
cout<<max_value(a , b , c , d)<< endl;
return 0;
}

