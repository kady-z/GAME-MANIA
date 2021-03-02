#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

void Quickmenu(void);
void GamingId(void);
void GameMenu(void);
void PlayerInformation(void);
void updatePI(void);
void DiceGame(void);
void TicToe(void);
void mine(void);
void sound(void);
void errorsound(void);
void dicegamecomp(void);
void dicegame2play(void);
void TicToecomp(void);
void TicToe2play(void);
void mineplay(void);
char wingame(char A[],int);
int winsound(void);
void blink(int c,int r);

char name[40],usrid[40];
int GId,age ;

int main()
{
    int choice;
    sound();
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t      Loading Completed\n");
    printf("\n\n\n\n\nPress any key to continue \n");
    getch();
    system("cls");
    system("COLOR B1");
    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    printf("\n Hii! \n Welcome to GAME MANIA \n I am you your assistant GAMMA \n");
    printf(" Before we move ahead lets know each other\n");
    printf("\n\n\tPress any key to continue\n");
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter your name\n\t\t\t\t\t\t");
    scanf("%[^\n]",name);
    system("cls");
    system("COLOR 61");
    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    printf("Hello! GAMMA here.\nNice to see you %s\nPlease choose one among following. \n ",name);
    printf("\n\t\t\t\t MAIN MENU\n 1. Quick Play \n 2. Create your GAMING ID \n 3. Exit\n");
    scanf("%d",&choice);
    system("cls");
    while(choice>3)
    {
       printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
       printf("\t\t\tEnter valid choice \n\n");
       printf("\n\t\t\t\t MAIN MENU\n 1. Quick Play \n 2. Create your GAMING ID \n 3. Exit\n");
       errorsound();
       scanf("%d",&choice);
       system("cls");
    }
    system("cls");
    switch(choice)
    {
    case 1:
    {
        Quickmenu();
    }   break;
    case 2:
    {
        GamingId();
        printf("\n\n\tEnter any key to continue\n");
        getch();
        system("cls");
        Quickmenu();
        break;
    }
    case 3:
        exit(1);
    }
    return 0;
}


void Quickmenu(void)
{
      int choice1;
      system("COLOR 4E");
      printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
      printf("Hello!! GAMMA here \nHere is the list of various operation you can perform. \nPlease choose one among this.\n");
      printf("\t1.Game Menu \n\t2.Personal Information \n\t3.Privacy policy\n\t4.Exit\n\nEnter your choice to continue\n\t");
      scanf("%d",&choice1);
      system("cls");
      while(choice1>4)
      {
          printf("\t\t\tEnter valid choice\n\n");
          printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
          printf("Hello!! GAMMA here \nHere is the list of various operation you can perform. \nPlease choose one among this.\n");
          printf("\t1.Game Menu \n\t2.Personal Information \n\t3.Privacy policy\n\t4.Exit\n\nEnter your choice to continue\n");
          errorsound();
          scanf("%d",&choice1);
          system("cls");
      }
      system("cls");
      switch (choice1)
      {
      case 1:
        {
            GameMenu();
            break;
        }
      case 2:
        {
            PlayerInformation();
            break;
        }
      case 3:
        {
            printf("\t\t PRIVACY POLICY\n\n\t=======\n\t| * * |\n\t| --- |\n\t=======\n\nGAMMA Here!!\nOur Privacy policy is either in Progress");
            printf("or my creator has forgot to update it.\n\n SORRY!!\nBut I can guarantee we do not share our user information like Whatsapp.\nDo not worry!!\n");
            printf("\nPress enter to return to menu\n");
            getch();
            system("cls");
            Quickmenu();
            break;
        }
      case 4:
        exit(1);
    }
    return;
}


 void GamingId(void)
  {
        srand(time(0));
        system("cls");
        printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
        printf("Hello %s! GAMMA here\nTo create your Gaming Id please provide following information.\n",name);
        printf("Enter your age\n");
        scanf("%d",&age);
        system("cls");
        printf("Enter your UserId\n");
        scanf("%s",usrid);
        system("cls");
        GId = rand();
        printf("We have succesfully created your Gaming ID: %d",GId);
        return;
  }


  void GameMenu(void)
  {
            system("COLOR 7C");
            int choice2;
            printf("\t\t GAME MENU \n 1.Dice Game\n 2.Tic-Toe Game \n 3.Minesweeper \n 4.Exit \n\nEnter your choice of game\n");
            scanf("%d",&choice2);
            system("cls");
            while(choice2 > 4)
            {
                printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
                printf("\t\t\tEnter valid choice\n\n");
                printf("\t\t GAME MENU \n 1.Dice Game\n 2.Tic-Toe Game \n 3.Minesweeper \n 4.Exit \n\n Enter your choice of game\n");
                errorsound();
                scanf("%d",&choice2);
                system("cls");

            }
            system("cls");
            switch (choice2)
            {
            case 1:
                DiceGame();
                break;
            case 2:
                TicToe();
                break;
            case 3:
                mine();
                break;
            case 4:
                exit(1);
            }
            return;
  }


  void PlayerInformation()
  {
        int choice3;
        printf("Player Name: %s\n",name);
        printf("Player UserID: %s\n",usrid);
        printf("Player Age: %d\n",age);
        printf("Gamer Id: %d\n\n",GId);
        printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
        printf("\n\tDo you want to update user information\?\n1.yes\n2.Menu\n3.Exit\n");
        scanf("%d",&choice3);
        system("cls");
        while(choice3>3)
        {
            printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
            printf("\t\t\t\t\a Enter Valid choice\n");
            errorsound();
            printf("\n\n\tDo you want to update user information\?\n1.yes\n2.Menu\n3.Exit");
            scanf("%d",&choice3);
        }
        switch(choice3)
        {
             case 1:
                updatePI();
             case 2:
                Quickmenu();
             case 3:
                exit(1);
        }
        return;
  }


  void updatePI(void)
  {
        srand(time(0));
        system("cls");
        printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
        printf("Hello %s! GAMMA here\nYou can update your information here.\n",name);
        printf("\n\tEnter your name\n");
        scanf("%s",&name);
        system("cls");
        printf("Enter your age\n");
        scanf("%d",&age);
        system("cls");
        printf("Enter your UserId\n");
        scanf("%s",usrid);
        system("cls");
        GId = rand();
        printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
        printf("We have succesfully updated your information \n");
        printf("\nPress any key to return to menu\n");
        getch();
        system("cls");
        Quickmenu();
        return;
  }


