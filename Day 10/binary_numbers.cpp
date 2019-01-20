#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> binary(50);
    int rem=n%2;
    //cout<< rem<<endl;
    
    int div=n/2;
    //cout<<div;
    int i=0;
    binary.at(i)=rem;
    while(div!=0){
        i+=1;
        binary.at(i)=div%2;
        div=div/2;
    }
    int max=0;
    int count=0;
    for(int j=i;j>=0;j--){
        if(binary.at(j)==1){
            count+=1;
        }
        else{
            max=(count>max?count:max);
            count=0;
        }
        max=(count>max?count:max);
    }
    cout<<max;
    
    return 0;
}
