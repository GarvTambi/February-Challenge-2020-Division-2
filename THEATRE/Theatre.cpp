#include <bits/stdc++.h> 
#include <algorithm>
 #include <unistd.h>
using namespace std; 

    
    int max4(int a1, int b1, int c1, int d1) {
    int e1 = a1 > b1 ? a1 : b1;
    int f1 = c1 > d1 ? c1 : d1;
    return e1 > f1 ? e1 : f1;
}

int main()
{
    int t,i,n,b,v,w,x,y;
    int final_ans=0;
    char a;
    //scanf("%d",&t);
    cin >> t;
    
    //for(i=0;i<t;i++)
    while(t)
    {
        scanf("%d",&n);
        //cin >> n;
        
    
        int c = 0,d = 0,e = 0,f =0,g=0,h=0,j=0,k=0,l=0,m=0,o=0,p=0,q=0,r=0,s=0,u=0;
        for(i=0;i<n;i++)
        {
            cin >> a >> b;//scanf(" %c", &a); 
            //scanf("%d", &b);
        
            {
               // printf("%c %d \n", a,b);
                //if(a=="A" && b==3)
                if(a=='A')
                {
                    if(b == 3)
                    {
                        c= c+1;
                    }
                    else if(b == 6)
                    {
                        d = d +1;
                    }
                    else if(b == 9) 
                    {
                        e = e+1;
                    }
                    else if(b == 12)
                    {
                        f = f+1;
                    }
                }
    
                else if(a=='B')
                {
                    if(b == 3)
                    {
                        g = g+1;
                    }
                    else if(b == 6)
                    {
                        h = h +1;
                    }
                    else if(b == 9) 
                    {
                        j = j+1;
                    }
                    else if(b == 12)
                    {
                        k = k+1;
                    }
                }

                else if(a=='C')
                {
                    if(b == 3)
                    {
                        l= l+1;
                    }
                    else if(b == 6)
                    {
                        m = m +1;
                    }
                    else if(b == 9) 
                    {
                        o = o+1;
                    }
                    else if(b == 12)
                    {
                        p = p+1;
                    }
                }
                
                else if(a=='D')
                {
                    if(b == 3)
                    {
                        q= q+1;
                    }
                    else if(b == 6)
                    {
                        r = r +1;
                    }
                    else if(b == 9) 
                    {
                        s = s+1;
                    }
                    else if(b == 12)
                    {
                        u = u+1;
                    }
                } 
            }
               
        }
        
            // use the max function
        {
                v = max4(c,g,l,q);
                //printf("%d\n",v);
                
                w = max4(d,h,m,r);
                //printf("%d\n",w);
                
                x = max4(e,j,o,s);
                //printf("%d\n",x);
                
                y = max4(f,k,p,u);
            //    printf("%d\n",y);
            
            }
        
        
            
            int add;
            int arr[4] = {v,w,x,y};
            // printf("%d\n",arr[1]);
                
            sort(arr,arr+4);
        
           // for(int i1 = 0; i1<4; i1++)
            //{
               // printf("%d",arr[i1]);
                add = ((100*arr[3])+(75*arr[2])+(50*arr[1])+(25*arr[0]));
            //          printf("%d\n",add);
            //}
         
            int sub, Final;
            int count = 0;
            for(int i1 = 0; i1<4; i1++)
            {
                if(arr[i1] == 0)
                
                {
                   count = count +1;
                }
            }
        
            sub = count*100; 
            
            Final = add-sub;
           // printf("%d",Final);
           cout << Final << endl;
           final_ans += Final;
           
           t--;
        
        
    }
    cout << final_ans << endl;
    return 0;
}    
