#include <algorithm>
#include <bitset>
// #include <boost/algorithm/string/replace.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define FOR(i, j, n) for (int i = j; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cin >> a[i];
#define LIST(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cout << i << ": " << a[i] << endl;
#define PP(label, obj) cout << "[" << label << "] " << obj << endl;

inline int pow2_(int _x, int _r, int _n) {
  if (_n == 0)
    return _r;

  return pow2_(_x, _r * _x, _n - 1); //末尾再帰最適化
}
inline int pow2(int _x, int _n) {
  return pow2_(_x, 1, _n);
}

int main() {
  long long N;
  IN(N);

  string S;
  IN(S);

  OUT(S);

  vector<string> st;

  int ran = 5;
  while (ran > 2) {
    for (int k = 0; k < ran; k++) {
      // レンジを狭めていく ran
      int testNum = N - ran + 1;
      for (int i = 0; i < testNum; i += ran) {
        string sub = S.substr(k * i, ran);
        st.push_back(sub);
        OUT(sub);
      }
      sort(st.begin(), st.end());
      int uniqueCount = unique(st.begin(), st.end()) - st.begin();
      OUT(testNum - uniqueCount);
      if (testNum - uniqueCount > 0) {
        OUT(ran);
        return 0;
      }
      st.clear();
    }
    ran -= 1;
  }
  OUT(0);
}