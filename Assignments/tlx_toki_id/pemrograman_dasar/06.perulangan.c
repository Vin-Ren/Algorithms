#include <stdio.h>


// Assignments : https://tlx.toki.id/courses/basic/chapters/06/problems



// B. For
int _for() {
    int maxIter, total, curr, i;
    total=0; // TLX.TOKI.ID doesn't like a variable not being defined
    scanf("%d\n", &maxIter);
    for (i=0; i<maxIter; i++) {
        scanf("%d", &curr);
        total+=curr;
    }
    printf("%d", total);
}



// C. While
int _while() {
    char buf[101];
    while (scanf("%s\n", &buf) != EOF) {
        printf("%s\n", buf);
    }
}



// D. While + Pencacah
int _while_plus_pencacah() {
    int total, i;
    total=0; // TLX.TOKI.ID doesn't like a variable not being defined
    while (scanf("%d\n", &i) != EOF) {
        total+=i;
    }
    printf("%d\n", total);
}



// E. Dua Pangkat
int main () {
    int i = 0;

    scanf("%d", &i);

    while (i % 2 !=1) {
        i /= 2;
    }
    if (i != 1) {
        printf("bukan");
    } else {
        printf("ya");
    }
}



// F. Faktor Bilangan
int faktor_bilangan() {
    int num;

    scanf("%d", &num);

    for (int i=num;i>0;i--) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
}



// G. Statistika Sederhana
int statistika_sederhana() {
    int n;
    int min=100001; // Max bound
    int max=-100001; // Min bound
    
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        int curr;
        scanf("%d", &curr);

        if (min > curr) {
            min = curr;
        }
        if (max < curr) {
            max = curr;
        }
    }
    printf("%d %d", max, min);
}



// H. Pola I
int pola_1() {
    int size,n;
    scanf("%d %d", &n, &size);
    for (int i=1; i<=n;i++) {
        if (i % size == 0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
}
