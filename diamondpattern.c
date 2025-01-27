#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("number: ");
    scanf("%d", &n);

    int max_width = 2 * n - 1;

    for (int i = 0; i < max_width * max_width; i++) {
        // current row and column information
        // like coordinates of points in matrix
        int row = i / max_width + 1;
        int col = i % max_width + 1;

        // absolute distance to the middle line
        int distance = abs(col - n);

        // print spaces or numbers
        // row <= n decides whether the top or bottom of the shape
        if (row <= n) {
            if (col >= n - row + 1 && col <= n + row - 1)
                printf("%2d", row - distance);
            else
                printf("  ");
        } else {
            if (col >= row - n + 1 && col <= max_width - (row - n))
                printf("%2d", max_width - row + 1 - distance);
            else
                printf("  ");
        }

        // move to the next line if we reached the end of the row
        if (col == max_width) {
            printf("\n");
        }
    }
}
