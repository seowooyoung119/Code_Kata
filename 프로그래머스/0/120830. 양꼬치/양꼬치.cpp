#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    
    /*
      전체 처먹은 양꼬치 = 시킨 양꼬치
      전체 처먹은 음료수 = 시킨 음료수 + 양꼬치 10번 시키면 하나 줌
      
      전체 양꼬치 값 = 시킨 양꼬치 X 양꼬치 가격
      전체 음료수 값 = 시킨 음료수 X 음료수 가격 - 양꼬치 10번 시키면 하나 주는 거 X 음료수 가격
                                
    */
    int answer =  (n * 12000) + ((k- n/10) * 2000);
    
    return answer;
    
    
}