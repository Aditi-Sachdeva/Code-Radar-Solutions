#include <stdio.h>

int main() {
    char ch;
    if(ch == 'a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("Vowel");
    }
    else if(ch==1 || ch==2 || ch==3 || ch==4 || ch==5 ||ch==6 || ch==7 || ch==8 || ch==9 || ch==0){
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