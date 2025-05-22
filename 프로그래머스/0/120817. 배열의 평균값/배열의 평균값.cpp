    // vector<int> numbers
    // C++ 표준 라이브러리(STL)의 vector 컨테이너 역할
    // N의 크기 만큼 배열을 생성하며, 동시에 각 배열의 값을 0으로 초기화한다.
    // 이후 numbers.push_back(n); 을 통한 원소 추가
    
    // 제한 사항
    // 0 ≤ numbers의 원소 ≤ 1,000
    // 1 ≤ numbers의 길이 ≤ 100
    
    // 평균 = 합 * 개수 

    // 개수 = size() 함수를 통해 알 수 있음
    // 합 =  for 루프로 돌려서 각 숫자의 합을 더하면 됨

    // 즉, 평균 = for 루프의 합 / size() 함수로 찾은 길이

    // 만약 안에 있는 원소가 1개거나 텅 비었을 경우에 계산할 필요가 없음.

    // 소수점을 포함하도록 해야 하니 평균 구할 때 실수로 형변환 필요

#include <string>
#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int sum = 0;
    int Nsize = size(numbers);

    switch (size(numbers))
    {
        case 0: { return answer = 0.0; }
        case 1: { return answer = 1.0; }

        default:
        for (int i = 0; i < Nsize; ++i) { sum = sum + numbers[i]; }
        break;

    }
    
    answer = (double)sum / (double)Nsize;
    
    return answer;
}