#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using  namespace std;
bool checkPermut(string& s1, string& s2){
    
    if(s1.length() != s2.length) return 0;
    
    int letters[128] = {0};

    for(const char& ch : s1){
        letters[ch]++;
    }

    for(const char& ch : s2){
        letters[ch]--;
        if(letters[ch] < 0){
            return 0;
        }
    }
    return 1;
}


int main(){
    string s1 = "abcdeq";
    string s2 = "abceqq";
    cout << checkPermut(s1, s2) << endl;
   return 0;
}