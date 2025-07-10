#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(vector<int> food) 
{
    string answer = "";
    string Half_Food ="";
    string All_Food = "";
    
    for(int i = 1; i < food.size(); ++i)
    {
        int Food_Count = food[i] / 2;
        
        for(int j = 0; j < Food_Count; ++j)
        {
            Half_Food.append(to_string(i));
        }        
    }
    
    All_Food = Half_Food;
  
    reverse(Half_Food.begin(), Half_Food.end());
    
    All_Food += '0';
        
    All_Food += Half_Food;
    
    answer = All_Food;
    
    return answer;
}