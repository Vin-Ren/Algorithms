#include <cstdio>


// Assignments : https://tlx.toki.id/courses/basic/chapters/09/problems



// B. Balik Dafter
int balik_dafter() {
    int n, list[100];
    n=0;
    while (scanf("%d", &list[n]) != EOF) {
        n++;
    }
    for (int i=n-1;i>=0;i--) {
        printf("%d\n",list[i]);
    }
}



// C. Modus Terbesar
int modus_terbesar() {
    int inputCount, maxCount, maxNum;
    maxCount=0;
    scanf("%d", &inputCount);

    int list[1001];
    for (int i=0; i<=1000; i++) {
        list[i]=0;
    }

    for (int i=0; i<inputCount; i++) {
        int curr;
        scanf("%d", &curr);
        list[curr]++;
    }

    for (int i=0; i<=1000; i++) {
        if (maxCount <= list[i]) {
            maxCount=list[i];
            maxNum=i;
        }
    }

    printf("%d\n", maxNum);

}



// D. Rotasi Matriks
int rotasi_matriks() {
    int r,c; // row, column

    scanf("%d %d", &r, &c);

    int matrice[r][c];

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    for (int i=0; i<c; i++) {
        for (int j=r-1; j>=0; j--) {
            printf("%d ", matrice[j][i]);
        }
        printf("\n");
    }
}



// E. Perkalian Matriks
int perkalian_matriks() {
    int n,m,p;

    scanf("%d %d %d", &n, &m, &p);

    int m1[n][m], m2[m][p], res[n][p];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i=0; i<n; i++) {

        for (int j=0; j<p; j++) {
            int curr = 0;
            for (int k=0; k<m; k++) {
                curr+=m1[i][k]*m2[k][j];
            }
            res[i][j] = curr;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
