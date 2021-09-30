#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string result;
    int hour = stoi(s.substr(0,2));
    
    if(s.substr(8) == "PM" && hour != 12){
        hour = hour + 12;
        result = to_string(hour).append(s.substr(2, 6));
    }else if(s.substr(8) == "AM" && hour == 12){
        string beginning = "00";
        result = beginning.append(s.substr(2, 6));
    }else{ result = s.substr(0,8); }
    
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

