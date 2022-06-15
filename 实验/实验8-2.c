//【项目说明】用结构体类型表示时间内容（时间以时、分、秒表示），输入一个时间数值（时分秒），
//再输入一个秒数 n（n<60），以 h:m:s 的格式输出该时间再过 n 秒后的时间值
//(超过 24 点就从 0 点开始计时)。试编写相应程序。
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
    printf("请输入时间：");
    scanf("%d,%d,%d",&c.hour,&c.minute,&c.second);
    printf("请输入秒数：");
    scanf("%d",&n);
    add(&c,n);
    printf("%d,%d,%d",c.hour,c.minute,c.second);
    return 0;
}
