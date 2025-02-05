#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch == 'a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("Vowel");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else if(('b'<=ch<='d') || ('f'<=ch<='h')  || ('j'<=ch<='n') || ('p'<=ch<='t')|| ('v'<=ch<= 'z') || ('B'<=ch<='D') || ('F'<=ch<='H') || ('J'<=ch<='N') ||('P' <=ch<='T') || ('V'<=ch<='Z') ){
       printf("Consonant") ;
    }
    else{
        printf("Special Character");
    }
    return 0;
}