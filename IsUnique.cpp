#include <iostream>
#include <algorithm>

using  namespace std;
bool isUnique(string s){
   sort(s.begin(), s.end());
   for(int i = 0; i < s.size(); i++){
      if(s[i] == s[i + 1]) return false;
      
      return true;
   }
}

bool isUnique2(string str) {
   if (str.length() > 128) return false;

   bool char_set[128];
   for (int i= 0; i < str.length(); i++) {
      int val = str[i];
         if (char_set[val]) {//Already found this char in string
            return false;
         }
      char_set[val] = true;
   }
   return true;
 }

int main(){

   string  s = "abcdd";
   cout << isUnique2(s) << endl;  

   return 0;
}