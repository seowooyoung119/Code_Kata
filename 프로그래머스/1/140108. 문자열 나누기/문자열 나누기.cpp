#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    // 첫 글자부터 읽기
    // 첫 글자 == 다음 글자 비교
    // 같으면 같다고 ++ , 다르면 다르고 ++
    // 위의 조건이 같아지면 break;
    // 그 후 count 업
    // 모든 조건 리셋 -> 비교한 글자 인덱스 위치 다음 문자부터 -> 루프 반복
    // 마지막 글자까지 가면 while 종료
    
    int Count = 0;
    int i = 0;
    
    while(i < s.length())
    {
        char ComChar = s[i];
        int Count_Equal = 0;
        int Count_Other = 0;
        
        for(int j = i; j < s.length(); ++j)
        {
            if(ComChar == s[j]) ++Count_Equal;
            else ++Count_Other;
            
            if(Count_Equal == Count_Other) 
            {
                i = j+1;
                break;
            }   
        }
        
        if(Count_Equal != Count_Other) {i = s.length(); ++Count; break;}
        ++Count;
    }
    
    return Count;
}