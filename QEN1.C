// WAP to input a character from the user.
// If the character is uppercase, print 1
// If the character is lowercase,
// Print 0
// If it's a special character,
// // Print -1

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a chearactor ....:");
    scanf("%c", &ch);
    if ('A' <= ch && ch <= 'Z'){
        ;

    printf("your charecter is upperspace then your answer is....1");

     } else if (ch >= 'a' && ch <= 'z'){

    printf("your chearacter is lower space then your answer is .....0");

      } else { printf("your character is not uparspace and lowerspace then your answer is ....-1");
}
return 0;
}
