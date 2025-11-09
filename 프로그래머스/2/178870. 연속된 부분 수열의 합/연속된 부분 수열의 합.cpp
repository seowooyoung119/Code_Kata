#include <vector>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int n = sequence.size();
    int start = 0, end = 0;
    long long sum = 0;
    
    int bestStart = 0, bestEnd = n - 1;
    int bestLength = n + 1;
    
    while (true) {
        if (sum >= k) {
            if (sum == k) {
                int length = end - start;
                if (length < bestLength) {
                    bestLength = length;
                    bestStart = start;
                    bestEnd = end - 1;
                }
            }
            sum -= sequence[start++];
        } else {
            if (end == n) break;
            sum += sequence[end++];
        }
    }
    
    return {bestStart, bestEnd};
}
