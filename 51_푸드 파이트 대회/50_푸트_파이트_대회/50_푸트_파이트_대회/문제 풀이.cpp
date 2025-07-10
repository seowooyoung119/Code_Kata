
------------------------------------------

food[문제] >> [0]을 제외하고 일단
[1][2][3][N]까지 뽑아야 하는데.

이걸 길이만큼 뽑아야 하는데.
각 원소의 절반 만큼 해야 한다.

이걸 앞에서 먼저 해주고.

그다음에 중간에[0]으로 물을 넣고.


다음번에는 거꾸로 해줘야 한다.
다 하고 저거 그냥 뒤집으면 되지 않나 ?

이게 문자열로 나타야 한다.

-------------------------------------------- -

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

//================//
#include <algorithm>
std::reverse(str.begin(), str.end());
