#include <stdio.h>


// Assignments : https://tlx.toki.id/courses/basic/chapters/05/problems



// B. If Then
int if_then() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        printf("%d\n", n);
    }
}



// C. If Then Multi
int if_then_multi() {
    int n;
    scanf("%d", &n);
    if (n > 0 && n%2==0) {
        printf("%d\n", n);
    }
}



// D. If Then Else
int if_then_else() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        printf("positif\n");
    } else if (n < 0) {
        printf("negatif\n");
    } else {
        printf("nol\n");
    }
}



// E. If Then Case
int if_then_case() {
    int n;
    scanf("%d", &n);
    if (n >= 10000) {
        printf("puluhribuan\n");
    } else if (n >= 1000) {
        printf("ribuan\n");
    } else if (n >= 100) {
        printf("ratusan\n");
    } else if (n >= 10) {
        printf("puluhan\n");
    } else {
        printf("satuan\n");
    }
}



// F. Floor dan ceiling
int main() {
    float n;
    int f,c;
    scanf("%f", &n);
    if ((int)n == n){
        c = (int)n;
        f = (int)n;
    } else {
        if (n > 0) {
            c = trunc(n+1);
            f = trunc(n);
        } else if (n < 0) {
            c = trunc(n);
            f = trunc(n-1);
        }
    }

    printf("%d %d\n", f, c);
}



// G. utility function - absolute value
int absval(int x);


// G. Jarak Manhattan
int jarak_manhattan() {
    int x1,y1,x2,y2, dx, dy;
    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
    dx = absval(x1-x2);
    dy = absval(y1-y2);
    printf("%d\n", dx+dy);
}


int absval(int x) {
    if (x > 0 || x == 0) {
        return x;
    } else {
        return -x;
    }
}
