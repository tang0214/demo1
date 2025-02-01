#include<stdio.h>
#include<string.h>


char str[2005];

int dp[2005][2005];

int main()
{

    while(scanf("%s" ,str) != -1)
    {
        int n=strlen(str);
        int ans=0;

        memset(dp ,0 ,sizeof(dp));

        for(int i=0 ; i<n ; i++)
            dp[i][i]=1;

        for(int i=0 ; i<=(n-2) ; i++)
        {
            if(str[i] == str[i+1])
            {
                dp[i][i+1]=1;
                ans++;
            }

        }

        for(int i=2 ; i<=(n-1) ; i++)
        {
            for(int j=0 ; j<=(n-i-1) ; j++)
            {
                dp[j][j+i] = dp[j+1][j+i-1] & (str[j] == str[j+i]);

                if(dp[j][j+i])
                    ans++;
            }
        }

        printf("%d\n" ,ans);


    }





    //system("pause");
    return 0;
}
