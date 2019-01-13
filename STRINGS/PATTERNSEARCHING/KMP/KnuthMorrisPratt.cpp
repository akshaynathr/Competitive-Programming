#include <bits/stdc++.h>
using namespace std;


void preprocess(char * pat,int M,int *lps)
{
    int i=1; //starts from 2nd char in pattern

    int j=0;
    int lpscount=0;
    lps[0]=0;

    while(i<M)
    {
        if(pat[i]==pat[j])
        {
            lpscount=lpscount+1;
            lps[i]=lpscount;
            i++;
            j++;
            
        }
        else
        {
            if(j!=0)
            {
                j=lps[j-1];
            }

            else
            {
                lpscount=0;
                lps[i]=0;
                j=i;
                i++;
            }
        }


    }


     
}
int main()
{
    char pat[] ="AAACAAAAAC";
    int  lps [6]={0};
    int len= sizeof(pat)/sizeof(*pat);
    preprocess(pat,len,lps);
    for(int i=0;i<len;i++)
    {
        cout<<lps[i]<<endl;
    }

    return 0;
    
}

