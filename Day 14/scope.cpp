#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;
    
public:
    int maximumDifference;
    
    // Add your code here
    Difference(vector<int> numbers){
        this->elements=numbers;
    }
    void computeDifference(){
        int n =elements.size();
        int max=0;
        int min=101;
        for(int i=0;i<n;i++){
            if(elements.at(i)>max){
                max=elements.at(i);
            }
            if(this->elements.at(i)<min){
                min=elements.at(i);
            }
        }
        maximumDifference=max-min;
    }
    
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
