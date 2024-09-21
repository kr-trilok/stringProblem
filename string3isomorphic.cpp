#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isIsomorphic(string s, string s2){
    if(s.length() != s2.length()) return false;

    vector<int>asciiArray(128,-1);
    vector<int>asciiArray2(128,-1);

    for(int i=0; i<s.length(); i++){
        if(asciiArray[s[i]] != asciiArray2[s2[i]]) return false;
        asciiArray[s[i]] = asciiArray2[s2[i]] = i;
    }

    return true;
}
int main(){
    string s,s2;
    cout<<"enter your string\n";
    cout<<"string1--> ";cin>>s;
    cout<<"string2--> ";cin>>s2;

    if(isIsomorphic(s,s2))
        cout<<"given string is Isomorphic";
    else
        cout<<"Not Isomorphic";

    return 0;
}