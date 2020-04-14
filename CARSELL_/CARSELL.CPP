// https://www.codechef.com/APRIL20B/problems/CARSELL


#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,i,j,k,z;
    int m = 1000000007;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        int d =0;
        int c =0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        sort(a, a+n);
        for (int j = 0; j < n; j++) 
        {
            //    cout << a[j] << " "; 
        }
        //printf("\n");
        
        for(k = n-1;k >= 0;k--)
        {
            z = a[k] - d; 
             
             
            if(a[k] == 0)
            {
                c = c%m;
                d++;
            }
            else
            {

                    if(z >= 0)
                    {
                        c= (c + z)%m;
                        d++;
                    }
                    else
                    {
                        z = 0;
                        c = (c + z)%m ;
                        d++;
                    }
                    
            }
        }
        printf("%d\n",c%m);
    }
   return 0; 
}
