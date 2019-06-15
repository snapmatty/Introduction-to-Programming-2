#include <stdio.h>
#include <stdlib.h>

struct footballteam
{
      int players;
      int day, month, year;
      int trophies;
      int wins;
      int losses;
};
    
void input (struct footballteam *in)
{
    printf("Enter the amount of players in your team: \n");
    scanf("%i" ,&in->players);
    printf("Enter the date of establishment: \n");
    scanf("%i" , &in->day);
    scanf("%i" , &in->month);
    scanf("%i" , &in->year);
    printf("Enter how many trophies the team has won up until this point: \n");
    scanf("%i" , &in->trophies);
    printf("How many wins and losses did the team have? Enter here: \n");
    printf("WINS: \n");
    scanf("%i", &in->wins);
    printf("LOSSES: \n");
    scanf("%i" , &in->losses);
}
void update(struct footballteam *in)
{
   int x;
   char selected;
   
   printf("Enter 'Y' to begin the update, to skip enter 'N' \n");
   scanf("%c", &selected);
   
    while(selected =='Y' || selected == 'y')
    {
        printf("Choose one option you would like to update: \n");
        printf("1.number of players \n 2. date of est. \n");
        printf("3. trophies \n 4. wins and losses\n"); 
        scanf("%d" , &x);
               
        switch (x)
        {
            case 1:
            {
                printf("Enter the amount of players in your team: ");
                scanf("%i" ,&in->players);
                break;
            }
            case 2:
            {
                printf("Enter the date of establishment (DD/MM/YYYY): ");
                scanf("%i,%i,%i " , &in->day,&in->month, &in->year);
                break;
            }
            case 3:
            {
                printf("Enter how many trophies the team has won up until this point: ");
                scanf("%i" , &in->trophies);
                break;
            }
            case 4:
            {
                printf("How many wins and losses did the team have? Enter here: \n");
                printf("WINS: ");scanf("%i", &in->wins);
                printf("LOSSES: ");scanf("%i" , &in->losses);
                break;
            }
            default :
            {
                printf("inproper choice!!!\n");
            }
        }
        printf("\n Enter 'Y' to update more\n");
        scanf("%c", &selected);
    }
}
void display(struct footballteam *in)
{
    
    printf("The amount of players in your team: %d\n", in->players);
    printf("The date of establishment:\n");
    printf("Day : %d " , in->day);
    printf("Month : %d " , in->month);
    printf("Year : %d \n" , in->year); 
    printf("Amount of trophies the team has won up until this point: %d \n",in->trophies);
    printf("Wins:   %d \n",in->wins);
    printf("Losses:  %d \n",in->losses);
}
            
int main()
{
    printf("Welcome to program of LAB11B!!\n\n\n\n\n");
    
    struct footballteam me;
    char teamname[20];
    printf("Enter the name of your team: "),
    scanf("%l[^\n]" , &teamname);
    input (&me);
    update(&me);
    display(&me);
    printf("The name of your team: %c" , &teamname);
    return 0;
}