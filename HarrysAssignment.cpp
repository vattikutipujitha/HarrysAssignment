#include <stdio.h>
#define MIN(a,b)  ((((a)-(b))&0x80000000) >> 31)? (a) : (b)
int val[1000001],les[1000001],top,c;
char buk[1000001][16];
void add()
{
    if(top-1 >= 0)
                les[top]=MIN(les[top-1],val[top]);
        else
                les[top]=val[top];
};
void removal()
{
        int i;c=0;
        for(i=top-1;i>=0;i--)
        {               
                if(les[i]==val[i])
                        break;
                c++;
        }       
        top=i;
};
int main()
{
        int n;top=0;int g;
        scanf("%d",&n);
        while(n--)
        {
                scanf("%d",&g);
                if(g>0)
                {
                        val[top]=g;
                        scanf("%s",buk[top]);                   
                        add();
                        top++;
                }
                else if(g==0)
        {   
            char s[16];
            scanf("%s",s);            
        }
                else if(g==-1)
                {
                        removal();
                        printf("%d %s\n",c,buk[top]);
                }
        }
        return 0;
}
