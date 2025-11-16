#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int N, vector<vector<int>> road, int K) {
    // 1. 인접 리스트 구성
    vector<pair<int,int>> graph[51]; // 최대 N=50
    for (auto& r : road) {
        int a = r[0];
        int b = r[1];
        int c = r[2];
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    // 2. 다익스트라 초기 설정
    const int INF = 1e9;
    vector<int> dist(N+1, INF);
    dist[1] = 0;

    priority_queue<pair<int,int>, 
                   vector<pair<int,int>>, 
                   greater<pair<int,int>>> pq;
    pq.push({0, 1}); // (거리, 노드)

    // 3. 다익스트라
    while (!pq.empty()) {
        auto [time, node] = pq.top();
        pq.pop();

        if (dist[node] < time) continue;

        for (auto& next : graph[node]) {
            int nextNode = next.first;
            int nextTime = time + next.second;

            if (nextTime < dist[nextNode]) {
                dist[nextNode] = nextTime;
                pq.push({nextTime, nextNode});
            }
        }
    }

    // 4. K 이하의 마을 수 세기
    int answer = 0;
    for (int i = 1; i <= N; i++) {
        if (dist[i] <= K) answer++;
    }

    return answer;
}
