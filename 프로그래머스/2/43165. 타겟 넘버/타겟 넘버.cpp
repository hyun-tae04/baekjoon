#include <string>
#include <vector>

using namespace std;

int answer = 0;

void find(vector<int> numbers, int target, int sum, int index) {
    if (index == numbers.size()) {
        if (sum == target) {
            answer++;
        }
        return;
    }

    find(numbers, target, sum + numbers[index], index + 1);
    find(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    find(numbers, target, 0,0);

    return answer;
}