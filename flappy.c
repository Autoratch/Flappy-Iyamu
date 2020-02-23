//Dev: Auto Ham Parm
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>
#include "game.h"
#include "score.h"
#define TIME 200

int state;

int main()
{
    while(1)
    {
        system("CLS");
        printf("*****************************\n");
        printf("*****************************\n");
        printf("                            \n");
        if(state==0) printf("         => Start            \n");
        else         printf("           Start\n");
        printf("                            \n");
        if(state==1) printf("          => Leaderboard      \n");
        else         printf("           Leaderboard\n");
        printf("                            \n");
        if(state==2) printf("         => Exit             \n");
        else         printf("           Exit\n");
        printf("                            \n");
        printf("*****************************\n");
        printf("*****************************\n");
        char c = getch();
        if(c=='w'){ if(state>0) state--; }
        if(c=='s'){ if(state<2) state++; }
        if(c=='\r')
        {
                Sleep(TIME);
                system("CLS");
                printf("*****************************\n");
                printf("                            \n");
                if(state==0) printf("         => Start            \n");
                else         printf(" \n");
                printf("                            \n");
                if(state==1) printf("          => Leaderboard      \n");
                else         printf(" \n");
                printf("                            \n");
                if(state==2) printf("         => Exit             \n");
                else         printf(" \n");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                if(state==0) printf("         => Start            \n");
                else         printf(" \n");
                printf("                            \n");
                if(state==1) printf("          => Leaderboard      \n");
                else         printf(" \n");
                printf("                            \n");
                if(state==2) printf("         => Exit             \n");
                else         printf(" \n");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                printf("                            \n");
                if(state==1) printf("          => Leaderboard      \n");
                else         printf(" \n");
                printf("                            \n");
                if(state==2) printf("         => Exit             \n");
                else         printf(" \n");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                if(state==1) printf("          => Leaderboard      \n");
                else         printf(" \n");
                printf("                            \n");
                if(state==2) printf("         => Exit             \n");
                else         printf(" \n");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                printf("                            \n");
                if(state==2) printf("         => Exit             \n");
                else         printf(" \n");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                if(state==2) printf("         => Exit             \n");
                else         printf(" \n");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                printf("                            \n");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                printf("*****************************\n");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
                printf("*****************************\n");

                Sleep(TIME);
                system("CLS");
            if(state==0)
            {
                play();
            }
            else if(state==1)
            {
                score();
            }
            else return 0;
        }
    }
}
