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
    else if(ch>='b' && ch<='z' && ch != 'a' && ch!='e' && ch!='i' && ch!='e' && ch=='o' && ch!='u' && ch>='B' && ch<='Z' && ch!='A' && ch!='E') && ch!='I' && ch!='0' && ch!='U'{
       printf("Consonant") ;
    }
    else{
        printf("Special Character");
    }
    return 0;
}