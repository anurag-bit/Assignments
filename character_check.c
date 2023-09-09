#include <stdio.h>

int main(void)
{
    int blanks, letters, numbers, others;
    int c;

    while (c = getchar() != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++numbers;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            ++letters;
        else
        {
            ++others;
        }
    };

    printf("\n The Files has the following charater stats: \n");
    printf("\nThe file contains:\n letters:%d\nBlanks:%d\nnumbers:%d\nOther characters:%d", letters, blanks, numbers, others );
}



