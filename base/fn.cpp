#include <iostream>
using namespace std;

void sayhello(){
    cout<<"Hello Dv"<<endl;
}

void pa(){
    sayhello();
    cout<<"How can I help you?";
}
void fdeclaration(); // forward declaration

int prodt(int a, int b){
    int sum = a*b;
    return sum;
}

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int combi(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);
    
    int result = val1 / (val2*val3);
    return result;
}

int sum(int a, int b){
    cout<<a+b<<endl;
    return a+b;
}

double sum(double a, double b){
    cout<<a+b<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<a+b+c<<endl;
    return a+b+c;
}

int digiSum(int n){
    int sum = 0;
    for(int i=1; n>0; i++){
        sum+=n%10;
        n/=10;
    }
    cout<<sum;
    return sum;
}

int binoSum(int a, int b){
    int result = (a*a)+(b*b)+(2*a*b);
    cout<<result;
    return result;
}

void threeSum(int a, int b, int c){
    if(a>b && a>c){
        cout<<a;
    }
    else if(b>a && b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}

char nextChar(char ch) {
    if(ch == 'z') return 'a';     
    if(ch == 'Z') return 'A';     
    
    return ch + 1;  
}

int reverse(int n){
    int res = 0;
    while(n>0){
        int lastDigit = n % 10;
        res = res * 10 +lastDigit;
        n/=10; 
    }
    return res;
}

int isPalindrome(int num){
    if (reverse(num) == num){
        return true;
    }
    else{
        return false;
    }
}

int binToDec(int num){
    int n = num;
    int decNum = 0;
    int pow = 1;

    while(n>0){
        int lastdig = n % 10;
        decNum += lastdig * pow;
        pow *=2;
        n /= 10;
    }
    return decNum;
}

int decToBin(int num){
    int n = num;
    int binNum = 0;
    int pow = 1;

    while(n>0){
        int lastdig = n % 2;
        binNum += lastdig * pow;
        n /= 2;
        pow *= 10;
    }
    return binNum;
}
int main(){
    cout<< "Hey there!";
    cout<<endl;
    cout<< "Decimal form: " <<binToDec(101);
    cout<<endl;
    cout<< "Binary form: "<<decToBin(5);
    cout<<endl;
    return 0;
}

void fdeclaration(){
    cout<<"This is forward declaration"<<endl;
}