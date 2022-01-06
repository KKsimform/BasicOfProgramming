#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Declare variables to store count of vowels
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    string s;
    // Read given string from STDIN
    cin >> s;

    int s_len = s.length();
    if(s_len>=1 || s_len<=100){
    // Iterate over each character in the string
    for(int z=0; z<s_len; z++) {
    

        // Check for each number in if else
         if(s[z] == '0') {
            a[0]++;
        } else if(s[z] == '1') {
            a[1]++;
        } else if(s[z] == '2') {
            a[2]++;
        } else if(s[z] == '3') {
            a[3]++;
        } else if(s[z] == '4') {
            a[4]++;
        } else if(s[z] == '5') {
            a[5]++;
        } else if(s[z] == '6') {
            a[6]++;
        } else if(s[z] == '7') {
            a[7]++;
        } else if(s[z] == '8') {
            a[8]++;
        } else if(s[z] == '9') {
            a[9]++;
        }
    } 
    

    // Print out the result 
    
    for(int z=0;z<=9;z++)
    {
        cout << z <<" " << a[z] << endl;
    }
    }
    else {
        cout << "Invalid input";
    }  
}
