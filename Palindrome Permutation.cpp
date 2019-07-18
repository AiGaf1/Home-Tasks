#include <iostream>
#include <map>

using namespace std;

bool isPalindrom(string  str){
    map <char, int> dict;
    int oddCount = 0;
    for(const char& ch : str){
        if(ch != ' ')
            dict[ch]++;
    }
    for(const auto& it : dict){
        if(it.second % 2 == 1){
            oddCount++;
        }
    }
    if(oddCount > 1)
        return false;
    
    return true;
}


int main(){
    cout << isPalindrom("taco cat") << endl;

    return 0;
}