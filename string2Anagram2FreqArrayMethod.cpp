#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> frequencyArray(string s){
    vector<int> fre(26,0);
    for(int i=0; i<s.length(); i++){
        fre[s[i]-'a']++;
    }
    return fre;
}
//anagram---> rearranging the given string made new string
bool checkAnagramString(string s, string s2){
    if(s.length() != s2.length()) return false;
    bool flag = false;
    vector<int>arr=frequencyArray(s);
    vector<int>arr2=frequencyArray(s2);
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != arr2[i]){
            flag=true;
            break;
        }
    }
    if(flag != false) return false;
    else return true;
}
int main(){
    string s,s2;
    cout<<"enter your string\n"<<"string1--> ";cin>>s;cout<<"string2--> ";cin>>s2;

    cout<<checkAnagramString(s,s2);

    return 0;
}