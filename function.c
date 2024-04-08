#include <stdio.h>
void populate car(struct inpatient car)
 {

    int i;
    for (i = 0; i < 10; i++)
     {
        printf("Enter model of car %d: ", i + 1);
        scanf("%s",car->car[i].model);
        printf("year%d: ", i + 1);
        scanf("%s", car->car[i].year);
        printf("Enter %d: ", i + 1);
        scanf("%d", &car->car[i].price);
    }
}

void print_car(struct car) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("car:%d\n", i + 1);
        printf("model: %s\n", car->car[i].model);
        printf("car: %s\n", car->car[i].year);
        printf("age: %d\n", car->car[i].price);
    }
}

int main() {
    struct car;
    populate_car;
    print_car;
    return 0;

}
