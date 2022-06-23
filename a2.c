/*
Question 5
#include <stdio.h>
#include<unistd.h>
int main(void) {
    
    //x will store the decimal value
    int x;

    //the input hexa-decimal no. is taken char by char
    unsigned char aChar;

   

    printf("Enter an integer in hexadecimal: ");

    //clear the output stream
    fflush(stdout);

    //initial result equal to 0
    x = 0;

    //read the first character of the input
    read(STDIN_FILENO, &aChar, 1);

    //continue reading the input till we reach the end character(enter)
    while (aChar != '\n') {
        
        //shift x by 4 bits, which means we are multiplying the current result by 16
        //to convert the value to decimal value
        x = x << 4;

        //if the current entered character is greater than 9, i.e. in the range a-f
        if (aChar > '9') {
            //increment the char by position
            aChar = aChar + 9;

        }

        //apply AND peration with 0x0f which is 1111 in binary
        //this step will convert the input in range a-f to decimal in the range 10-15
        aChar = aChar & 0x0f;

        //add it to the answer
        x = x + (int)aChar;
        
        //read the next character
        read(STDIN_FILENO, &aChar, 1);

    }

   
    //output the resultant decimal value
    printf("You entered %#010x = %d (decimal)\n\n", x, x);

    return 0;

}


 Question 4
#include <stdio.h>

int main(void) { //main function

    int x; //declaring variable x to store number

//declare variable to store powers of 2 (+ve and -ve) respectively

    int leftShift, rightShift;

    printf("Enter an integer: "); //prompt user to enter integer x

    scanf("%d", &x); //entered value stored in x

      printf("Multiply by two raised to the power: ");

    scanf("%d", &leftShift);//enter power of 2 to be multiplied with x

    printf("%d x %d = %d\n", x, 1 << leftShift, x << leftShift);


    printf("Divide by two raised to the power: ");

    scanf("%d", &rightShift);//scan rightshift number

    printf("%d / %d = %d\n", x, 1 << rightShift, x >> rightShift); //x>>rightshift divide with 2 to power rightShift. It shifts the bits to right by filling 0 on left end
}

 Explanation:-

 The code above simply multiplies and divides the inputted number with the exponent of 2 entered by the user.
 It is using leftshift(<<) and rightshift operations(>>) to achieve it's result.
 1<<x will shift 1 to the left by x places. For e.g:- 1<<3 will give 1000 which is nothing but 23 in decimal.So 1<<leftshit and 1<<rightshift will give us the 2's exponent the user has selected to divide and multiply the number with.
 In this case:-

 1<<14 gives 214 ; 1<<3 gives 23

 << operation in general multiples the number with 2x ;x being the number of bits entered by the user;
 >> operation in general divides the number with 2x ;x being the number of bits entered by the user;
 In this case:-

 29<<14 muliplies 29 with 214 (which is 16304) ang thus gives the result 475136 displayed on the console.

 29>>3 divides 29 with 23 (which is 8) ang thus gives the result 3displayed on the console.


Question 3


int main(void) {

    int index = 0;


    char aSentenceLetter[100];
    const char* requestSentence = "Enter one sentence (max length 100 chars): ";

    write(STDOUT_FILENO, requestSentence, strlen(requestSentence));


    while(1)
    {
        read(STDIN_FILENO, &aSentenceLetter[index], 1);
        index++;

        if(aSentenceLetter[index - 1] == '\n')
        {
 
            break;
        }
    }


    const char* displaySentence = "You entered: ";
    write(STDOUT_FILENO, displaySentence, strlen(displaySentence));

    write(STDOUT_FILENO, aSentenceLetter, index);

    return 0;
}








Question 2


#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[100];
    int i, len;
    printf("Enter a phrase then press enter: ");
    fgets(word, sizeof(word), stdin);
    len = strlen(word);
    printf("Address\t      :ASCII value\n");
    for(i = 0; i<len; i++)
    {
        printf("%p:0x%0x\n", &(word[i]),word[i]);
    }
    return 0;
}



Question 1
 
 
 #include <stdio.h>

 int main(void) {
     unsigned int decForm;
     unsigned int hexForm;
     unsigned int octForm;
     
     printf("Enter an unsigned integer in decimal: ");
     scanf("%d", &decForm);
     
     printf("Enter an unsigned integer in hexadecimal: ");
     scanf("%x", &hexForm);
     
     printf("Enter an unsigned integer in octal: ");
     scanf("%o", &octForm);

     printf("%d is stored as hex %x and octal %o\n", decForm, decForm, decForm);
     printf("%x is stored as decimal %d and octal %o\n", hexForm, hexForm, hexForm);
     printf("%o is stored as decimal %d and hex %x\n", octForm, octForm, octForm);
     return 0;
 }

*/
