#include <iostream>

int hailstone(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}
int main() {
    int answer = hailstone(1000);
    std::cout << answer << std::endl;
    return 0;
}
