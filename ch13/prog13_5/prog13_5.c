 /* prog13_5, 使用#if、#else與#endif指令 */
 #include <stdio.h>
 #include <stdlib.h>
 #define SIZE 15		/* 定義SIZE等於15 */
 
 int main(void)
 {
    #ifdef SIZE
       #if SIZE>20
          char str[SIZE]="Hello C language.";
       #else
          char *str="SIZE too small";
       #endif
    #else
       char *str="SIZE not defined";
    #endif  
    
    printf("%s\n",str);
    
    system("pause");
    return 0;
 }

