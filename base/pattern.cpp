#include <iostream>
using namespace std;

int main(){
    // int n=4;
    // for(int i=1; i<=n; i++){
    //     for(int i=1; i<=n; i++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // int n=4;
    // for(int i=1; i<=n; i++){
    //     for(int i=1; i<=n; i++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    /* Star Pattern */
    // int n = 4;
    // for(int i=1; i<=4; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    /* Inverted Star Pattern */
    // int n = 5;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i+1); j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n=4;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // char ch='A';
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<ch++;
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=1; i<=n; i++){
    //     cout<<"* "; //First star
    //     for(int j=1; j<=n-1; j++){
    //         if(i==1 || i==n){
    //             cout<<" * ";
    //         }
    //         else{
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<" *"<<endl; //Last star
    // }

    // int n=4;
    // for(int i=1; i<=n; i++){
    //     // spaces
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"   ";
    //     }
    //     // stars
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // int n=4;
    // int num = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<num++<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int n=10;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"   ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=n-1; i>=1; i--){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"   ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // // Butterfly pattern
    // int n=4;
    // // uppper half
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     for(int j=1; j<=2*(n-i); j++){
    //         cout<<"   ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // // lower half
    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     for(int j=1; j<=2*(n-i); j++){
    //         cout<<"   ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // int n = 5;
    // bool val = true;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<val<<" ";
    //         val = !val;
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int n = 5;
    for(int i=1; i<=n; i++){
        // For spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        // For back num
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        // For forward num
        for(int j=2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}