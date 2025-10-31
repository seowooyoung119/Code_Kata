#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n) {
    // 1. n x n 삼각형 공간 생성
    vector<vector<int>> triangle(n, vector<int>(n, 0));

    // 2. 방향 벡터: 아래, 오른쪽, 왼쪽 위
    int dr[3] = {1, 0, -1};
    int dc[3] = {0, 1, -1};

    int r = 0, c = 0;  // 시작 위치
    int num = 1;       // 채워 넣을 숫자
    int dir = 0;       // 현재 방향 (0=down, 1=right, 2=up-left)
    int total = n * (n + 1) / 2;

    // 3. 달팽이 채우기
    while (num <= total) {
        triangle[r][c] = num++; // 현재 위치 채우기

        int nr = r + dr[dir];
        int nc = c + dc[dir];

        // 다음 칸이 범위 밖이거나 이미 채워진 경우 → 방향 전환
        if (nr >= n || nc >= n || nr < 0 || nc < 0 || triangle[nr][nc] != 0) {
            dir = (dir + 1) % 3;  // 방향 회전
            nr = r + dr[dir];
            nc = c + dc[dir];
        }

        r = nr;
        c = nc;
    }

    // 4. 결과를 1차원 벡터로 변환
    vector<int> answer;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j <= i; ++j)
            answer.push_back(triangle[i][j]);

    return answer;
}
