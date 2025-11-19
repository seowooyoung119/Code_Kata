#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// "HH:MM" -> 총 분으로 변환
int ToMinutes(const string& t)
{
    int hour = stoi(t.substr(0, 2));
    int min  = stoi(t.substr(3, 2));
    return hour * 60 + min;
}

int solution(vector<vector<string>> book_time) {
    // 1. [시작, 종료+청소] 구간을 분 단위로 변환해서 저장
    vector<pair<int,int>> times;
    times.reserve(book_time.size());
    
    for (const auto& bt : book_time) {
        int start = ToMinutes(bt[0]);
        int end   = ToMinutes(bt[1]) + 10; // 청소시간 10분 포함
        times.push_back({start, end});
    }
    
    // 2. 시작 시간 기준으로 정렬
    sort(times.begin(), times.end(),
         [](const pair<int,int>& a, const pair<int,int>& b){
             return a.first < b.first;
         });
    
    // 3. 최소 힙: 현재 사용 중인 방들의 "종료 시각(퇴실+청소 끝)" 관리
    priority_queue<int, vector<int>, greater<int>> pq;
    int answer = 0;
    
    for (const auto& t : times) {
        int start = t.first;
        int end   = t.second;
        
        // 가장 빨리 비는 방의 종료 시간이
        // 새 손님의 시작 시간보다 작거나 같으면 재사용 가능
        if (!pq.empty() && pq.top() <= start) {
            pq.pop(); // 이 방 재사용
        }
        
        // 현재 예약을 하나의 방에 배정 (새 방이든 재사용이든)
        pq.push(end);
        
        // 동시에 사용 중인 방 수의 최댓값 갱신
        if ((int)pq.size() > answer) {
            answer = (int)pq.size();
        }
    }
    
    return answer;
}