void sound(void)
{
    system("COLOR 7C");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading..");
    Beep(261,426);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading....");
    Beep(293,465);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading......");
    Beep(329,428);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading........");
    Beep(349,228);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading...........");
    Beep(391,795);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading.............");
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t GAME MANIA \n");
    printf("\n\n\n\n\n\t\t\t\t\t\t  Loading....");
    Beep(493,383);
    system("cls");
    return;
}


void errorsound(void)
{
    Beep(800,500);
    Beep(600,500);
    return;
}


void DiceGame(void)
{
    int choice;
    sound();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t DICE GAME \n");
    printf("\n\n\n\n\n\t\t\t\t\t      Loading Completed\n");
    printf("\n\n\n\n\nPress any key to continue \n");
    getch();
    system("cls");
    system("COLOR 5B");
    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    mesh :
    printf("\nHappy to see you again %s.\nHere is the list of things you can do choose one.\n",name);
    printf("\n\t\t\t\t MAIN MENU\n 1. Play Game \n 2.Instructions \n 3. Exit\n");
    printf("\n\n\tNOTE: READ INSTRUCTIONS TO UNDERSTAND GAME\n\n");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    system("cls");
    while(choice>3)
    {
       printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
       printf("\t\t\tEnter valid choice \n\n");
       printf("\n\t\t\t\t MAIN MENU\n 1. Play Game \n 2.Instructions \n 3. Exit\n");
       errorsound();
       scanf("%d",&choice);
       system("cls");
    }
    system("cls");
    switch(choice)
    {
    case 1:
    {
         printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
         printf("\nHappy to see you again %s.\nHere is the list of things you can do choose one.\n",name);
         printf("\n\t\t\t\t MAIN MENU\n 1.Play against Computer \n 2.Two Player mode \n 3. Exit\n");
         scanf("%d",&choice);
         system("cls");
         while(choice>3)
         {
            printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
            printf("\t\t\tEnter valid choice \n\n");
            printf("\n\t\t\t\t MAIN MENU\n 1. Play against Computer \n 2.Two Player mode \n 3. Exit\n");
            errorsound();
            scanf("%d",&choice);
            system("cls");
         }
         system("cls");
         switch(choice)
         {
           case 1:
           {
               dicegamecomp();
               break;
           }
           case 2:
           {
               dicegame2play();
               break;
           }
           case 3:
              exit(1);
         }
         break;

    }
    case 2:
    {
        printf("\t\t\t\t\t\t INSTRUCTIONS\n");
        printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
        printf("Welcome!! This is my version of dicegame.\nSo it will be good for you to understand this game.\n");
        printf("\n1.There are hundread positions as you can see.\n");
        for(int k=99;k>=0;k--)
        {
          if(k<10) printf(" ");
          if((k+1)%10==0 && k+1!=100)
          {
              printf("\n");
              for(int j=0;j<10;j++)
              printf("--------+");
              printf("\n");
          }
          printf("  %d    |",k+1);
        }
        printf("\n\t\t\tPress key to continue\n");
        getch();
        printf("\n 2. We use two dice so you can get any number between 1 to 12\n");
        printf(" 3. There are snakes present at position 8,16,24..and so on. ");
        printf("\n    So if you got 5 in your turn and after 5 steps if your final position is");
        printf(" snake position then you have to move 5 steps backward from your original position.\n");
        printf("4. If player gets 12 then he gets one more chance to make move.\n");
        printf("5. Player who gets 100(exact) first wins.\n ");
        printf("\n\n Press key to continue to return to menu.\n");
        getch();
        system("cls");
        goto mesh;
        break;
    }
    case 3:
        exit(1);
    }
    return;
}


