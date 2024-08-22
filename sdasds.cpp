#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W; // Read height and width of the material

    int n;
    cin >> n; // Read the number of submaterials

    vector<pair<int, int>> submaterials(n); // Store dimensions of submaterials

    for (int i = 0; i < n; ++i) {
        cin >> submaterials[i].first >> submaterials[i].second; // Read dimensions of each submaterial
    }

    // Initialize a 2D array to represent the material
    vector<vector<int>> material(H, vector<int>(W, 0));

    // Mark the submaterials on the material
    for (int i = 0; i < n; ++i) {
        int hi = submaterials[i].first;
        int wi = submaterials[i].second;

        for (int r = 0; r < hi; ++r) {
            for (int c = 0; c < wi; ++c) {
                material[r][c] = 1;
            }
        }
    }

    // Check if the entire material is covered
    for (int r = 0; r < H; ++r) {
        for (int c = 0; c < W; ++c) {
            if (material[r][c] == 0) {
                cout << 0 << endl; // Cannot perform the cut
                return 0;
            }
        }
    }

    // If all cells are covered, print 1
    cout << 1 << endl; // Can perform the cut
    return 0;
}
