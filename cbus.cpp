#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();
const int N = 35;

int m, n, k;
vector<int> v[N];
bool conflicts[N][N];
int load[N];
int maxLoad = INF;

void init() {
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        int u;
        cin >> u;
        for (int j = 0; j < u; j++) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    cin >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        conflicts[x][y] = conflicts[y][x] = true;
    }
}

bool check(int t, int course) {
    for (int i = 1; i < course; i++) {
        if (load[i] > 0 && conflicts[course][i] && load[i] == t) {
            return false;
        }
    }
    return true;
}

void updateSolution() {
    int maxLoad = load[1];
    for (int i = 2; i <= n; i++) {
        maxLoad = max(maxLoad, load[i]);
    }
    ::maxLoad = min(::maxLoad, maxLoad);
}

void assignCourses(int course) {
    if (course > n) {
        updateSolution();
        return;
    }

    for (int t = 0; t < m; t++) {
        for (int i = 0; i < v[t].size(); i++) {
            int courseCandidate = v[t][i];
            if (check(t + 1, courseCandidate)) {
                load[course] = t + 1;
                assignCourses(course + 1);
                load[course] = 0;
            }
        }
    }
}

int main() {
    init();
    assignCourses(1);

    if (::maxLoad == INF) {
        cout << -1;
    } else {
        cout << ::maxLoad;
    }

    return 0;
}