void dicegamecomp(void)
{
    char ch,A[100],B[100],p1[20];
    int i,d1,d2,sum1=0,sum2=0;
    printf("Enter name of player 1\n");
    scanf("%s",p1);
    printf("\n\nPress key to continue\n");
    getch();
    system("cls");
    for(int j=0;j<100;j++)
    {
        A[j]=' ';
        B[j]=' ';
    }
        printf("\n\n");
    for(int k=99;k>=0;k--)
    {
        if(k<10) printf(" ");
        if((k+1)%10==0 && k+1!=100)
        {
            printf("\n");
          for(int j=0;j<10;j++)
          printf("--------+");
          printf("\n");
        }
         printf("  %d    |",k+1);
    }
    printf("\n\nPress key to continue\n");
    getch();
    printf("\n\n\t\tI am assigning A to %s \n",p1);
    printf("Press any key to start game \n");
    getch();
    system("cls");
    for( i=1;i<=100;i++)
    {
        if(i%2==1)
        {
            chance:
              printf("\n\nIt's your turn PLAYER1: %s",p1);
              printf("\n\nPress any key to roll die\n");
              getch();
              Beep(500,200);
              srand(time(0));
              d1=1+rand()%12;
              printf("%s got %d after die roll\n\n",p1,d1);
              A[sum1-1]=' ';
              sum1+=d1;
              if(sum1>100) sum1-=d1;
              if(sum1%8==0 && sum1!=0)
              {
                  Beep(1000,800);
                  printf("\n\n It's Snake\n");
                  printf("=======\n");
                  printf("#########$-\n");
                  printf("########### ~~~~\n");
                  printf("#########\n");
                  printf("=======\n\n");
                  printf("");
                  sum1-=2*d1;
                  if(sum1<0) sum1=0;
              }
              if(sum1==100)
              {
                  winsound();
                  printf("\n\n\t\t\t CONGRATULATIONS!!\\n\n\t\t %s WINS!!\n",p1);
                  break;
              }
              A[sum1-1]='A';
              if(d1==12)
              {
                  printf("\n you got one more chance\n");

                  goto chance;
              }
        }
        else if(i%2==0)
        {
            chance1:
              printf("\n\nIt is Computer turn");
              printf("\n\nPress any key to so that computer can make it's move\n");
              getch();
              Beep(500,200);
              srand(time(0));
              d2=1+rand()%12;
              printf("Computer got %d after die roll\n",d2);
              B[sum2-1]=' ';
              sum2+=d2;
              if(sum2>100) sum2-=d2;
              if(sum2%8==0 && sum2!=0)
              {
                  Beep(1000,600);
                  printf("\n\n It's Snake\n");
                  printf("=======\n");
                  printf("#########$-\n");
                  printf("########### ~~~~\n");
                  printf("#########\n");
                  printf("=======\n\n");
                  printf("");
                  sum2-=2*d2;
                  if(sum2<0) sum2=0;
              }
              if(sum2==100)
              {
                  winsound();
                  printf("\n\n\t\t\t CONGRATULATIONS!!\\n\n\t\t Computer WINS!!\n");
                  break;
              }
              B[sum2-1]='B';
              if(d1==12)
              {
                  printf("\n you got one more chance\n");

                  goto chance1;
              }

        }
        for(int k=99;k>=0;k--)
        {

          if((k+1)%10==0 && k+1!=100)
          {
              printf("\n");
              for(int j=0;j<10;j++)
              printf("------+");
              printf("\n");
          }
          printf("  %c%c  |",A[k],B[k]);
        }

    }
    printf("\n\nPress any key to return to menu\n");
    getch();
    system("cls");
    GameMenu();
    return;
}


