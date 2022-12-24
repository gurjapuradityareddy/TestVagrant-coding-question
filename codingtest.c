#include <stdio.h>

// Define a struct to store the prices of each newspaper
struct Newspaper {
  char name[20];
  float monday;
  float tuesday;
  float wednesday;
  float thursday;
  float friday;
  float saturday;
  float sunday;
};

int main() {
  // Define the array of newspapers and their prices
  struct Newspaper newspapers[] = {
    {"TOI", 3, 3, 3, 3, 3, 5, 6},
    {"Hindu", 2.5, 2.5, 2.5, 2.5, 2.5, 4, 4},
    {"ET", 4, 4, 4, 4, 4, 4, 10},
    {"BM", 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5},
    {"HT", 2, 2, 2, 2, 2, 4, 4}
  };

  // Get the weekly budget from the user
  float budget;
  printf("Enter your weekly budget for newspaper subscriptions: ");
  scanf("%f", &budget);

  // Calculate all possible combinations of newspaper subscriptions
  // for the given budget
  int num_newspapers = sizeof(newspapers) / sizeof(newspapers[0]);
  for (int i = 0; i < (1 << num_newspapers); i++) {
    float total_cost = 0;
    for (int j = 0; j < num_newspapers; j++) {
      if (i & (1 << j)) {
        total_cost += newspapers[j].monday + newspapers[j].tuesday + newspapers[j].wednesday + newspapers[j].thursday + newspapers[j].friday + newspapers[j].saturday + newspapers[j].sunday;
      }
    }
    if (total_cost <= budget) {
      printf("Subscription combination: ");
      for (int j = 0; j < num_newspapers; j++) {
        if (i & (1 << j)) {
          printf("%s ", newspapers[j].name);
        }
      }
      printf("\nTotal cost: %.2f\n", total_cost);
    }
  }

  return 0;
}