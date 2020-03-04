// https://www.codechef.com/viewsolution/29673430

#include<stdio.h>
int main()
{
    int i,t,j;
    long int n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        //input
        scanf("%ld %ld",&n,&k);
        
        long int a[n];
        long int c=0;
        //arr
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
        }
        //total
        for(j=0 ; j < n; j++)
        {
            c = c + (a[j]%k);  
        }   //12 

       // printf("%ld\n",c);
        //reverse loop    
        for(j = (n-1) ;j>=0 ;j--)
        {
                
            if ((c - (a[j]%k)) >= (k-(a[j]%k)) )
            {
                c = ( (c- a[j]%k) - (k-(a[j]%k)) );
            }
            else
            {   
                //printf("%ld\n",c);
                break;
            }
        }  
        
        
        printf("%ld\n",c);
    }
    return 0;
}
