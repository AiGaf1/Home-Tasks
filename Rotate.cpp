#include <iostream>
#include <vector>

using namespace std;

vector < vector <int>> rotate(vector < vector <int>>& cube){
    
    int n = cube.size();
    for(int layer = 0; layer < n / 2 ; layer++){
        int first = layer;
        int last = n - 1 - layer;
        for(int i = first; i < last; i++){
            int offset = i - first;
            int top = cube[first][i];
            cube[first][i] = cube[last - offset][first];
            cube[last - offset][first] = cube[i][last];
            cube[i][last] = top;
        }
    }
    return cube;
}

int main(){
    vector < vector <int>> cube{ { 1, 2, 3, 4 }, 
                               { 5, 6, 7, 8}, 
                               { 9, 10, 11, 12 },
                               {13, 14, 15, 16} };
    rotate(cube);
    for(int i = 0; i < cube.size(); i++){
        for(int j = 0; j < cube.size(); j++){
            cout << cube[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}