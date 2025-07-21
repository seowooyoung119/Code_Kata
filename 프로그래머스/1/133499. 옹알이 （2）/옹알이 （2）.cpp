#include <vector>
#include <string>

using namespace std;

int solution(vector<string> babblings) 
{
    // 옹알이 배열
    vector<string> Words = {"aya", "ye", "woo", "ma"};
    
    // 맞는지 세기
    int count = 0;
    
//=for문 Start=======================================================//
    
    // babblings 범위 기반 찾기
    for (auto babbling : babblings) 
    {
        string lastUsed = ""; // 삭제하며 babbling을 담을 옹알이 
        bool bCanSay = true; // 여전히 삭제 가능한가?
        
//=While문 Start ===========================================================//
        
        // babbling 문자열이 완전히 없어질 때까지 루프
        while (!babbling.empty() && bCanSay) 
        {
            bool found = false; // 같은 옹알이를 찾았는지 체크용 변수
            
            //=for문 Start===========================================================//
            
            // 같은 옹알이 있는 체크
            for (string Word : Words) 
            {
                // babbling의 처음부터 문자열 길이 만큼 빼서 같은지 확인
                if (babbling.substr(0, Word.length()) == Word)
                {
                    // 연속된 발음인지 체크
                    if (lastUsed == Word) { bCanSay = false; break;}
                    
                    // 연속된 발음 아니고 찾았으면 삭제하기
                    babbling = babbling.substr(Word.length());
                    lastUsed = Word;
                    found = true;
                    break;
                }
            }
            //=for문 end==========================================================//
            
            // 더는 못 찾으면 false 처리
            if (!found) bCanSay = false;    
        }
//=While문 End===========================================================//
        
        if (babbling.empty() && bCanSay) ++count;
    }
//=for문 End=======================================================//
    
    return count;
}