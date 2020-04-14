#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    int t,n,i,j,k;
    //int c=0;
    
    scanf("%d",&t);
    while(t--)
    {
        int z = 0;
        int c = 0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        //std::stack<int> newstack;  
        for(int j= 0; j<n; j++)
        {
            if(a[j]==1)
            {
                for(k=j;k<n;k++)
                {
                    if(a[k+1] == 1)
                    {
                        if(c<5)
                        {
                            z = z+1;
                            //printf("NO\n");
                            break;
                        }
                        else
                        {
                            c = 0;
                        }
                    }
                    else 
                    {
                        c =c+1;
                    }
                    
                }
                
            }
        }
        if(z>=1)
        {
            printf("NO\n");
        }
        else
        {
        printf("YES\n");
        }
    }
    return 0;
}
