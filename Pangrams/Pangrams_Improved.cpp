#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int arr[26] = {0};
    
    for(int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    
    
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == 0)
        {
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

