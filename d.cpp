#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    string n;
    cout<<"Enter your message to deccrypt"<<endl;
    getline(cin,n);

    int key;
    cout<<"enter your key first"<<endl;
    cin >> key;

   

    string r ;

    for(int i = 0 ; i < n.length() ; i++){
        char c = n[i];

        if(c == ' '){
            r += ' ';
            continue;
        }else{
            c -= key;
            r+=c;
        }
    }

    cout << r << endl;
    
}