#include <stdio.h>


// Assignments : https://tlx.toki.id/courses/basic/chapters/05/problems



// A. Break Continue Exit
int break_continue_exit() {
    int n=0;
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        if (i % 10 == 0) {
            continue;
        }
        if (i == 42) {
            printf("ERROR\n");
            break;
        }

        printf("%d\n", i);
    }
}



// B. Pola II
int pola_2() {
    int n,l,i,j;
    scanf("%d", &n);

    for (l=1;l<=n;l++) {
        for (i=n-l;i>0;i--) {
            printf(" ");
        }
        for (j=1;j<=l;j++) {
            printf("*");
        }
        printf("\n");
    }

}



// C. Pola III
int pola_3() {
    int n,line,curr,i;
    line=1;
    curr=0;
    scanf("%d", &n);

    while (line<=n) {
        for (i=1;i<=line;i++,curr++){
            if (curr == 10) {
                curr = 0;
            }
            printf("%d", curr);
        }
        printf("\n");
        line++;
    }
}
