#include<iostream>
#include<vector>
#include<string>
using namespace std;
// vector<int> frequencyArray(string s){
//     vector<int> fre(26,0);
//     for(int i=0; i<s.length(); i++){
//         fre[s[i]-'a']++;
//     }
//     return fre;
// }
bool anagramCheck(string s, string s2){
    if(s.length() != s2.length()) return false;
    vector<int>fre(26,0);
    for(int i=0; i<s.length(); i++){
        fre[s[i]-'a']++;
        fre[s2[i]-'a']--;
    }
    for(int i=0; i<fre.size(); i++){
        if(fre[i] != 0) return false;
    }
    return true;
}
int main(){
    string s, s2;
    cout<<"enter your strings\n";
    cout<<"string1--> ";cin>>s;
    cout<<"string1--> ";cin>>s2;

    cout<<anagramCheck(s,s2);

    return 0;
}