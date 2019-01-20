#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    string s;
    string even;
    string odd;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0;i<N;++i)
    {
        cin >> s;
        int l=s.size();
        even=s[0];
        odd=s[1];
        for(int j=2;j<l;j++)
        {
            
            if(j%2==0){
                even+=s[j];
            }
            else{
                odd+=s[j];
            }
        }
        cout << even << " "<< odd<< endl;
    }
    
    
    return 0;
}
