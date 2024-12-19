q2: Your program should get all the input first then display the whole bar chart (-1)

q3: did not check for file open errors (-1). Did not close outputFile properly at the end  (-1

2. (3 pts) Write a complete program in a cpp file that prompts the user for today’s sales for
five stores. The program should then display a bar graph comparing each store’s sales.
Create each bar in the bar graph by displaying a row of asterisks. Each asterisk should
represent $100 of sales. The program needs to be implemented using a nested loop
instead of five separate loops. Input validation is not required, we can assume that the
user will always enter positive sales numbers in multiples of 100.
Sample input and output:
Input:
Enter today’s sales for store 1: 1000
Enter today’s sales for store 2: 1200
Enter today’s sales for store 3: 1800
Enter today’s sales for store 4: 800
Enter today’s sales for store 5: 1900
Output:
SALES BAR CHART
(Each * = $100)
Store 1: **********
Store 2: ************
Store 3: ******************
Store 4: ********
Store 5: *******************

3. (4 pts) Write a complete program in a cpp file that reads the file grades.txt (you can find
the file in the homework description) where each line contains a student name followed
by three of their test scores. Your program should find who has the highest average grade
and write the result (name with their average score) to an output file highestScore.txt. If
there is more than one student with the same highest score, outputting any of them is fine.
Save the highest score with two digits after the decimal point.
Sample input file and output file:
Input (grades.txt):
John 85 90 78
Jane 92 88 95
Output (highestScore.txt):
Jane 91.67
