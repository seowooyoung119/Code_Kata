�ٽ� ���̵�� : 

1. unordered_map<char, int>�� ����Ͽ� �� ������ ������ ���� ��ġ�� �����մϴ�
2. ���ڿ��� ��ȸ�ϸ鼭 ���� ���ڰ� ������ �����ߴ��� Ȯ���մϴ�
3. ������ �����ߴٸ� ���� ��ġ - ���� ��ġ�� �Ÿ��� ����մϴ�
4. ó�� �����ϴ� ���ڶ�� - 1�� �����մϴ�
5. ���� ������ ��ġ�� �ʿ� ������Ʈ�մϴ�

��� : 
�ð� ���⵵ : O(n), ���� ���⵵ : O(1) (�ִ� 26���� �ҹ��ڸ� ����)



#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer; // ������ ���� �迭
    unordered_map<char, int> lastIndex; // �� ������ ������ ���� ��ġ ����

    for (int i = 0; i < s.length(); ++i) // ���ڿ� ó������ ������ ������.
    {
        char currentChar = s[i];

        // ���� ���ڰ� ������ �����ߴ��� Ȯ��
        if (lastIndex.find(currentChar) != lastIndex.end()) 
        {
            // ������ �����ߴٸ� �Ÿ� ��� (���� ��ġ - ���� ��ġ)
            int distance = i - lastIndex[currentChar];
            answer.push_back(distance);
        }
        else 
        {
            // ó�� �����ϴ� ���ڶ�� -1
            answer.push_back(-1);
        }

        // ���� ������ ��ġ�� ������Ʈ
        lastIndex[currentChar] = i;
    }

    return answer;
}

// �˰� �� �Լ��� //

vector<pair<typename1, typename2>>
comapare()
.find() // unordered_map
.end() // unoredered_map
.count() //  unoredered_map
.contains() //  unoredered_map C++20 �̻�

