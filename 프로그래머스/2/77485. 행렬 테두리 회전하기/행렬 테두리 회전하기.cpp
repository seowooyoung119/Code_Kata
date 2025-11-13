#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;

    // 초기 행렬 생성
    vector<vector<int>> board(rows, vector<int>(columns));
    int num = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            board[i][j] = num++;

    for (auto &q : queries) {
        int x1 = q[0] - 1;
        int y1 = q[1] - 1;
        int x2 = q[2] - 1;
        int y2 = q[3] - 1;

        vector<int> vals;

        // 테두리 값을 vals에 순서대로 저장

        // 위쪽
        for (int y = y1; y <= y2; y++)
            vals.push_back(board[x1][y]);

        // 오른쪽
        for (int x = x1 + 1; x <= x2; x++)
            vals.push_back(board[x][y2]);

        // 아래쪽
        for (int y = y2 - 1; y >= y1; y--)
            vals.push_back(board[x2][y]);

        // 왼쪽
        for (int x = x2 - 1; x > x1; x--)
            vals.push_back(board[x][y1]);

        // 최소값
        int minValue = *min_element(vals.begin(), vals.end());
        answer.push_back(minValue);

        // 한 칸 시계방향 회전
        rotate(vals.rbegin(), vals.rbegin() + 1, vals.rend());

        // 회전된 값을 다시 보드에 채워넣기
        int idx = 0;

        // 위쪽
        for (int y = y1; y <= y2; y++)
            board[x1][y] = vals[idx++];

        // 오른쪽
        for (int x = x1 + 1; x <= x2; x++)
            board[x][y2] = vals[idx++];

        // 아래쪽
        for (int y = y2 - 1; y >= y1; y--)
            board[x2][y] = vals[idx++];

        // 왼쪽
        for (int x = x2 - 1; x > x1; x--)
            board[x][y1] = vals[idx++];
    }

    return answer;
}
