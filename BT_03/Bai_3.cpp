#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */


// 12:01:00AM--> 00:01:00
// 02:27:00AM--> 02:27:00
// 12:55:00PM--> 12:55:00
// 01:55:00PM--> 13:55:00 


string timeConversion(string s) {
    if(s.substr(8,2) == "AM" && s.substr(0,2) == "12") s = "00" + s.substr(2, 6);
    else if(s.substr(8, 2) == "AM" && s.substr(0,2) != "12" ) s =  s.substr(0,8);
    else if(s.substr(8,2) == "PM" && s.substr(0,2) == "12") s = s.substr(0, 8);
    else if(s.substr(8, 2) == "PM" && s.substr(0,2) != "12")
    {
        int chuyen_int = stoi(s.substr(0, 2)) + 12;
        string chuyen_str = to_string(chuyen_int);
        s = chuyen_str + s.substr(2, 6);
       
    }
     return s;
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
