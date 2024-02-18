#include<stdio.h>
int main()
{
    printf("Welcome to the quizz game:\n\n");
    printf("press 7 to start the game\n");
    printf("press 0 to quit the game\n");
    int i;
    scanf("%d",&i);
    int point1,point2, point3, point4, point5;
    // eitar age line 25 theke pore asho eikhane aroo kisu variable niba oigula ja wrong hoile show korbe nichhe nici ami dekho
    // amon na j pint01 nite hobe you can take whhatever you want.
    int point01,point02, point03, point04, point05;
    char ans1,ans2,ans3,ans4,ans5;

    // ei if else er part tuku te tmi condition boshaite paaro nai aami boshaici mathc kore nio

    if(i==7)
    {
        printf("Here the game start:\n\n");
    }else if(i==0)
    {
        printf("exiting from the game..!!");
    }
    
    // user 7 input dewar pore j suru hobe ta tmmi dew nai, oita ami arekta if niya dici
    // arekta mistake ase oita hoilo variable declare, mane tmi thik ans er jonno print koraiteso point1 abar wrong er jonno o samee print korteso, oita point01 kore dew ba wrongpoint ei name variabble dew noile wpoint ei name dewtoilei solve first er ta kore dici ami dekho


    if(i==7)
    {
        printf("1.What is the capital of France?\na.Rome\nb.Berline\nc.Paris\nd.Madrib\n");
        scanf("%c",&ans1);
        if(point1=='c')
        {

            point1 =5;
            printf("You have got = %d point\n",point1);
        }
        else
        {

            point01=0;
            printf("You have got = %d point\n",point01);
        }

        printf("2.Which planet is known as the Red Planet?\na.Venus\nb.Mars\nc.Jupiter\nd.Satu\n");
        scanf("%c",&ans2 );
        if(point2=='b')
        {

            point2=5;
            printf("You have got = %d point\n",point2);
        }
        else
        {

            point2=0;
            printf("You have got = %d point\n",point2);
        }
        printf("3.Who wrote the play Romeo and Juliet?\na.Charles Ddickens \nb.William Skakespears\nc.Jane Austen\nd.Mark Twain\n");
        scanf("%c",&ans3);
        if(point3=='b')
        {

            point3=5;
            printf("You have got=%d point\n",point3);
        }
        else
        {
            point3=0;
            printf("You have got =%d point\n",point3);
        }

        printf("4.What is the largest mammal on Earth?\na.Elephant \nb.Blue Whale \nc.Giraffe \nd.Gorill\n");
        scanf("%c",&ans4);
        if(point4=='b')
        {
            point4=5;
            printf("you have got=%d point\n",point4);
        }
        else
        {
            point4=0;
            printf("You have got =%d point\n",point4);
        }
        printf("5.In which year did the first manned moon landing occur?\na.1969 \nb.1975 \nc.1982 \nd.1990\n");
        scanf("%c",&ans5);
        if(point5=='a')
        {
            point5=5;
            printf("You have got = %d point\n",point5);
        }
        else
        {
            point5=0;
            printf("You have got = %d point\n",point5);
        }

        if (i == 0)
        {
            printf("Exiting from the game.\n");
        }
        else
        {
            printf("You have entered an invalid input.\n");
        }
    }
    
    return 0;

}
