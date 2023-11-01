### There was a edge case issue in feof function and it will malfunction in some environments
> im trying to identify and resolve the issue with help of few other peoples

### the issue
q4.c will pause in middle of execution (after 1st iteration of feof while loop) under specific env conditions

### To replicate
- compile and run Q4.c
- enter 8 digit string as input for student ids 

