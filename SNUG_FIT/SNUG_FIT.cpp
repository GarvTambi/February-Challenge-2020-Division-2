// Here is the link of the code - https://www.codechef.com/viewsolution/29576281

#include <bits/stdc++.h>  
using namespace std; 
int main()
{
    int n,i,t,j,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        long int a[t],b[t];
        long int c=0;
        //for(j=0;j<t;j++)
        //{
            for(j=0;j<t;j++)
            {
                scanf("%ld",&a[j]);
                //cin >> a[j];
            }
            
            for(j=0;j<t;j++)
            {
                scanf("%ld",&b[j]);
                //cin >> b[j]; 
            }
            
            sort(a, a+t);
            sort(b, b+t);
            
            for(j=0;j<t;j++)
            
            {
                if( a[j] <= b[j] )
                {
                    c = c + a[j];
                }
                else if( a[j] > b[j] )
                {
                    c = c + b[j];
                }
            }
        printf(" %ld \n",c);   
        //cout << c << endl;
    //    }
    }
    return 0;
}

// Feel free to ask tambigarv@gmail.com