void dicegame2play(void)
{
    char ch,A[100],B[100],p1[20],p2[20];
    int i,d1,d2,sum1=0,sum2=0;
    printf("Enter name of player 1\n");
    scanf("%s",p1);
    printf("Enter name of player 2\n");
    scanf("%s",p2);
    printf("\n\nPress key to continue\n");
    getch();
    system("cls");
    for(int j=0;j<99;j++)
    {
        A[j]=' ';
        B[j]=' ';
    }
        printf("\n\n");
    for(int k=99;k>=0;k--)
    {
        if(k<10) printf(" ");
        if((k+1)%10==0 && k+1!=100)
        {
            printf("\n");
          for(int j=0;j<10;j++)
          printf("--------+");
          printf("\n");
        }
         printf("  %d    |",k+1);
    }
    printf("\n\nPress key to continue\n");
    getch();
    printf("\n\n\t\tI am assigning A to %s and B to %s\n",p1,p2);
    printf("Press key to start game \n");
    getch();
    system("cls");
    for( i=1;i<=100;i++)
    {
        if(i%2==1)
        {
            chance:
              printf("\n\nIt's your turn PLAYER1: %s",p1);
              printf("\n\nPress any key to roll die\n");
              getch();
              Beep(500,200);
              srand(time(0));
              d1=1+rand()%12;
              printf("%s got %d after die roll\n\n",p1,d1);
              A[sum1-1]=' ';
              sum1+=d1;
              if(sum1>100) sum1-=d1;
              if(sum1%8==0 && sum1!=0)
              {
                  Beep(1000,800);
                  printf("\n\n It's Snake\n");
                  printf("=======\n");
                  printf("#########$-\n");
                  printf("########### ~~~~\n");
                  printf("#########\n");
                  printf("=======\n\n");
                  printf("");
                  sum1-=2*d1;
                  if(sum1<0) sum1=0;
              }
              if(sum1==100)
              {
                  winsound();
                  printf("\n\n\t\t\t CONGRATULATIONS!!\\n\n\t\t %s WINS!!\n",p1);
                  break;
              }
              A[sum1-1]='A';
              if(d1==12)
              {
                  printf("\n you got one more chance\n");
                  goto chance;
              }
        }
        else if(i%2==0)
        {
            chance1:
              printf("\n\nIt's your turn PLAYER2: %s",p2);
              printf("\n\nPress any key to roll die\n");
              getch();
              Beep(500,200);
              srand(time(0));
              d2=1+rand()%12;
              printf("%s got %d after die roll\n",p2,d2);
              B[sum2-1]=' ';
              sum2+=d2;
              if(sum2>100) sum2-=d2;
              if(sum2%8==0 && sum2!=0)
              {
                  Beep(1000,600);
                  printf("\n\n It's Snake\n");
                  printf("=======\n");
                  printf("#########$-\n");
                  printf("########### ~~~~\n");
                  printf("#########\n");
                  printf("=======\n\n");
                  printf("");
                  sum2-=2*d2;
                  if(sum2<0) sum2=0;
              }
              if(sum2==100)
              {
                  winsound();
                  printf("\n\n\t\t\t CONGRATULATIONS!!\\n\n\t\t %s WINS!!\n",p2);
                  break;
              }
              B[sum2-1]='B';
              if(d1==12)
              {
                  printf("\n you got one more chance\n");
                  goto chance1;
              }
        }
        for(int k=99;k>=0;k--)
        {
            if((k+1)%10==0 && k+1!=100)
            {
                printf("\n");
                for(int j=0;j<10;j++)
                printf("------+");
                printf("\n");
            }
            printf("  %c%c  |",A[k],B[k]);
        }

    }
    printf("\n\nPress any key to return to menu\n");
    getch();
    system("cls");
    GameMenu();
    return;
}


void TicToe(void)
{
    int choice;
    sound();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\tTIC TOE GAME  \n\n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t---+---+---\n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t---+---+---\n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\n\n\n\n\t\t\t\t\t\tLoading Completed\n");
    printf("\n\n\n\n\nPress any key to continue \n");
    getch();
    system("cls");
    place:
    system("COLOR 5F");
    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    printf("\nHappy to see you again %s.\nHere is the list of things you can do choose one.\n",name);
    printf("\n\t\t\t\t MAIN MENU\n 1.Play Game \n 2.Instructions \n 3. Exit\n");
    scanf("%d",&choice);
    system("cls");
    while(choice>3)
    {
       printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
       printf("\t\t\tEnter valid choice \n\n");
       printf("\n\t\t\t\t MAIN MENU\n 1.Play Game \n 2.Instructions \n 3. Exit\n");
       errorsound();
       scanf("%d",&choice);
       system("cls");
    }
    system("cls");
    switch(choice)
    {
    case 1:
    {
         printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
         printf("\nHappy to see you again %s.\nHere is the list of things you can do choose one.\n",name);
         printf("\n\t\t\t\t MAIN MENU\n 1.Play against Computer \n 2.Two Player mode \n 3. Exit\n");
         scanf("%d",&choice);
         system("cls");
         while(choice>3)
         {
            printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
            printf("\t\t\tEnter valid choice \n\n");
            printf("\n\t\t\t\t MAIN MENU\n 1. Play against Computer \n 2.Two Player mode \n 3. Exit\n");
            errorsound();
            scanf("%d",&choice);
            system("cls");
         }
         system("cls");
         switch(choice)
         {
           case 1:
           {
               system("cls");
               TicToecomp();
               break;
           }
           case 2:
           {
               system("cls");
               TicToe2play();
               break;
           }
           case 3:
              exit(1);
         }
         break;
    }
    case 2:
    {
        system("COLOR 4F");
        system("cls");
        printf("\t\t\t\t\t\t INSTRUCTIONS\n");
        printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
        printf("Welcome!! This is my version of Tic Tac Toe Game.\nSo it will be good for you to understand this game.\n");
        printf("\n1.There are nine positions as you can see.\n\n");
        printf("\t\t\t\t\t\t   |   |   \n");
        printf("\t\t\t\t\t\t   |   |   \n");
        printf("\t\t\t\t\t\t---+---+---\n");
        printf("\t\t\t\t\t\t   |   |   \n");
        printf("\t\t\t\t\t\t   |   |   \n");
        printf("\t\t\t\t\t\t---+---+---\n");
        printf("\t\t\t\t\t\t   |   |   \n");
        printf("\t\t\t\t\t\t   |   |   \n");
        printf("\n\t\t\tPress key to continue\n");
        getch();
        printf("\n 2. We use two symbols X and O to denote move of players. \n");
        printf(" 3. Each player gets alternate chances.\n ");
        printf("4.Play who gets first three X or three O in any row or any coulumn or any diagonal wins. ");
        printf("\n\n Press key to continue to return to menu.\n");
        getch();
        system("cls");
        goto place;
        break;
    }
    case 3:
        exit(1);
    }
    return;
}

