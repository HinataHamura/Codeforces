#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char grd[8][8];
        char word[8];
        
        
        for (int i = 0; i < 8; i++) {
            scanf("%s", grd[i]);
        }

        int wordLength=0;
        for (int row = 0; row < 8; row++) {
            
            for (int col = 0; col < 8; col++) {
                if (grd[row][col] != '.') {
                    word[wordLength] = grd[row][col];
                    wordLength++;
                }
            }
            
        }
        word[wordLength]='\0';
        printf("%s\n",word);
        
    }

    return 0;
}
