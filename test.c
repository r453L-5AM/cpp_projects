#include<stdio.h>
int main()
{
    printf("Welcome to the quizz game:\n\n");
    printf("press 7 to start the game\n");
    printf("press 0 to quit the game\n");
    int i;
    scanf("%d",&i);
    int point1,point2, point3, point4, point5;
    int point01,point02,point03,point04,point05;
    char ans1,ans2,ans3,ans4,ans5;
    if(i==7)
    {
        printf("Here the game start:\n\n");
    }
    else if(i==0)
    {
        printf("quit the game");
    }
    if(i==7)
    {

        printf("1.What is the capital of France?\na.Rome\nb.Berline\nc.Paris\nd.Madrib\n");
        scanf("> %c", &ans1);
        
        if(ans1=='c'){

            point1 =5;
            printf("You have got = %d point\n\n",point1);
        }
        else{

            point01=0;
            printf("You have got = %d point\n\n",point01);
        }

        printf("2.Which planet is known as the Red Planet?\na.Venus\nb.Mars\nc.Jupiter\nd.Satu\n");
        scanf("> %c", &ans2 );
        if(ans2=='b'){

            point2=5;
            printf("You have got = %d point\n\n",point2);
        }else
        {

            point02=0;
            printf("You have got = %d point\n\n",point02);
        }
        printf("3.Who wrote the play Romeo and Juliet?\na.Charles Ddickens \nb.William Skakespears\nc.Jane Austen\nd.Mark Twain\n");
        scanf("> %c", &ans3);
        if(ans3=='b'){

            point3=5;
            printf("You have got=%d point\n\n",point3);
        }else
        {
            point03=0;
            printf("You have got =%d point\n\n",point03);
        }

        printf("4.What is the largest mammal on Earth?\na.Elephant \nb.Blue Whale \nc.Giraffe \nd.Gorill\n");
        scanf("> %c", &ans4);
        if(ans4=='b'){
            point4=5;
            printf("you have got=%d point\n\n",point4);
        }
        else{
            point04=0;
            printf("You have got =%d point\n\n",point04);
        }
        printf("5.In which year did the first manned moon landing occur?\na.1969 \nb.1975 \nc.1982 \nd.1990\n");
        scanf("> %c", &ans5);
        if(ans5=='a'){
            point5=5;
            printf("You have got = %d point\n\n",point5);
        }else{
            point05=0;
            printf("You have got = %d point\n\n",point05);
        }

        if (i == 0){
            printf("Exiting from the game.\n\n");
        }
    }else{
            printf("You have entered an invalid input.\n\n");
        }
return 0;

}