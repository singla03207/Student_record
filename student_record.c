#include <stdio.h>
struct record
{
    char name[34];
    int roll_no;
    int marks[5];
};
float avg(int arr[5])
{
    int sum = 0;
    float average;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    average = (sum * 1.0) / 5;
    return average;
}
void grade(float a)
{

    if (a >= 80)
    {
        printf("YOUR GRADE IS 'A' ");
    }
    else if (a >= 70 && a < 80)
    {
        printf("YOUR GRADE IS 'B' ");
    }
    else if (a >= 60 && a < 70)
    {
        printf("YOUR GRADE IS 'C' ");
    }
    else if (a >= 50 && a < 60)
    {
        printf("YOUR GRADE IS 'D' ");
    }
    else
    {
        printf("YOUR GRADE IS 'E' ");
    }
}
int main()
{

    struct record student[2];

    for (int i = 0; i < 2; i++)
    {

        printf("enter Name of student%d: ", i + 1);
        scanf("%s", student[i].name);
        printf("enter Roll NO. of student%d: ", i + 1);
        scanf("%d", &student[i].roll_no);
        for (int j = 0; j < 5; j++)
        {
            printf("enter Marks of student%d: ", i + 1);
            scanf("%d", &student[i].marks[j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("NAME OF STUDENT%d : %s\n", i + 1, student[i].name);
        printf("Roll NO. OF STUDENT%d : %d\n", i + 1, student[i].roll_no);
        for (int j = 0; j < 5; j++)
        {

            printf("%d ", student[i].marks[j]);
        }
        printf("\n");
        printf("Average of student%d is: %.2f ", i + 1, avg(student[i].marks));
        printf("\n");
        grade(avg(student[i].marks));

        printf("\n");
        printf("\n");
    }

    return 0;
}
