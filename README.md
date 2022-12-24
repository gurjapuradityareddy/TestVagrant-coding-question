# TestVagrant-coding-question

1.This code is designed to calculate all possible combinations of newspaper subscriptions for a given weekly budget and print them out to the console.

2.First, it defines a struct called "Newspaper" to store the name and prices of each newspaper. This struct includes 7 variables: a character array to hold the name of the newspaper, and 6 float variables to hold the prices for each day of the week.

3.Next, it initializes an array of these "Newspaper" structs with the given data for 5 different newspapers. This array is called "newspapers".

4.It then prompts the user to enter their weekly budget, and stores this value in the "budget" variable.

5.The code then enters a loop that iterates through all possible combinations of newspaper subscriptions (using bit manipulation to represent which newspapers are included in each combination). It calculates the total cost of each combination by adding up the prices of all the selected newspapers. If the total cost of a combination is within the budget, it prints out the combination and the total cost.

6.Finally, the code returns 0 to indicate that it has completed successfully
