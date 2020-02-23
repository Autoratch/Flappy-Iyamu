void score()
{
        system("CLS");
        char name[100][20];
        int score[100],idx[100];
        int i = 0;
        FILE *fppppp;
        fppppp = fopen("leaderboard.txt", "r");
        while(fgets(name[i],20,fppppp)!= NULL)
        {
            name[i][strlen(name[i])-1] = '\0';
            fscanf(fppppp,"%d",&score[i]);
            fscanf(fppppp,"%d",&score[i]);
            idx[i] = i;
            i++;
        }
        int ch = 1;
        while(ch)
        {
            ch = 0;
            for(int j = 0;j < i-1;j++) if(score[j]<score[j+1])
            {
                int tmp = score[j];
                score[j] = score[j+1];
                score[j+1] = tmp;
                tmp = idx[j];
                idx[j] = idx[j+1];
                idx[j+1] = tmp;
                ch = 1;
            }
        }
        printf("-------Scoreboard------\n");
        for(int j = 0;j < i;j++)
        {
            printf("**  %d.) %s: %d  \n",j+1,name[idx[j]],score[j]);
        }
        printf("------------------------\n");
        fclose(fppppp);
        getch();
}
