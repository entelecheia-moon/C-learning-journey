/*��������
��Ŀ��������дһ���ݹ麯������һ������n������������磬n = 12345�����54321��  
����    һ������n��  
���    ������������
####����˵��
�������룺  12345
���������  54321                */

#include<stdio.h>
void solve(int n){
    printf("%d", n%10);
    n=n/10;
    if(n>0) solve(n);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}