void TicToecomp(void)
{
    char ch,A[10],p1[20],p2[20];
    int i,flag=1,pos;
    printf("Enter name of player\n");
    scanf("%s",p1);
    printf("\n\nPress key to continue\n");
    getch();
    system("cls");
    for(int j=0;j<9;j++)
        A[j]=' ';
    printf("\n\n\t\t\t\t\t\t 1 | 2 | 3 \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t---+---+---\n");
    printf("\t\t\t\t\t\t 4 | 5 | 6 \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t---+---+---\n");
    printf("\t\t\t\t\t\t 7 | 8 | 9 \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\nYOU CAN CHOOSE ONE POSITION AND NO POSITION CAN BE REPEATED\n");
    printf("\nYOU HAve TO SPECIFY POSTION BEFORE MAKING MOVE\n");
    printf("\nPress key to continue\n");
    getch();
    printf("\n\n\t\tI am assigning X to %s and O to Computer\n",p1);
    for( i=1;i<=9;i++)
    {
        if(i%2==1)
        {
            while(flag>0)
            {
              printf("It's your turn PLAYER: %s",p1);
              printf("\nSpecify positon where you want to make move\n");
              scanf("%d",&pos);
              if(A[pos-1]!=' ')
              {
                  printf("Make valid move\n");
                  flag=1;
              }
              else flag= 0;
            }
            flag++;
            A[pos-1]='X';
            printf("\n\n\t\t\t\t\t\t %c  | %c  | %c \n",A[0],A[1],A[2]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t %c  |  %c | %c \n",A[3],A[4],A[5]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t  %c |  %c |  %c \n",A[6],A[7],A[8]);
            printf("\t\t\t\t\t\t    |    |    \n");
            ch=wingame(A,i);
            if(ch=='W')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("%s WINS!!",p1);
                break;
            }
             else if(ch=='Z')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("COMPUTER wins!!");
                break;
            }
            else if(ch=='D')
            {
                errorsound();
                printf("\n\t\t\t\tDRAW!!");
                break;
            }
        }
        else if(i%2==0)
        {
            printf("\nIt's COMPUTER turn\n");
            if(A[0]=='X' && A[1]=='X')
            {
                if(A[2]==' ')
                   A[2]='O';
                else goto turn;
            }
            else if(A[3]=='X' && A[5]=='X')
            {
                if(A[4]==' ')
                   A[4]='O';
                else goto turn;
            }
            else if(A[1]=='X' && A[4]=='X')
            {
                if(A[7]==' ')
                   A[7]='O';
                else goto turn;
            }
            else if(A[2]=='X' && A[8]=='X')
            {
                if(A[5]==' ')
                   A[5]='O';
                else goto turn;
            }
            else if(A[0]=='X' && A[4]=='X')
            {
                if(A[8]==' ')
                   A[8]='O';
                else goto turn;
            }
         else
        {
            turn :
            while(flag>0)
            {
              srand(time(0));
              pos=rand()%9;
              if(A[pos-1]!=' ')
              {
                  flag=1;
              }
              else flag= 0;
            }
            flag++;
            A[pos-1]='O';
        }
            printf("\n\n\t\t\t\t\t\t %c  | %c  | %c \n",A[0],A[1],A[2]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t %c  |  %c | %c \n",A[3],A[4],A[5]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t  %c |  %c |  %c \n",A[6],A[7],A[8]);
            printf("\t\t\t\t\t\t    |    |    \n");
            ch=wingame(A,i);
            if(ch=='Z')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("COMPUTER wins!!");
                break;
            }
            else if(ch=='W')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("%s wins!!",p1);
                break;
            }
            else if(ch=='D')
            {
                errorsound();
                printf("\n\t\t\tDRAW!!");
                break;
            }

        }
    }
    printf("\n\nPress any key to return to menu\n");
    getch();
    system("cls");
    GameMenu();
    return;
}

