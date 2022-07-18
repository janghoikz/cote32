#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcs(int a, int b) {
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {

    int ans = 1;
    for (int i = 0; i < arr.size(); i++) {
        ans = lcs(ans, arr[i]);
    }

    return ans;
}

int main()
{
    std::cout << "Hello World!\n";
}