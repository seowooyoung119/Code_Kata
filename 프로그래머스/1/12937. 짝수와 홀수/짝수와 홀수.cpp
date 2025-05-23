// 2로 나눴을 때 나머지가 생기면 홀수.
// 2로 나눴을 때 나머지 안 생기면 짝수다.
// 나머지를 구하는 것은 모듈러스 (%)
// 
// 모듈러스 연산자는 오직 정수형 타입의 자료형에만 쓸 수 있다.

// 추가로 0일 때 짝수로 취급한다는 말 = 나머지가 안 생기면 된다.
//
// 따라서 [ 나머지가 0인지 아닌지 체크 ] >> 그 값에 따라 참과 거짓을 판별해서 출력하면 된다.
// 삼항 연산자를 사용하면 짧게 코드를 칠 수 있다.

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    (0 == (num %2))? answer = "Even": answer = "Odd";
    return answer;
}