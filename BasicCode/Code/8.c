#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of row and col = ");
    scanf("%d%d",&r,&c);
    int mat1[r][c];
    printf("Enter matrices = \n");
    if(r==2&&c==2){
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    int det;
    det=(mat1[0][0]*mat1[1][1])-(mat1[0][1]*mat1[1][0]);
    printf("%d",det);
}
else if(r==3&&c==3)
{
   for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
}int det;
det=((mat1[0][0]*(mat1[1][1]*mat1[2][2]-mat1[2][1]*mat1[1][2]))+(mat1[0][1]*(mat1[1][0]*mat1[2][2]-mat1[2][0]*mat1[1][2]))+mat1[0][2]*(mat1[1][0]*mat1[2][1]-mat1[2][0]*mat1[1][2]));
printf("Determinant of 3*3 mattrix = %d",det);
}
