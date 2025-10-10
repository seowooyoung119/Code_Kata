#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    queue<int> bridge;   // 다리를 나타내는 큐
    int time = 0;        // 경과 시간
    int current_weight = 0;  // 다리 위 트럭의 총 무게

    // 다리 길이만큼 0으로 초기화 (빈 다리)
    for (int i = 0; i < bridge_length; i++)
        bridge.push(0);

    int index = 0; // 대기 중인 트럭 인덱스

    while (!bridge.empty()) 
    {
        // 1초 경과
        time++;

        // 다리 맨 앞 트럭 내리기
        current_weight -= bridge.front();
        bridge.pop();

        // 새 트럭을 올릴 수 있는지 확인
        if (index < truck_weights.size())
        {
            if (current_weight + truck_weights[index] <= weight) 
            {
                // 트럭 올림
                bridge.push(truck_weights[index]);
                current_weight += truck_weights[index];
                index++;
            } else
            {
                // 트럭 못 올림 (빈 자리 유지)
                bridge.push(0);
            }
        }
    }

    return time;
}
