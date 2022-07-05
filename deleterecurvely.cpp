#include <iostream>
using namespace std;

void removeRecursiveLetter(char s[]){
    if(s[0] == '\0'){
        return;
    }
    char save;
    if(s[0] == s[1]){
        for(int i = 0; s[i] != '\0'; i++){
            s[i] = s[i + 1];
            removeRecursiveLetter(s);
        }
    }else{
        return removeRecursiveLetter(s + 1);
    }
}

int main(){
    char s[100];
    cin >> s;

    removeRecursiveLetter(s);
    cout << s;
}