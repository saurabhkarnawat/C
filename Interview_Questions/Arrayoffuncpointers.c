// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int fun1()
{
    return 5;
}
int fun2()
{
    return 10;
}
int main() {

   
    int (*fptr[2])()={fun1,fun2};
    printf("%d",fptr[0]());
    return 0;
}