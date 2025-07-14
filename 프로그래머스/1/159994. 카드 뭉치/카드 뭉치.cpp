#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    string Answer = "";
    int cards1_Index = 0;   
    int cards2_Index = 0;   
        
    for(int i = 0; i < goal.size(); ++i)
    {
        if(cards1_Index < cards1.size() && goal[i] == cards1[cards1_Index])
        {
            ++cards1_Index;
        }
        else if(cards2_Index < cards2.size() && goal[i] == cards2[cards2_Index])
        {
            ++cards2_Index;
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}