void TicToe2play(void)
{
    char ch,A[10],p1[20],p2[20];
    int i,flag=1,pos;
    printf("Enter name of player 1\n");
    scanf("%s",p1);
    printf("Enter name of player 2\n");
    scanf("%s",p2);
    printf("\n\nPress key to continue\n");
    getch();
    system("cls");
    for(int j=0;j<9;j++)
        A[j]=' ';
    printf("\n\n\t\t\t\t\t\t 1 | 2 | 3 \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t---+---+---\n");
    printf("\t\t\t\t\t\t 4 | 5 | 6 \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\t\t\t\t\t\t---+---+---\n");
    printf("\t\t\t\t\t\t 7 | 8 | 9 \n");
    printf("\t\t\t\t\t\t   |   |   \n");
    printf("\nEVERY PLAYER CAN CHOOSE ONE POSITION AND NO POSITION CAN BE REPEATED\n");
    printf("\nEACH PLAYER HAS TO SPECIFY POSTION BEFOR MAKING MOVE\n");
    printf("\nPress key to continue\n");
    getch();
    printf("\n\n\t\tI am assigning X to %s and O to %s\n",p1,p2);
    for( i=1;i<=9;i++)
    {
        if(i%2==1)
        {
            while(flag>0)
            {
              printf("It's your turn PLAYER1: %s",p1);
              printf("\nSpecify positon where you want to make move\n");
              scanf("%d",&pos);
              if(A[pos-1]!=' ')
              {
                  printf("Make valid move\n");
                  flag=1;
              }
              else flag= 0;
            }
            flag++;
            A[pos-1]='X';
            printf("\n\n\t\t\t\t\t\t %c  | %c  | %c \n",A[0],A[1],A[2]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t %c  |  %c | %c \n",A[3],A[4],A[5]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t  %c |  %c |  %c \n",A[6],A[7],A[8]);
            printf("\t\t\t\t\t\t    |    |    \n");
            ch=wingame(A,i);
            if(ch=='W')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("%s WINS!!",p1);
                break;
            }
             else if(ch=='Z')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("%s wins!!",p2);
                break;
            }
            else if(ch=='D')
            {
                errorsound();
                printf("\n\t\t\t\tDRAW!!");
                break;
            }
        }
        else if(i%2==0)
        {
            while(flag>0)
            {
              printf("It's your turn PLAYER2: %s",p2);
              printf("\nSpecify positon where you want to make move\n");
              scanf("%d",&pos);
              if(A[pos-1]!=' ')
              {
                  printf("Make valid move\n");
                  flag=1;
              }
              else flag= 0;
            }
            flag++;
            A[pos-1]='O';
            printf("\n\n\t\t\t\t\t\t %c  | %c  | %c \n",A[0],A[1],A[2]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t %c  |  %c | %c \n",A[3],A[4],A[5]);
            printf("\t\t\t\t\t\t    |    |    \n");
            printf("\t\t\t\t\t\t----+----+----\n");
            printf("\t\t\t\t\t\t  %c |  %c |  %c \n",A[6],A[7],A[8]);
            printf("\t\t\t\t\t\t    |    |    \n");
            ch=wingame(A,i);
            if(ch=='Z')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("%s wins!!",p2);
                break;
            }
            else if(ch=='W')
            {
                winsound();
                printf("\t\tCONGRATULATIONS!!\n\n");
                printf("%s wins!!",p1);
                break;
            }
            else if(ch=='D')
            {
                errorsound();
                printf("\n\t\t\tDRAW!!");
                break;
            }

        }
    }
    printf("\n\nPress any key to return to menu\n");
    getch();
    system("cls");
    GameMenu();
    return;
}

char wingame(char A[],int b)
{
    if((A[0]=='X' && A[1]=='X') && (A[0]=='X' && A[2]=='X')) return 'W';
    else if((A[3]=='X' && A[4]=='X') && (A[3]=='X' && A[5]=='X')) return 'W';
    else if((A[6]=='X' && A[7]=='X') && (A[6]=='X' && A[8]=='X')) return 'W';
    else if((A[0]=='X' && A[3]=='X') && (A[0]=='X' && A[6]=='X')) return 'W';
    else if((A[1]=='X' && A[4]=='X') && (A[1]=='X' && A[7]=='X')) return 'W';
    else if((A[2]=='X' && A[5]=='X') && (A[2]=='X' && A[8]=='X')) return 'W';
    else if((A[0]=='X' && A[4]=='X') && (A[0]=='X' && A[8]=='X')) return 'W';
    else if((A[2]=='X' && A[4]=='X') && (A[2]=='X' && A[6]=='X')) return 'W';
    else if((A[0]=='O' && A[1]=='O') && (A[0]=='O' && A[2]=='O')) return 'Z';
    else if((A[3]=='O' && A[4]=='O') && (A[3]=='O' && A[5]=='O')) return 'Z';
    else if((A[6]=='O' && A[7]=='O') && (A[6]=='O' && A[8]=='O')) return 'Z';
    else if((A[0]=='O' && A[3]=='O') && (A[0]=='O' && A[6]=='O')) return 'Z';
    else if((A[1]=='O' && A[4]=='O') && (A[1]=='O' && A[7]=='O')) return 'Z';
    else if((A[2]=='O' && A[5]=='O') && (A[2]=='O' && A[8]=='O')) return 'Z';
    else if((A[0]=='O' && A[4]=='O') && (A[0]=='O' && A[8]=='O')) return 'Z';
    else if((A[2]=='O' && A[4]=='O') && (A[2]=='O' && A[6]=='O')) return 'Z';
    else if(b==9) return 'D';
    else return 'C';
}

