#include <string>
#include <vector>

using namespace std;

    //유클리드 호제법
   int gcd(int a, int b) 
   { 
        if (b == 0) return a;   
        return gcd(b, a % b);                       
   }

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2; 
    int Gcd = gcd(numer,denom);
        
    answer.push_back(numer/Gcd); // 백터의 맨 끝에 데이터 추가해주는 함수
    answer.push_back(denom/Gcd); // 백터의 맨 끝에 데이터 추가해주는 함수
    
    return answer;
}