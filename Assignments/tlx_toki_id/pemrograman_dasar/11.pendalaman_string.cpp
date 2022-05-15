#include <iostream>
#include <string>

// Different libs
#include <cstdio>
#include <cstring>

// Assignments : https://tlx.toki.id/courses/basic/chapters/09/problems



// B. Pembuangan String
int pembuangan_string() {
    std::string resultan, substring;
    int foundIdx, sublen;
    std::cin >> resultan;
    std::cin >> substring;
    sublen = substring.length();

    while (1) {
        foundIdx = resultan.find(substring);
        if (foundIdx < 0) {
            break;
        }
        resultan.erase(foundIdx, sublen);
    }
    printf("%s\n", resultan.c_str());
}



// C. Caesar Chiper
int caesar_chiper() {
    char BUFF[101];
    int shift;

    scanf("%s", &BUFF);
    scanf("%d", &shift);
    
    int len = strlen(BUFF);
    for (int i=0; i<len; i++) {
        BUFF[i] = (BUFF[i] - 'a' + shift)%26 + 'a';
    }
    
    printf("%s\n", BUFF);
}



// D. Operasi String
int operasi_string() {
    std::string s1,s2,s3,s4;
    int idx;

    std::cin >> s1 >> s2 >> s3 >> s4;

    idx = s1.find(s2);
    s1.erase(idx, s2.length());
    idx = s1.find(s3);
    s1.insert(idx+s3.length(),s4);
    std::cout << s1 << std::endl;
}



// E. utility function - toggle capitalization of a character
char toggleCapitalization(char _c);


// E. Bahasa Dengklek
int main() {
    char _s[101];

    scanf("%s", &_s);

    int len = strlen(_s);
    for (int i=0; i<len; i++) {
        _s[i] = toggleCapitalization(_s[i]);
    }

    printf("%s\n", _s);
}


char toggleCapitalization(char _c) {
    if (_c <='Z') {
        _c+='a'-'A';
    } else {
        _c-='a'-'A';
    }
    return _c;
}



// F. Gaya Penulisan Variabel: TBD
