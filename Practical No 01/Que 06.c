 #include <stdio.h>
 int main()
 {
    // 6.Input student name, birth year, and display student name with age
    char name[20];
    int byear,age;
    printf("Enter student name : ");
    scanf("%s",&name);
    printf("Enter student birth year : ");
    scanf("%d",&byear);
    age=2023-byear;
    printf("%s is %d years old",name,age);
}
