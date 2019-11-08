#include <iostream>
using namespace std;
int proper_fraction(int n)
{
    int answer = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            answer -= answer / i;
        }
    }
    if (n > 1)
        answer-= answer / n;
    return answer * 2;
}

int main() {
    int n;
    cin >> n;
    cout << proper_fraction(n);
    return 0;
}
