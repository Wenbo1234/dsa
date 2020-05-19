#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){

    vector<int> v0;
    vector<int> v1(5,0);

    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);

    int a[5] = {0, 1, 2, 3, 4};
    vector<int> v4(a, *(&a+1));

    cout << "The size of v4 is : " << v4.size() << endl;

    cout << "The first element of v4 is: " << v4[0] << endl;

    cout << "[Version 1] The content of v4 are:";
    for (int i = 0; i < v4.size(); ++i){
        cout << " " << v4[i];
    }
    cout << endl;

    cout << "[Version 2] The contents of v4 are:";
    for (int& item :v4){
        cout << " " << item;
    }
    cout << endl;

    cout << "[Version 3] The contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item ){
        cout << " " << *item;
    }
    cout << endl;

    v4[0] = 5;
    sort(v4.begin(), v4.end());

    v4.push_back(-1);
    v4.pop_back();


}