#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

vector<string> split(string str, char delimiter);

int main()
{
    string tmp;
    string strBR = "$$BR 46.92, 0.739, 12.797, 273, 7210 % ##";		// $$BR Speed, Direction, Launch Angle, Side Spin, Back Spin% ##
    string strCR = "$$CARRY 158.64, 162.3 % ##";						// $$CARRY Carry, total
    string strCL = "$$CLUB 50.8, -2.4, -12.8, 32.8 % ##";
    string str = "";    // strBR;

    stringstream ss;
    //ss.str("$$BR 46.92, 0.739, 12.797, 273, 7210 % ##");
    str = regex_replace(strCR, regex(","), "");

    vector<string> result = split(str, ' ');
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
    //if (str[2] == 'B' && str[3] == 'R')
    //{

    //}
    //vector<string> result = split(strBR, ' ');
    //for (int i = 0; i < result.size(); i++)
    //{
    //    cout << result[i] << "\n";
    //}

    return 0;
}

vector<string> split(string input, char delimiter)
{
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter))
    {
        answer.push_back(temp);
    }

    return answer;
}