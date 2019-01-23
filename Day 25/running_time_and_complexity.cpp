#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        
        string sol;
        if(k==1){sol="Not prime";}
        else if(k==2 || k==3 || k==5 || k==7){sol="Prime";}
        else if(k%2==0 || k%3==0 || k%5==0|| k%7==0){sol="Not prime";}
        else{
            int sq = sqrt(k);
            int j=11;
            while(j<=sq) {
                if(k%j == 0) {
                    sol="Not prime";
                    break;
                }
                else{j+=2;}
            }
            if(k%j!=0){sol="Prime";}
            
        }
        cout<<sol<<endl;
        
    }
    
    return 0;
}
