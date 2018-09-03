using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
main(){
    vector<int> input;
    int n,m,temp;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> temp;
        input.push_back(temp);
    }
    sort(input.begin(),input.end());
    cout << input[0];
    for(int i=1)
    /*
    vector<int>::iterator max_input = input.end()-1;
    for(vector<int>::iterator itr = input.begin();itr!=input.end();itr++){
        
    }
    */
    
}
