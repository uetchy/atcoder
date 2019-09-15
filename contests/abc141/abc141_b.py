#奇数文字目がすべて R, U, D のいずれか。#
# 偶数文字目がすべて L, U, D のいずれか。

S = input()
if S[::2].find('L') == -1 and S[1::2].find('R') == -1:
    print('Yes')
else:
    print('No')
