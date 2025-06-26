#include<stdio.h>
int main(){
    char b;
    printf("Enter Character : ");
    scanf("%c",&b);
    (b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')?(printf("%c is Vowel ",b)):(printf("%c is Consonant ",b));
    //     if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U'){
    //     printf("%c is Vowel  ",b);
    // }
    // else{
    //     printf("%c is Consonant",b);
    // }
return 0;
}