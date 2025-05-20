#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 0;
    
     if(angle > 0 && angle < 90)    {answer = 1;}
     if(90 == angle)                {answer = 2;}
     if(angle > 90 && angle < 180)  {answer = 3;}
     if(180 == angle)               {answer = 4;}
    
     return answer;
}