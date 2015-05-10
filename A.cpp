#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void init() {
}

// 変数を書く

int R, C, W;

void input() {
  cin >> R >> C >> W;
}

void output() {
  cerr << R << " " << C << " " << W << endl;
  int ans = (R-1) * (C/W);
  int h = C/W;
  int tans;
  int A=0, B=0;
  if (h > 1) {
    A = 0;
    A += h-2;
    A += W+1;
  }
  B += h-1;
  B += C - (h-1)*W;
  tans = max(A, B);
  cout << ans + tans << endl;
}

int main() {
  init();
  int T;
  cin >> T;
  for (auto t=1; t<=T; t++) {
    cout << "Case #" << t << ": "; 
    input();
    output();
  }
}
