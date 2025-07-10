
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
food.size()�� 4�̸� �迭 �ε����� 0, 1, 2, 3�̰�, i <= food.size()�� �ϸ� i�� 1, 2, 3, 4�� �˴ϴ�.�׷��� food[4]�� �����ϰ� �Ǿ� �迭 ������ �ʰ��ϴ� ����.
������ �������� food[0]�� ���� �����̰�, ���� ������ food[1]���� �����մϴ�.�׷��� 1�� ������ food[1], 2�� ������ food[2]... �̷� ������ �Ǿ� �־��.
���� ��� food = [1, 3, 4, 6]�̸�:

food[0] = 1 (��)
food[1] = 3 (1�� ����)
food[2] = 4 (2�� ����)
food[3] = 6 (3�� ����)

���� �����ؾ� �� �ε����� 1, 2, 3�̰�, �̸� ���ؼ��� i < food.size()���� �մϴ�.
����� <= food.size()�� ���� �� i�� 1, 2, 3, 4�� �Ǿ �������� food[4]�� �����ϰ� �Ǵ� ���� ���������ϴ�.�迭 ũ�Ⱑ 4�ε� �ε��� 4�� �����Ϸ��� �ؼ� ���� �ʰ� ������ �߻��� �ſ���.


�Ұ� :
�迭 ������ �߸��ߴ�... ���� �̰� ������ ���� �� Ǯ�� �����Ÿ��� �־��ٴ�...

