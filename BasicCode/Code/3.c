#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    int m[a],n[b];

    for( int i=0;i<a;i++){
            scanf("%d",&m[i]);

    }
    for(int i=0;i<b;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(m[i]==n[j]){
              c++;
            }
        }
    }
   if(c==b){printf("YES");}
    else printf("NO");
    return 0;
}

