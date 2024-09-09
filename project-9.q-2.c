#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

 main() {
    struct Student students[5];
    int total_marks;
    float percentage;

    for (int i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf(" %[^\n]s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        percentage = (total_marks / 300.0) * 100;

        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total_marks);
        printf("Percent => %.2f%%\n\n", percentage);
    }

}
