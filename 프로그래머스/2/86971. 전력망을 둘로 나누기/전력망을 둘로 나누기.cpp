#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int bfs_count(int start, vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    int count = 1;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int next : graph[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
                count++;
            }
        }
    }
    return count;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 1e9;

    // 모든 전선 하나씩 끊어보기
    for (int i = 0; i < wires.size(); i++) {
        vector<vector<int>> graph(n + 1);

        // 현재 전선 i만 제외하고 그래프 구성
        for (int j = 0; j < wires.size(); j++) {
            if (i == j) continue;
            int a = wires[j][0];
            int b = wires[j][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        // BFS로 한쪽 컴포넌트 크기 세기
        vector<bool> visited(n + 1, false);
        int countA = bfs_count(1, graph, visited); 
        int countB = n - countA;

        int diff = abs(countA - countB);
        answer = min(answer, diff);
    }

    return answer;
}
