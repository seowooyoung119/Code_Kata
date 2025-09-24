#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;
    unordered_map<string, int> need;

    for (int i = 0; i < want.size(); i++)
    {
        need[want[i]] = number[i];
    }

    int n = discount.size();

    for (int i = 0; i <= n - 10; i++) 
    {
        unordered_map<string, int> window;

        for (int j = 0; j < 10; j++)
        {
            window[discount[i + j]]++;
        }

        bool ok = true;
        for (auto &p : need) 
        {
            if (window[p.first] != p.second) 
            {
                ok = false;
                break;
            }
        }

        if (ok) answer++;
    }

    return answer;
}
