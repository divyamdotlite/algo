#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    // int p;
    // int r;
    // int t;

    // // io
    // cout<<"Enter principle: ";
    // cin>>p;
    // cout<<"Enter Rate: ";
    // cin>>r;
    // cout<<"Enter Time: ";
    // cin>>t;

    // float pi = 3.14;
    // cout<< (int)(pi);

    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // if (age>=18){
    //     cout<<"Eligible to vote!\n";
    // }
    // else{
    //     cout<<"Not eligible to vote!\n";
    // }
    
    // int a,b;
    // cout<<"a = ";
    // cin>>a;
    // cout<<"b = ";
    // cin>>b;

    // if(a>b){
    //     cout<<"a is greater";
    // }
    // else{
    //     cout<<"b is greater";
    // }
    
    // int num;
    // cout<<"Enter num: ";
    // cin>>num;
    // if(num%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    // int a,b,c;
    // cout<<"a = ";
    // cin>>a;
    // cout<<"b = ";
    // cin>>b;
    // cout<<"c = ";
    // cin>>c;

    // if(a>b && a>c){
    //     cout<<"a is greater";
    // }
    // else if(b>a && b>c){
    //     cout<<"b is greater";
    // }
    // else{
    //     cout<<"c is greater";
    // }

    // int age = 18;
    // bool isAdult = (age>=18) ? true : false;
    // cout<<isAdult;

    // int day = 1;
    // switch(day){
    //     case 1 : cout<<"Sunday";
    //         break;
    //     case 2 : cout<<"Monday";
    //         break;
    //     default: cout<<"Invalid day!";
    // }

    // int num;
    // cout<<"Enter no.: ";
    // cin>>num;

    // if (num>0){
    //     cout<<"+ve";
    // }
    // else if (num==0){
    //     cout<<"xero";
    // }
    // else{
    //     cout<<"-ve";
    // }

    // int year;
    // cout<<"Enter year.: ";
    // cin>>year;
    
    // if (year%400==0){
    //     cout<<"leap year";
    // }
    // else if (year%100==0){
    //     cout<<"Not leap year";
    // }
    // else if (year%4==0){
    //     cout<<"Leap year";
    // }
    // else{
    //     cout<<"Not leap year";
    // }
    
    // for(int i=1; i<=5; i++){
    //     cout << i <<" ";
    // }

    // int n;
    // cout<<"Enter your n.: ";
    // cin>>n;
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // cout<<sum;

    // int i = 1;
    // while(i<=5){
    //     cout<<i<<" ";
    //     i++;
    // }

    // int n = 15;
    // for(int i=n; i>=1; i--){
    //     cout<<i<<" ";
    // }

    // int n=123;
    // int sum=0;
    // while(n>0){
    //     int lastDig = n%10;
    //     cout<<lastDig<<endl;
    //     sum+=lastDig;
    //     n = n/10;
    // }
    // cout<<"Sum = "<<sum;
    
    // int n;
    // while(true){
    //     cout<<"Enter a no.: ";
    //     cin>>n;
    //     if(n%10==0){
    //         break;
    //     }
    // }

    // int n = 5;
    // bool isPrime = true;
    // for(int i=2; i<=sqrt(n); i++){
    //     if(n%i==0){
    //         isPrime=false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout<<"Prime no.";
    // }
    // else{
    //     cout<<"Non prime";
    // }

    //  int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // int n = num;   // copy original number
    // int sum = 0;

    // while (n > 0) {
    //     int lastDig = n % 10;                  // last digit
    //     sum += lastDig * lastDig * lastDig;    // cube of digit
    //     n = n / 10;                            // reduce number
    // }

    // if (sum == num) {
    //     cout << num << " is an Armstrong number." << endl;
    // } else {
    //     cout << num << " is NOT an Armstrong number." << endl;
    // }

    // int n;
    // cout<<"Enter no.:";
    // cin>>n;
    // for(int i=0; n-i>=1; i++){
    //     cout<<n-i;
    //     if(n-i==1){
    //         continue;
    //     }
    //     else{
    //         cout<<" x ";
    //     }
    // }

    // int n;
    // cout<<"Enter a no.: ";
    // cin>>n;
    // for(int i=1; i<=10; i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }

    // int N = 15;
    // for(int i=2; i<=N; i++){
    //     int curr = i;
        
    //     bool isPrime = true;
    //     for(int j=2; j<=sqrt(curr); j++){
    //         if(curr%j==0){
    //             isPrime=false;
    //             break;
    //         }
    //     }
        
    //     if(isPrime){
    //         cout<< curr << " ";
    //     }
    // }
    // cout<<endl;

    // int n=10;
    // int st=0, nd=1;
    // cout<<st<<" "<<nd<<" ";
    // for(int i=2; i<n; i++){
    //     int rd = st + nd;
    //     cout<<rd<<" ";
    //     st = nd;
    //     nd = rd;
    // }
    return 0;
}