void mine(void)
{
  int choice;
    sound();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t MINESWEEPER \n");
    printf("\n\n\n\n\n\t\t\t\t\t      Loading Completed\n");
    printf("\n\n\n\n\nPress any key to continue \n");
    getch();
    system("cls");
    system("COLOR 4F");
    position:
    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    printf("\nHappy to see you again %s.\nHere is the list of things you can do choose one.\n",name);
    printf("\n\t\t\t\t MAIN MENU\n 1.Play game \n 2.Instructions \n 3. Exit\n");
    scanf("%d",&choice);
    system("cls");
    while(choice>3)
    {
       printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
       printf("\t\t\tEnter valid choice \n\n");
       printf("\n\t\t\t\t MAIN MENU\n 1.Play game \n 2.Instructions \n 3. Exit\n");
       errorsound();
       scanf("%d",&choice);
       system("cls");
    }
    system("cls");
    switch(choice)
    {
    case 1:
    {
        mineplay();
         break;
    }
    case 2:
    {
        printf("\t\t\t\t INSTRUCTIONS\n");
        printf("1. Each block contains either mine or number. \n");
        printf("2. If you click on mine you loose\n");
        printf("3. The number you get denotes number of mines present in 8 touching blocks(mine can be in any block).\n");
        printf("4. If you play logically you can win\n");
        printf("\n\t\tPress any key to return to main menu");
        getch();
        system("cls");
        goto position;
        break;
    }
    case 3:
        exit(1);
    }
    return;
}

