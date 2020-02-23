const int M = 15;
const int ALLN = 500;
const int N = 50;
const int MXN = 500;

void play()
{
    srand(time(NULL));
    FILE *fp,*fs,*fo,*fd;
    char mp[M][ALLN+3],st[M][ALLN+3],ov[M][ALLN+3],dn[M][ALLN+3],name[100];
    int gov = 0,score = 0,real = 1;
    fp = fopen("map.txt","r");
    fs = fopen("start.txt","r");
    fo = fopen("over.txt","r");
    fd = fopen("done.txt","r");
    for(int i=0; i<M; i++)
    {
        fgets(&mp[i], MXN, fp);
    }
    fclose(fp);
    fp = fopen("map2.txt","r");
    for(int i = 0;i < M;i++)
    {
        fgets(&mp[i][ALLN/2],MXN/2,fp);
    }
    for(int i=0; i<M; i++)
    {
        fgets(&st[i], MXN, fs);
    }
    for(int i=0; i<M; i++)
    {
        fgets(&ov[i], MXN, fo);
    }
    for(int i=0; i<M; i++)
    {
        fgets(&dn[i], MXN, fd);
    }
    for(int i = 0;i < M;i++) for(int j = 0;j < ALLN;j++) if(mp[i][j]!='Z' && mp[i][j]!='O') mp[i][j] = ' ';
    system("CLS");
    for(int i = 0;i < N+2;i++) printf("*");
    printf("\n");
    for(int x = 0;x < M;x++){ printf("*%s*",st[x]);  }
    for(int i = 0;i < N+2;i++) printf("*");
    printf("\n");
    getch();
    int x = 12,y = 2,lx = x,ly = y;
    mp[lx][ly] = mp[lx+1][ly] = ' ';
    mp[x][y] = mp[x+1][y] = 'M';
    system("CLS");
    for(int i = 0;i < N+2;i++) printf("*");
    printf("\n");
    for(int x = 0;x < M;x++){ printf("*"); for(int y = 0; y < N;y++)
    {
        if(mp[x][y]=='M')
        {
            int r = rand()%3;
            if(r==0) printf("\033[0;31m");
            else if(r==1) printf("\033[0;32m");
            else printf("\033[0;33m");
        }
        printf("%c",mp[x][y]);
        if(mp[x][y]=='M') printf("\033[0m"); } printf("*\n");
    }
    for(int i = 0;i < N+2;i++) printf("*");
    char aaa = getch();
    if(aaa=='T') real = 0;
    for(int i = 0;i+N < ALLN;)
    {
        if(i+N==ALLN-1) break;
        if(real && (mp[x][y]=='Z' || mp[x][y]=='O' || mp[x+1][y]=='O' || mp[x+1][y]=='Z'))
        {
            system("CLS");
            for(int i = 0;i < N+2;i++) printf("*");
            printf("\n");
            for(int x = 0;x < M;x++){ printf("*%s*",ov[x]);  }
            for(int i = 0;i < N+2;i++) printf("*");
            printf("\n");
            gov = 1;
            break;
        }
        mp[lx][ly] = mp[lx+1][ly] = ' ';
        mp[x][y] = mp[x+1][y] = 'M';
        system("CLS");
        for(int i = 0;i < N+2;i++) printf("*");
        printf("\n");
        for(int x = 0;x < M;x++){ printf("*"); for(int y = 0; y < N;y++)
        {
            if(mp[x][i+y]=='M')
            {
                int r = rand()%3;
                if(r==0) printf("\033[0;31m");
                else if(r==1) printf("\033[0;32m");
                else printf("\033[0;33m");
            }
            printf("%c",mp[x][i+y]);
            if(mp[x][i+y]=='M') printf("\033[0m"); } printf("*\n");
        }
        for(int i = 0;i < N+2;i++) printf("*");
        printf("\n              ******Score: %d*******",i);
        score = i;
        if(kbhit())
        {
            char c = getch();
            lx = x,ly = y;
            if(c=='w'){ x--; }
            else if(c=='s'){ x++; }
        }
        else
        {
            lx = x,ly = y;
            y++,i++;
        }
    }
    if(!gov)
    {
        system("CLS");
        for(int i = 0;i < N+2;i++) printf("*");
        printf("\n");
        for(int x = 0;x < M;x++){ printf("*%s*",dn[x]);  }
        for(int i = 0;i < N+2;i++) printf("*");
        printf("\n");
    }
    printf("\n              ******Score: %d*******\n",score);
    printf("name: ");
    scanf("%s",name);
    if(aaa=='A') score+=1000;
    FILE *fppp;
    fppp = fopen("leaderboard.txt", "a");
    fprintf(fppp,"%s\n%d\n", name, score);
    fclose(fppp);
    getch();
}
