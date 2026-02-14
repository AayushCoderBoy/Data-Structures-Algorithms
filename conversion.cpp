// Conversion : binary to decimal & decimal to binary

#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int result=0, pow=1;
    while(decNum>0){
    
        int rem=decNum%2;
        result += (rem*pow);
        decNum/=2;
        pow *= 10;
    }

    return result;
}

int binToDecimal(int binNum){
    int result=0, pow=1;

    while(binNum>0){
        int rem= binNum % 10;
        result += (rem * pow);
        binNum /= 10;
        pow *= 2;

    }
    return result;
}

int main(){
    int decNum;
    int binNum=1101;

    cout<<"Enter a Decimal Number : ";
    cin>>decNum;
    
    int ans=decToBinary(decNum);
    cout<<ans<<endl;
    
    int res=binToDecimal(binNum);
    cout<<res;
}