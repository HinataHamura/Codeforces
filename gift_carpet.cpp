#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        char carpet[20][20];
        for (int i = 0; i < n; ++i) {
            scanf("%s", carpet[i]);
        }

        int result = 0;
        for (int col1 = 0; col1 < m; ++col1) {
            for (int col2 = col1 + 1; col2 < m; ++col2) {
                for (int col3 = col2 + 1; col3 < m; ++col3) {
                    for (int col4 = col3 + 1; col4 < m; ++col4) {
                        int v_count = 0, i_count = 0, k_count = 0, a_count = 0;
                        for (int row = 0; row < n; ++row) {
                            if (carpet[row][col1] == 'v') v_count++;
                            if (carpet[row][col2] == 'i') i_count++;
                            if (carpet[row][col3] == 'k') k_count++;
                            if (carpet[row][col4] == 'a') a_count++;
                        }
                        if (v_count >= 1 && i_count >= 1 && k_count >= 1 && a_count >= 1) {
                            result = 1;
                            break;
                        }
                    }
                    if (result) break;
                }
                if (result) break;
            }
            if (result) break;
        }

        printf(result ? "YES\n" : "NO\n");
    }

    return 0;
}
