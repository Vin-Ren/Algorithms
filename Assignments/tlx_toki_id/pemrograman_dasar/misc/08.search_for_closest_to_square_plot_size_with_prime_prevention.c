#include <stdio.h>
#include <math.h>


// Source : https://tlx.toki.id/courses/basic/chapters/08/lessons/A page 5



int main() {
    int targetNum, absTargetNum, tries;
    int guessCol, guessRow, sqrtRes;
    int prime=1;
    tries = 0;

    scanf("%d", &targetNum);

    if (targetNum==0) {
        printf("Row=%d\nCol=%d\n", 0,0);
    } 
    absTargetNum = abs(targetNum);
    sqrtRes = sqrt(absTargetNum);
    guessCol = guessRow = (int) trunc(sqrtRes);
    
    for (int i=2;i*i<absTargetNum; i++) {
        if (absTargetNum%i == 0) {
            prime=0;
        }
    }
    
    if (prime) {
        printf("Given number is a prime. Exiting...\n");
        return 1;
    }

    if (targetNum < 0){
        guessCol = -guessCol;
    }


    while (tries < absTargetNum) {
        int currentResult = guessCol*guessRow;

        // printf("DEBUG:%d=%d*%d\n", currentResult, guessCol, guessRow);

        if (currentResult == targetNum) {
            // printf("Found Closest To Square Plot Size!\nRow=%d\nCol=%d\n", guessCol, guessRow);
            printf("Found closest factors resembling square!\nFactors=%d,%d\n", guessCol, guessRow);
            break;
        }

        if (currentResult > targetNum) {
            if (targetNum % guessCol == 0) {
                guessRow--;
            } else if (targetNum % guessRow == 0) {
                guessCol--;
            } else {
                guessRow--;
            }
        } else if (currentResult < targetNum) {
            if (targetNum % guessCol == 0) {
                guessRow++;
            } else if (targetNum % guessRow == 0) {
                guessCol++;
            } else {
                guessCol++;
            }
        }

        tries++;
    }
}