
------------------------------------------

food[����] >> [0]�� �����ϰ� �ϴ�
[1][2][3][N]���� �̾ƾ� �ϴµ�.

�̰� ���̸�ŭ �̾ƾ� �ϴµ�.
�� ������ ���� ��ŭ �ؾ� �Ѵ�.

�̰� �տ��� ���� ���ְ�.

�״����� �߰���[0]���� ���� �ְ�.


���������� �Ųٷ� ����� �Ѵ�.
�� �ϰ� ���� �׳� �������� ���� �ʳ� ?

�̰� ���ڿ��� ��Ÿ�� �Ѵ�.

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
