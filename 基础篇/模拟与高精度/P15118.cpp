#include <iostream>
#include <cstring>
using namespace std;

// 方向：北、东、南、西
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char grid[10][10];
// 状态记录：fx, fy, fd, cx, cy, cd 是否出现过
bool visited[10][10][4][10][10][4] = {false};

// 单步移动：输入当前坐标(x,y)和方向d，返回新坐标(nx, ny)和新方向(nd)
void move(int x, int y, int d, int &nx, int &ny, int &nd) {
    int tx = x + dx[d];
    int ty = y + dy[d];
    // 检查前方是否可走（不越界且不是障碍）
    if (tx >= 0 && tx < 10 && ty >= 0 && ty < 10 && grid[tx][ty] != '*') {
        nx = tx;
        ny = ty;
        nd = d; // 方向不变
    } else {
        nx = x;
        ny = y;
        nd = (d + 1) % 4; // 顺时针转90度
    }
}

int main() {
    int fx, fy, fd = 0; // John初始方向北
    int cx, cy, cd = 0; // 牛初始方向北

    // 读入地图，初始化位置
    for (int i = 0; i < 10; i++) {
        cin >> grid[i];
        for (int j = 0; j < 10; j++) {
            if (grid[i][j] == 'F') {
                fx = i;
                fy = j;
            } else if (grid[i][j] == 'C') {
                cx = i;
                cy = j;
            }
        }
    }

    int time = 0;
    while (true) {
        // 检查是否相遇
        if (fx == cx && fy == cy) {
            cout << time << endl;
            return 0;
        }
        // 检查状态是否重复（循环）
        if (visited[fx][fy][fd][cx][cy][cd]) {
            cout << 0 << endl;
            return 0;
        }
        visited[fx][fy][fd][cx][cy][cd] = true;

        // 同时移动John和牛
        int nfx, nfy, nfd;
        int ncx, ncy, ncd;
        move(fx, fy, fd, nfx, nfy, nfd);
        move(cx, cy, cd, ncx, ncy, ncd);

        // 更新状态
        fx = nfx;
        fy = nfy;
        fd = nfd;
        cx = ncx;
        cy = ncy;
        cd = ncd;

        time++;
    }

    return 0;
}