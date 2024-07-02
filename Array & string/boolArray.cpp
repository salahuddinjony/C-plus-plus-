#include<iostream>
using namespace std;
int main(){
int n,m;
cin >> n >> m;
bool arr[5][5] = {false};
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
}