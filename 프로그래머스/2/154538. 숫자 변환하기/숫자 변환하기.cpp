#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int x, int y, int n)
{
    if (x == y) return 0;

    vector<int> visited(y + 1, -1);
    queue<int> q;
    q.push(x);
    visited[x] = 0;

    while (!q.empty()) 
    {
        int cur = q.front();
        q.pop();

        vector<int> next = {cur + n, cur * 2, cur * 3};

        for (int nxt : next) 
        {
            if (nxt > y) continue;           // 범위 초과
            if (visited[nxt] != -1) continue; // 이미 방문한 수

            visited[nxt] = visited[cur] + 1; // 연산 횟수 증가
            if (nxt == y) return visited[nxt];

            q.push(nxt);
        }
    }

    return -1; // 도달 불가
}
