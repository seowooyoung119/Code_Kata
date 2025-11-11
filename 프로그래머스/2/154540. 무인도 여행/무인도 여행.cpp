#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> maps)
{
    
    const int R = static_cast<int>(maps.size());
    const int C = static_cast<int>(maps[0].size());

    vector<vector<bool>> visited(R, vector<bool>(C, false));

    // 상하좌우 이동 벡터 (row, col)
    const int dr[4] = { -1, 1, 0, 0 };
    const int dc[4] = { 0, 0, -1, 1 };

    vector<int> sums;

    auto inBounds = [&](int r, int c) -> bool 
    {
        return (r >= 0 && r < R && c >= 0 && c < C);
    };

    for (int r = 0; r < R; ++r)
    {
        for (int c = 0; c < C; ++c) 
        {
            // 바다거나 이미 방문했으면 패스
            if (maps[r][c] == 'X' || visited[r][c]) continue;

            // 숫자 칸에서 BFS 시작
            queue<pair<int,int>> q;
            visited[r][c] = true;
            q.push({r, c});

            long long islandSum = 0; // 안전하게 누적
            
            while (!q.empty()) 
            {
                auto [cr, cc] = q.front(); q.pop();

                // 현재 칸의 식량(문자 '1'~'9')을 정수로 변환
                islandSum += (maps[cr][cc] - '0');

                // 4방향 확장
                for (int k = 0; k < 4; ++k)
                {
                    int nr = cr + dr[k];
                    int nc = cc + dc[k];
                    if (!inBounds(nr, nc)) continue;
                    if (visited[nr][nc]) continue;
                    if (maps[nr][nc] == 'X') continue; // 바다는 제외

                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }

            sums.push_back(static_cast<int>(islandSum));
        }
    }

    if (sums.empty())
    {
        return vector<int>{-1};
    }

    sort(sums.begin(), sums.end());
    return sums;
}
