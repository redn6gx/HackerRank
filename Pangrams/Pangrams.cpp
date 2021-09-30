#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> freqMap;
    
    for(int i=0; i<26; i++){
        freqMap.insert({alphabet[i], 0});
    }
    
    for(int i=0; i<s.length(); i++){
        freqMap[tolower(s[i])]++;
    }
    
    map<char, int>::iterator it;
    for(it = freqMap.begin(); it != freqMap.end(); it++){
        if(it->second == 0){
            return "not pangram";
        }
    }
    return "pangram";
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

