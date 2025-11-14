#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "NguyenVuThanh@gmail.com";
    int lenght = strlen(name);
    int cntchucai = 0;
    int cntchuso = 0;
    int cntdacbiet = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z')
        {
            cntchucai++;
        }
        else if (name[i] >= '0' && name[i] <= '9')
        {
            cntchuso++;
        }
        else if (name[i] != ' ')
        {
            cntdacbiet++;
        }
    }
    printf("name :%s\n", name);
    printf("so chu cai la :%d\n", cntchucai);
    printf("so chu so la :%d\n", cntchuso);
    printf("so ki tu dac biet la :%d", cntdacbiet);
}