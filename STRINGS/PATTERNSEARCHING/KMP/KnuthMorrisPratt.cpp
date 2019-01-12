#include <bits/stdc++.h>
using namespace std;


int *prepocess(int * pat,int M,int len)
{
    int lps[10]; 
    int i=1; //starts from 2nd char in pattern

    int j=0;
    int lpscount=0;

    while(i<M)
    {
        if(pat[i]==pat[j])
        {
            lpscount=lpscount+1;
            i++;
            j++;
            lps[i]=lpscount;
        }
        else
        {
            if(j!=0)
            {
                j=j-1;
            }

            else
            {
                lpscount=0;
                j=i;
                i++;
            }
        }


    }

    int *p = lps;

    return p;
     
}
int main()
{

    return 0;
    
}

