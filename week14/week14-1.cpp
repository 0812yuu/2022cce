
#include <stdio.h>
int sum(int a, int b); ///先宣告declsae

int main()
{
    ///再用之前要先宣告declarecji或定義define
    int ans = sum(2, 3); ///此用 呼叫
    printf("ans: %d\n",ans);

}
    int sum(int a, int b)
    {
        return a+b;
    }
