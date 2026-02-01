#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printarray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void randomize ( int arr[], int n )
{
    srand ( time(NULL) );
    for (int i=n-1;i>0;i--)
    {
        int j=rand()%(i+1);
        swap(&arr[i],&arr[j]);
    }
}
void printmatrix(int g[4][4])
{
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
    {
        if(g[i][j]!=16)
        printf("%d",g[i][j]);
        printf("\t");
    }
    printf("\n");
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15,16};
    int right[] = {1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15,16};
    int n = sizeof(arr)/ sizeof(arr[0]);
    randomize (arr, n);
    printarray(arr, n);
    int g[4][4];
    int t=0;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
        g[i][j]=arr[t++];
    printmatrix(g);
    char c,e;
    printf("press a for Left, s for Down, d for right, w for up, q for quit\n");
    int r;
    int p;
    for(int k=1;k>0;k++)
    {
        for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            if(g[i][j]==16)
            {
                r=i;
                p=j;
            }
        }
        scanf("%s",&c);
        if(c=='a'&&p>0)
        {
            int temp=g[r][p];
            g[r][p]=g[r][p-1];
            g[r][p-1]=temp;
            printmatrix(g);
        }
        if(c=='a'&&p==0)
            printf("invalid move\n");
        if(c=='s'&&r<3)
        {
            int temp=g[r][p];
            g[r][p]=g[r+1][p];
            g[r+1][p]=temp;
            printmatrix(g);
        }
        if(c=='s'&&r==3)
            printf("invalid move\n");
        if(c=='d'&&p<3)
        {
            int temp=g[r][p];
            g[r][p]=g[r][p+1];
            g[r][p+1]=temp;
            printmatrix(g);
        }
        if(c=='d'&&p==3)
            printf("invalid move\n");
        if(c=='w'&&r>0)
        {
            int temp=g[r][p];
            g[r][p]=g[r-1][p];
            g[r-1][p]=temp;
            printmatrix(g);
        }
        if(c=='w'&&r==0)
            printf("invalid move\n");
        if(c=='q')
        {
            printf("are you sure you want to quit if yes click y else click n\n");
            scanf("%s",&e);
            if(e=='y')
                break;
        }
        int win=1,f=0;
        for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            if(g[i][j]!=right[f++])
                win=0;
        }
        if(win==1)
        {
            printf("congratulations,you won\n");
            break;
        }

    }
    return 0;
}
