#include <string>
#include <vector>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    using int64 = long long;

    const int n1 = (int)queue1.size();
    const int n2 = (int)queue2.size();

    // 1) 합 계산: long long으로
    int64 sum1 = 0, sum2 = 0;
    for (int x : queue1) sum1 += (int64)x;
    for (int x : queue2) sum2 += (int64)x;
    const int64 total = sum1 + sum2;

    // 2) 전체 합이 홀수면 절대 같게 못 만듦
    if (total % 2LL != 0LL) return -1;
    const int64 target = total / 2LL;

    // (선택적 조기 탈출) queue1이나 queue2에 target보다 큰 단일 원소가 있으면 불가능
    // (큐 구조상 그 원소가 들어간 쪽 합이 항상 target을 초과하게 됨)
    // ※ 문제의 제약상 필수는 아니지만 불필요한 탐색을 줄여줄 수 있음.
    auto too_big = [target](const vector<int>& v){
        for (int x : v) if ((long long)x > target) return true;
        return false;
    };
    if (too_big(queue1) || too_big(queue2)) return -1;

    // 3) 실 큐 구성
    queue<int64> q1, q2;
    for (int x : queue1) q1.push((int64)x);
    for (int x : queue2) q2.push((int64)x);

    // 4) 시뮬레이션
    //    - sum1 == target이면 종료
    //    - sum1 > target : q1 -> q2
    //    - sum1 < target : q2 -> q1
    //    - 연산 상한: 3*(n1+n2) (충분히 넉넉)
    const long long limit = 3LL * (n1 + n2);
    long long ops = 0;

    while (ops <= limit) {
        if (sum1 == target) return (int)ops;

        if (sum1 > target) {
            if (q1.empty()) return -1;               // 더 못 빼면 불가능
            int64 x = q1.front(); q1.pop();
            sum1 -= x; sum2 += x;
            q2.push(x);
        } else {
            if (q2.empty()) return -1;               // 더 못 가져오면 불가능
            int64 x = q2.front(); q2.pop();
            sum2 -= x; sum1 += x;
            q1.push(x);
        }
        ++ops;
    }

    // 5) 상한을 넘도록 못 맞추면 불가능 판정
    return -1;
}
