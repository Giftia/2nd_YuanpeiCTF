#include <stdio.h>
#define IN "in.txt"
#define OUT "out.txt"
#define KEY 61
void scrambler(const char *in, const char *out, unsigned char key)
{
    FILE *i, *o;
    int c;
     
    i = fopen(in, "rb");
    o = fopen(out, "wb");//打开文件，因为假定可读写，所以对是否成功不做判断
    while((c = fgetc(i))!=EOF)//读入字符直到文件结尾
    {
        c^=key;//执行异或加密或解密
        fputc(c,o);//写入文件
    }
     
    fclose(i);
    fclose(o);
}
 
int main()
{
    scrambler(IN,OUT,KEY);
    return 0;
}