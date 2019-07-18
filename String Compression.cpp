#include <iostream>
#include <unordered_map>
#include <vector>
#include <string> 
using namespace std;

vector <string> stringCompression(string str){
    int count = 1;
    vector <string> result;
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i + 1]){
            count++;
        }
        else{
            result.push_back(to_string(count));
            string s(1,str[i]);
            result.push_back(s);
            count = 1;
        }
    }
    return result;    
}


int main(){

    vector <string> ans = stringCompression("aabcccccaaaaaaa") ;
    for (const auto& it : ans) cout << it;

    cout << endl;
    return 0;
}
