#include <iostream>

using namespace std;


string URLify(string str, int len){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if(str[i] == ' ')
            count++;
    }
    int index = len + count * 3;
    
    if(len < str.length()) str[len] = '\0';

    for(int i =len - 1; i >= 0; i--){
        if(str[i]== ' '){
            str[index - 1] = '0'; 
            str[index - 2] = '2';
            str[index - 3] = '%';
            index -= 3;
        }
        else
            str[index - 1] = str[i];
            index--;     
    }
    return str;
}

int main(){
    cout << URLify(" abc fd if|||||||||", 9) << endl;

    return 0;
}
