#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 날짜를 일 단위로 변환하는 함수
int convertDate(const char* date)
{
    int y, m, d;
    sscanf(date, "%d.%d.%d", &y, &m, &d);
    return y * 12 * 28 + m * 28 + d;
}

int* solution(const char* today, const char* terms[], size_t terms_len,
              const char* privacies[], size_t privacies_len, size_t* returnSize) 
{
    // 1. 오늘 날짜 변환
    int todayInt = convertDate(today);

    // 2. 약관별 기간 저장 (A~Z -> 최대 26개)
    int termMap[26] = {0};
    for (size_t i = 0; i < terms_len; i++) {
        char type;
        int months;
        sscanf(terms[i], "%c %d", &type, &months);
        termMap[type - 'A'] = months;
    }

    // 3. 결과 저장할 배열 (최대 privacies_len개)
    int* answer = (int*)malloc(sizeof(int) * privacies_len);
    *returnSize = 0;

    // 4. 개인정보별 검사
    for (size_t i = 0; i < privacies_len; i++) 
    {
        char date[11];  // YYYY.MM.DD (10글자 + NULL)
        char type;
        sscanf(privacies[i], "%10s %c", date, &type);

        // 수집일 변환
        int collected = convertDate(date);

        // 유효기간 적용
        int expire = collected + termMap[type - 'A'] * 28 - 1;

        // 오늘보다 만료일이 작으면 파기 대상
        if (expire < todayInt)
        {
            answer[*returnSize] = i + 1; // 개인정보 번호 = 인덱스 + 1
            (*returnSize)++;
        }
    }

    return answer;
}