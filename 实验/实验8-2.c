//����Ŀ˵�����ýṹ�����ͱ�ʾʱ�����ݣ�ʱ����ʱ���֡����ʾ��������һ��ʱ����ֵ��ʱ���룩��
//������һ������ n��n<60������ h:m:s �ĸ�ʽ�����ʱ���ٹ� n ����ʱ��ֵ
//(���� 24 ��ʹ� 0 �㿪ʼ��ʱ)���Ա�д��Ӧ����
#include <stdio.h>
struct time{
    int hour;
    int minute;
    int second;
};
 
void add(struct time *p,int s){
    int ho,mi,se;
    ho=p->hour;
    mi=p->minute;
    se=p->second;
    se=se+s;
    if(se<60){p->second=se;return;}
    else {
        mi=p->minute=mi+se/60;
        se=p->second=se%60;
        if(mi<60){return;}
        else {
            mi=p->minute=mi%60;
            ho=ho+mi/60;
            mi=p->hour=mi%60;
        }
        if(ho<24){return;}
        else mi=p->hour=mi%24;
        return;}}
 
int main(int argc, const char * argv[]) {
    struct time c;
    int n;
    printf("������ʱ�䣺");
    scanf("%d,%d,%d",&c.hour,&c.minute,&c.second);
    printf("������������");
    scanf("%d",&n);
    add(&c,n);
    printf("%d,%d,%d",c.hour,c.minute,c.second);
    return 0;
}
