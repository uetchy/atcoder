#include <iostream>
using namespace std;

int findSumOfDigits(int n, int s) {
  if (n <= 0) {
    return s;
  }
  s += n % 10;
  n /= 10;
  return findSumOfDigits(n, s);
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int total = 0;

  for (int i = 1; i <= N; ++i) {
    int sum = findSumOfDigits(i, 0);
    if (sum >= A && sum <= B)
      total += i;
  }

  cout << total << endl;
}