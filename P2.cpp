/*
IS-LAB
PROGRAM NO.2
SUBSTITUTION CIPHER
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string alph="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890~!@#$%^&*()";
    string key="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM0987654321)(*&^%$#@!~";
    cout<<"Enter string to cipher : ";
    string str;
    char ch;
   
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        ch = str[i];
        for(int j=0;j<alph.length();j++){
            if(ch==alph[j]){
                str[i]=key[j];
            }
        }
    }
   
    cout<<"Ciphered string : "<<str<<endl;
    for(int i=0;i<str.length();i++){
        ch = str[i];
        for(int j=0;j<key.length();j++){
            if(ch==key[j]){
                str[i]=alph[j];
            }
        }
    }
    cout<<"Deciphered string : "<<str;
}