void mineplay(void)
{
    int a=0,b=0,r,c,choice,tm,m[100][100],mi[100][100];
    int count=0;
    system("cls");
    srand(time(0));
    system("COLOR 8F");
    printf("\n\t\t\t\t\t MINE SWEEPER\n\n");
    printf("\n\t\t\t      ");
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
             m[i][j]='|';
    for(int j=0;j<5;j++)
        printf("  [%d]  ",j);
        printf("\n\n");
    int k=0;
    for(int i=0;i<5;i++)
    {
       printf("\t\t\t[%d]  ",k);
       for(int j=0;j<5;j++)
      {
          printf("   |%c| ",m[i][j]);
      }
      printf("\n");
      k++;
    }
    printf("\n\n");

    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    printf("\n Hii! \n Welcome to MINE SWEEPER \n In my version of MINE SWEEPER you can choose no. of blocks and no. of mines yourself\n");
    printf("\nBut, We also provide three levels and you can choose one from them\n");
    printf("\n\t1.Easy\n\t2.Medium\n\t3.Difficult\n\t4.Create your own game\n ");
choicer:
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        r=8;c=8;tm=16;
    }
    else if(choice==2)
    {
        r=10;c=10;tm=36;
    }
    else if(choice==3)
    {
        r=12;c=12;tm=66;
    }
    else if(choice==4)
    {
        printf("\t\tProvide dimensions you want\n");
       printf("\t\t Rows:\n");
       scanf("%d", &r);
       printf("\t\t Coulumns:\n");
       scanf("%d", &c);
       printf("\t\tNumber of mines you want to assign to the board:\n");
       scanf("%d", &tm);
    }
    else goto choicer;
    printf("Press any key to continue\n");
    getch();
    system("cls");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
             m[i][j]='|';
    printf("\n\t\t\t\t\t MINE SWEEPER\n");
    printf("\t=======\n\t| * * |\n\t| --- |\n\t=======\n");
    printf("\n This is block according to your specifications \n");
    printf("\n      ");
    for(int j=0;j<c;j++)
   {
       if(j<10) printf("  [%d]  ",j);
       else printf("  [%d] ",j);
   }
        printf("\n\n");
        k=0;
    for(int i=0;i<r;i++)
    {
       if(k>9) printf("[%d] ",k);
       else printf("[%d]  ",k);
       for(int j=0;j<c;j++)
      {
          printf("   |%c| ",m[i][j]);
      }
      printf("\n");
      k++;
    }
    int co[100][100];
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
        {
            co[i][j]=m[i][j];
            mi[i][j]=m[i][j];
        }
    printf("\nPress any key to start game\n");
    getch();
    system("cls");
    k=0;
    srand(time(0));
    while(k<tm)
    {
        a=rand()%r;
        b=rand()%c;
        if(m[a][b]=='|') m[a][b]='#';
        if(mi[a][b]=='|') mi[a][b]='#';
        k++;
    }
     printf("\n      ");
    for(int j=0;j<c;j++)
   {
       if(j<10) printf("  [%d]  ",j);
       else printf("  [%d] ",j);
   }
        printf("\n\n");
        k=0;
    for(int i=0;i<r;i++)
    {
       if(k>9) printf("[%d] ",k);
       else printf("[%d]  ",k);
       for(int j=0;j<c;j++)
      {
          printf("   |%c| ",co[i][j]);
      }
      printf("\n");
      k++;
    }
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
            if( m[i][j] != '#') m[i][j] = 0;
            if((m[i-1][j-1] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i-1][j] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i][j-1] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i-1][j+1] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i+1][j-1] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i+1][j] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i][j+1] == '#') && (m[i][j] != '#')) m[i][j]++;
            if((m[i+1][j+1] == '#') && (m[i][j] != '#')) m[i][j]++;
      }

   }
  int flag=1;
  while(flag!=0)
  {
      a=0;b=0;
      printf("\n\nSpecify block where you want to click by entering row and coulumn\n");
      scanf("%d %d",&a,&b);
      if(m[a][b]=='#')
      {
        errorsound();
        blink(c,r);
        system("cls");
        printf("\n      ");
        for(int j=0;j<c;j++)
        {
          if(j<10) printf("  [%d]  ",j);
          else printf("  [%d] ",j);
        }
        printf("\n\n");
        k=0;
        for(int i=0;i<r;i++)
        {
          if(k>9) printf("[%d] ",k);
          else printf("[%d]  ",k);
          for(int j=0;j<c;j++)
          {
            printf("   |%c| ",mi[i][j]);
           }
         printf("\n");
         k++;
        }
        printf("\n\n\t\t\t YOU CLICKED ON MINE!!");
        printf("\n\n\t\t\tYOU LOOSE!!\n GAME OVER\n\n");
        flag=0;
      }
     else
     {
        co[a][b]=m[a][b];
        Beep(500,500);
        printf("\n\n      ");
        for(int j=0;j<c;j++)
        {
          if(j<10) printf("  [%d]  ",j);
          else printf("  [%d] ",j);
        }
          printf("\n\n");
          k=0;
        for(int i=0;i<r;i++)
        {
          if(k>9) printf("[%d] ",k);
          else printf("[%d]  ",k);
          for(int j=0;j<c;j++)
          {
              if(co[i][j]=='|') printf("   |%c| ",co[i][j]);
            else printf("   |%d| ",co[i][j]);
          }
          printf("\n");
          k++;
        }
        flag=1;
     }

       for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
           if(m[i][j]!='#' && co[i][j]==m[i][j]) count++;
     if(count==(r*c-tm)) flag=0;
     else count=0;
  }
  count =0;
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
        if(m[i][j]!='#' && co[i][j]==m[i][j]) count++;
     if(count==(r*c-tm))
     {
         system("cls");
         printf("\t\t\t\t CONGRATULATIONS\n\t\t\t\t     YOU WIN\n");
         for(int i=0;i<r;i++)
           for(int j=0;j<c;j++)
                  co[i][j]=m[i][j];
         printf("\n\n      ");
        for(int j=0;j<c;j++)
        {
          if(j<10) printf("  [%d]  ",j);
          else printf("  [%d] ",j);
        }
          printf("\n\n");
          k=0;
        for(int i=0;i<r;i++)
        {
          if(k>9) printf("[%d] ",k);
          else printf("[%d]  ",k);
          for(int j=0;j<c;j++)
          {
              if(co[i][j]=='#') printf("   |%c| ",co[i][j]);
            else printf("   |%d| ",co[i][j]);
          }
          printf("\n");
          k++;
        }
     }
       printf("\nEnter any key to return to menu\n");
       getch();
       system("cls");
       Quickmenu();
       return;
}


void blink(int c,int r)
{
    for(int i=0;i<10;i++)
    {
    system("cls");
    printf("\n      ");
        for(int j=0;j<c;j++)
        {
          if(j<10) printf("  [%d]  ",j);
          else printf("  [%d] ",j);
        }
        printf("\n\n");
       int k=0;
        for(int i=0;i<r;i++)
        {
          if(k>9) printf("[%d] ",k);
          else printf("[%d]  ",k);
          for(int j=0;j<c;j++)
          {
            printf("   |.| ");
           }
         printf("\n");
         k++;
        }
    }
    return;
}


int winsound(void)
{
    Beep(500, 400);
    Beep(600, 400);
    Beep(500, 400);
    Beep(500, 400);
    return 0;
}
