#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<math.h>
//#include<conio.h>

/*int fdr(char chI)
{
    if(chI=='1')
        return;
    else
        printf("NOT valid\n");
}
int sdr(char chII)
{
    if(chII=='3'||'4')
        return;
    else
        printf("NOT valid\n");
}
int tdr(char chIII)
{
    if(chIII=='i'||'I')
        return;
    else
       printf("NOT valid");
}
int fodr(char chIV)
{
    if(chIV=='t'||'T')
        return;
    else
        printf("NOT valid");
}
int fidr(char chV)
{
    if(chV=='0'||'1')
        return;
    else
         printf("NOT valid");
}
int sidr(char chVI)
{
   if(chVI=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
        return;
    else
         printf("NOT valid");
}
int sedr(char chVII)
{
     if(chVII=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
        return;
    else
         printf("NOT valid");
}*/
void print_screenshot()
{
    printf("\n\n\n\n NOTE : Please Take the Screenshot of appeared Practical");
}
void main()
{

    int final_number=0,random_assign=0,random_shuffle;
    char chI,chII,chIII,chIV,chV,chVI,chVII;
    char s[8];

    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("***** Data Structure & Algorithms PRACTICAL EXAM OF Dec-May  *****\n");
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
            printf("\t\t\t\t\tExaminer : Prof. Amit Parmar\n\n\n\n");
    printf("************ Enter the details, which you will be ask to enter. **************\n\n");
    scanf("%s",s);
    printf("\n\n");
    /*chI=s[0];
    chII=s[1];
    chIII=s[2];
    chIV=s[3];
    chV=s[4];
    chVI=s[5];
    chVII=s[6];*/
    if(s[0]=='1'||'2'){
        if(s[1]=='0'||s[1]=='1'||s[1]=='2'||s[1]=='3'||s[1]=='4'||s[1]=='5'||s[1]=='6'||s[1]=='7'||s[1]=='8'){
            if(s[2]=='I'||s[2]=='i'){
                if(s[3]=='T'||s[3]=='t'){
                     if(s[4]=='0'||s[4]=='1'){
                        if(s[5]=='0'||s[5]=='1'||s[5]=='2'||s[5]=='3'||s[5]=='4'||s[5]=='5'||s[5]=='6'||s[5]=='7'||s[5]=='8'||s[5]=='9')
                         {if(s[6]=='0'||s[6]=='1'||s[6]=='2'||s[6]=='3'||s[6]=='4'||s[6]=='5'||s[6]=='6'||s[6]=='7'||s[6]=='8'||s[6]=='9'){
                                    printf("\n---------%s----------\n",s);
                                    srand(time(0));
                                    random_assign=rand();
                                   // printf("random_assign's value::%d",random_assign);
                                    //printf("%d\n",j);
                                    final_number=s[5]+s[6];
                                    final_number=final_number+random_assign;
                                    //printf("ith value::%d",i);
                                    switch(final_number%23)
    {
        case 0: printf("\n Write a program that enters valid Postfix expression and evaluate the expression using Stack. ( only  +,-,* , / ,^operators)");
                    print_screenshot();
                       break;
        case 1: printf("\n Write a program to perform insertion at front and display operations of the Singly Linked List. ");
                    print_screenshot();
                       break;
        case 2: printf("\n Write a menu driven program to search a particular integer using Linear & Binary Search.");
                     print_screenshot();
                       break;
        case 3: printf("\n Write a program to arrange given 10 floats using Selection Sort in descending order.");
                     print_screenshot();
                       break;
        case 4: printf("\n Implement Linear Probing for the given hash function to arrange a character in an array of size 8.H(x) = ((ASCII of x) * 11 ) mod 7 + 1.");
                      print_screenshot();
                       break;
        case 5: printf("\nWrite a program that enters valid Prefix expression and evaluate the expression using Stack. ( only  +,-,* , / ,^operators)");
                       print_screenshot();
                       break;
        case 6: printf("\nWrite a program to implement Simple Queue with all operations. Check the queue contents and conditions with different combinations of insert and delete and display");
                      print_screenshot();
                       break;
        case 7: printf("\nWrite a program to perform insertion at end and display operations of the Singly Linked List.");
                      print_screenshot();
                       break;
        case 8: printf("\nImplement Recursive Binary Search for the given 10 elements. Initially input is given in descending order. Print position of particular element if present otherwise print not present. Also print No. of comparison performed during searching.");
                       print_screenshot();
                       break;
        case 9: printf("\nWrite a program to arrange given 12 integers using Bubble Sort in ascending order. Display array contents after each pass in proper format.");
                      print_screenshot();
                       break;
        case 10: printf("\nImplement Linear Probing for the given hash function to arrange a real numbers in an array of size 10. H(x) = (integer part of x) mod 10");
                     print_screenshot();
                       break;
        case 11: printf("\nWrite a program to check whether the given string is palindrome or not using Stack.");
                      print_screenshot();
                       break;
        case 12: printf("\nWrite a program to sort the given string using Selection sort in ascending order. Display string after each pass.");
                      print_screenshot();
                       break;
        case 13: printf("\nWrite a menu driven program for Stack Operations (push, pop and display) for Character Data.");
                      print_screenshot();
                       break;
        case 14: printf("\nWrite a program to perform insertion in sorted order and display operations of the Singly Linked List.");
                      print_screenshot();
                       break;
        case 15: printf("\nWrite a program to arrange given 10 integers using Bubble Sort in descending order. Also print pass number, number of exchanges in each pass and total exchanges and total number of passes for given elements.");
                       print_screenshot();
                       break;
        case 16: printf("\nWrite a program to check whether the given number is palindrome or not using Stack.");
                       print_screenshot();
                       break;
        case 17: printf("Write a menu driven program for Simple Queue Operations (enQueue, DeQueue and display) for Character Data using Singly Linked List.");
                       break;
        case 18: printf("Write a program to implement insertion at front and display operations of the Doubly Linked List.");
                       break;
        case 19: printf("Write a program to arrange given 10 integers using Insertion Sort in descending order. Also print pass number, number of exchanges in each pass and total exchanges and total number of passes for given elements.");
                       break;
        case 20: printf("Write a program to implement Binary Search Tree for character Data. (insertion and in-order traversal)");
                       break;
        case 21: printf("Write a program to arrange given 10 characters using Selection Sort in descending order. Also print pass number, number of exchanges in each pass and total exchanges and total number of passes for given elements.");
                       break;
        case 22: printf("Write a program to implement insertion at end and display operations of doubly linked list for integer data");
					   break;
        default: printf("In valid");
                       break;}}

                            else
                                printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");}
                        else
                            printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");}
                    else
                        printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");}
                else
                    printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");}
            else
                printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");}
        else
            printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");}
    else
        printf("Entered number is NOT VALID......\nplease enter the number as per the guidance by faculty");



       // printf("%c",s[i]);

   getch();
}
