#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) 
{
    vector<int> answer;
    
    map<string, int> genre_total_plays;              
    map<string, vector<pair<int, int>>> genre_songs; 

    for (int i = 0; i < genres.size(); ++i) 
    {
        genre_total_plays[genres[i]] += plays[i];
        genre_songs[genres[i]].push_back({plays[i], i});
    }

    vector<pair<int, string>> sorted_genres;
    for (auto const& [genre, total_play] : genre_total_plays) 
    {
        sorted_genres.push_back({total_play, genre});
    }
    

    sort(sorted_genres.begin(), sorted_genres.end(), [](const pair<int, string>& a, const pair<int, string>& b)
    {
        return a.first > b.first;
    });

  
    for (auto const& [total_play, genre] : sorted_genres) 
    {
        vector<pair<int, int>>& songs = genre_songs[genre];
        
        sort(songs.begin(), songs.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
        {
            if (a.first != b.first) 
            {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        answer.push_back(songs[0].second);
        
        if (songs.size() > 1) 
        {
            answer.push_back(songs[1].second);
        }
    }

    return answer;
}
