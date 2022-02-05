#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> getKPC(string s){
    //Write your code here
vector<string> keypad ={".;", "abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

    if(s==""){
    vector<string> basecall;
    basecall.push_back("");
    return basecall;
    }
    char ch = s[0]; //1
    string ros = s.substr(1); //rest of the string from place 1

    vector<string> res = getKPC(ros);

    vector<string> finalresult;

    int idx = ch -'0';

    for(int i=0; i< keypad[idx].size(); i++){
        char ch = keypad[idx].at(i);
        for(string str : res){
            finalresult.push_back(ch+str);
        }

    }

    return finalresult; 

}


int main(){
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}
