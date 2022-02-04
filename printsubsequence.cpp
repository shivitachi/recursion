#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
    if(s.empty())
    { return{""};
    }


    char firstChar = s[0];
    string newStr = s.substr(1);
    vector<string> subseqs = gss(newStr);
    vector<string> res;

    for(string i : subseqs){
        res.push_back(i);
    }

    for(string i:subseqs){
        res.push_back(firstChar+i);
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << "[";
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << "]";
}
