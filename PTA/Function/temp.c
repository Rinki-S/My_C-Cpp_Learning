#include <stdio.h>
#include <stdio.h>

void my_function() {
    // 尝试在函数内部定义全局变量（实际上是局部变量）
    static int global_variable_inside_function = 20;

    // 在这里使用该变量
    printf("Inside function: %d\n", global_variable_inside_function);
}

int main() {
    // 尝试在main函数中访问在函数内部定义的“全局”变量
    // 这实际上是不允许的，会导致编译错误
    printf("Outside function: %d\n", global_variable_inside_function);

    return 0;
}
