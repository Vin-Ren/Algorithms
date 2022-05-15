#include <cstdio>
#include <cmath>


// Assignments : https://tlx.toki.id/courses/basic/chapters/08/problems



// B. Cek Bilangan Agak Prima
int cek_bilangan_agak_prima() {
    int loopCount;
    scanf("%d", &loopCount);

    for (int loop=0; loop<loopCount; loop++) {
        int n, batas;
        bool prime = true;
        scanf("%d", &n);
        if (n==1) {prime=false;}
        // batas = ceil(sqrt(n));
        // for (int i=2;i<batas;i++) {
        for (int i=2;i*i<=n;i++) {
            if (n%i == 0) {
                prime = false;
            }
        }
        

        prime ? printf("YA\n") : printf("BUKAN\n");
    }
}



// C. Bilangan Agak Prima
int bilangan_agak_prima() {
    int amount;
    scanf("%d", &amount);

    while (amount) {
        int n, count;
        count = 0;
        scanf("%d", &n);

        for (int i=1;i*i<=n;i++) {
            if (n%i == 0) {
                count+=2;
            }
        }

        printf(count <= 4 ? "YA\n" : "BUKAN\n");

        amount--;
    }
}
