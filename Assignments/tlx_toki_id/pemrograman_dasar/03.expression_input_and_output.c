#include <stdio.h>


// Assignments : https://tlx.toki.id/courses/basic/chapters/03/problems



// B. A Tambah B
int _a_tambah_b() {
    // https://stackoverflow.com/questions/65659198/gcc-compiler-cannot-find-stdio-h
    int a, b; // Variable initialization
    scanf("%d %d", &a, &b); // Getting 2 integer input
    printf("%d\n", a+b); // Prints the sum
}



// C. Burung Beo
int burung_beo() {
    char Buffer[100];
    scanf("%[^\n]", &Buffer);
    printf("%s\n", Buffer);
}



// D. Bebek Untuk Teman
int bebek_untuk_teman() {
    int total, divisor;
    scanf("%d %d", &total, &divisor);
    printf("masing-masing %d\nbersisa %d\n", (total-(total%divisor))/divisor, total%divisor);
}



// E. Luas Segitiga
int luas_segitiga() {
    int a,t;
    scanf("%d %d", &a, &t);
    printf("%.2f", a*t/2.0);
    // this one casts the result to double:
    //printf("%.2f", (double)a*t/2);
}



// F. Transpos Matriks 
int transpos_matriks() {
    // Matrix size is flexible, as long as it's symetrical (has perfect roots), ex: 1,4,9,16,25,etc.
    int i, j, matrix[9];
    size_t matrix_entry_count = sizeof(matrix) / sizeof(int);
    int matrix_dimension = (int)sqrt(matrix_entry_count);
    for (i=0;i<matrix_entry_count;i++){
        scanf("%d", &(matrix[i]));
    }
    for (i=0;i<matrix_dimension;i++){
        for (j=0;j<matrix_dimension;j++){
            printf("%d ", matrix[i+(matrix_dimension*j)]);
        }
        printf("\n");
    }
}
