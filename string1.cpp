#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*string*/ void sortStringInAsciiValue(string &str){
    vector<int> arr(26,0);
    for(int i=0; i<str.length(); i++){
        arr[str[i]-'a']++;
    }
    int j=0;
    for(int i=0; i<26; i++){
        while(arr[i]>0){
            str[j]=i+'a';
            j++;
            arr[i]--;
        }
    }
    // return str;

}

int binarySearch(string str, char ch){
    int endPtr=(str.length()-1), startPtr=0, mid;
    while(endPtr>=startPtr){
        mid = (endPtr+startPtr)/2;
        if(ch>str[mid]) startPtr = mid+1;
        else if(ch<str[mid]) endPtr = mid-1;
        else return mid;
    }
    return -1;
}

int main(){
    string str;
    cout<<"enter your string\n";
    cin>>str;
    sortStringInAsciiValue(str);
    cout<<"sorted string is\n"<<str<<endl;
    cout<<"enter your searching character\n";
    char ch;
    cin>>ch;
    cout<<"your character at index"<<binarySearch(str,ch);
    return 0;
}