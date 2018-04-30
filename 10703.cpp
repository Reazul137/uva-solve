#include <bits/stdc++.h>

using namespace std;
int main() {
  int W, H, N;
  while (scanf("%d%d%d", &W, &H, &N) != EOF) {
    if( W == 0 && H == 0 && N == 0) break;
    bool spot[501][501] = {};
    while (N--) {
      int x1, x2, y1, y2;
      scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
      if (x2 < x1) {
        swap(x1, x2);
      }
      if (y2 < y1) {
        swap(y1,y2);
      }
      for (int x = x1; x <= x2; x++) {
        for (int y = y1; y <= y2; y++) {
          spot[x][y] = true;
        }
      }
    }
    int flag = 0;
    for (int x = 1; x <= W; x++) {
      for (int y = 1; y <= H; y++) {
        flag += !spot[x][y];
      }
    }
    if (!flag) {
      puts("There is no empty spots.");
    } else if (flag == 1) {
      puts("There is one empty spot.");
    } else {
      printf("There are %d empty spots.\n", flag);
    }
  }
  return 0;
}

