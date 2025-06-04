#include<stdio.h>
int main()
{
    FILE *p;
    p = fopen("text.txt","a");
    int n,m;
    scanf("%d%d",&n,&m);
    int ar[n][m];
    fprintf(p,"ID\t");
    for(int k=1;k<=m;k++){
        fprintf(p,"m%d\t",k);
    }
    fprintf(p,"Average\n");
    for(int i=0;i<n;i++){
    float sum=0;
    fprintf(p,"%d\t",i+1);
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
            fprintf(p, "%d ",ar[i][j]);
            sum=sum+ar[i][j];
            fprintf(p,"\t");

        }
        fprintf(p,"%.2f",sum/m);
     fprintf(p,"\n");
    }
    printf("Completed");
}
