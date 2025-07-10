
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";
    string Water = to_string(0);
    string First_Half = "";
    string Second_Half = "";

    for (int i = 1; i < food.size(); ++i)
    {
        int Food = (food[i] / 2);

        for (int j = Food; j > 0; --j)
        {
            First_Half.append(to_string(i));
        }
    }

    Second_Half = First_Half;

    reverse(Second_Half.begin(), Second_Half.end());

    answer = (First_Half + Water + Second_Half);

    return answer;
}

//======================//
food.size()가 4이면 배열 인덱스는 0, 1, 2, 3이고, i <= food.size()로 하면 i가 1, 2, 3, 4가 됩니다.그래서 food[4]에 접근하게 되어 배열 범위를 초과하는 거죠.
하지만 문제에서 food[0]은 물의 개수이고, 실제 음식은 food[1]부터 시작합니다.그래서 1번 음식은 food[1], 2번 음식은 food[2]... 이런 식으로 되어 있어요.
예를 들어 food = [1, 3, 4, 6]이면:

food[0] = 1 (물)
food[1] = 3 (1번 음식)
food[2] = 4 (2번 음식)
food[3] = 6 (3번 음식)

따라서 접근해야 할 인덱스는 1, 2, 3이고, 이를 위해서는 i < food.size()여야 합니다.
당신이 <= food.size()로 했을 때 i가 1, 2, 3, 4가 되어서 마지막에 food[4]에 접근하게 되는 것이 문제였습니다.배열 크기가 4인데 인덱스 4에 접근하려고 해서 범위 초과 에러가 발생한 거예요.


소감 :
배열 접근을 잘못했다... 젠장 이거 때문에 문제 다 풀고 끙끙거리고 있었다니...

