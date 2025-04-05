#include <stdio.h>
#define total_question 10

typedef struct{

    char question[300];
    char options[4][50];
    char correctoption;

}Question;

void askQuestion(Question q, int*score){
    char answer;
    printf("\n%s\n", q.question);
    printf("A. %s\n", q.options[0]);
    printf("B. %s\n" ,q.options[1]);
    printf("C. %s\n" ,q.options[2]);
    printf("D. %s\n", q.options[3]);

    printf("Your Answer(A/B/C/D): ");
    scanf(" %c", &answer);
    
    if(answer == q.correctoption || answer == q.correctoption +32){
        printf("Correct!");
        (*score)++;

    } else {
        printf("Wrong! Correct answer was %c.\n", q.correctoption);
    }
}
int main(){
  Question quiz[total_question] = {
   { "1. Who is known as the 'God of Cricket'?",
            { "Virat Kohli", "MS Dhoni", "Sachin Tendulkar", "Rohit Sharma" },
            'C'
        },
        {
            "2. How many players are there in a cricket team?",
            { "10", "11", "12", "9" },
            'B'
        },
        {
            "3. What does LBW stand for?",
            { "Leg Behind Wicket", "Long Ball Wide", "Leg Before Wicket", "Low Bat Width" },
            'C'
        },
        {
            "4. Which country has won the most ICC Cricket World Cups (ODI)?",
            { "India", "West Indies", "Australia", "England" },
            'C'
        },
        {
            "5. What is the maximum number of overs in a T20 match per side?",
            { "10", "15", "20", "50" },
            'C'
        },
        {
            "6. Which Indian bowler has taken the most wickets in ODIs?",
            { "Zaheer Khan", "Anil Kumble", "Javagal Srinath", "Kapil Dev" },
            'B'
        },
        {
            "7. Who won the ICC T20 World Cup 2022?",
            { "India", "England", "Pakistan", "Australia" },
            'B'
        },
        {
            "8. Which stadium is known as the 'Mecca of Cricket'?",
            { "Wankhede", "MCG", "Lord's", "Eden Gardens" },
            'C'
        },
        {
            "9. Who was the first cricketer to score a double century in ODIs?",
            { "Virender Sehwag", "MS Dhoni", "Rohit Sharma", "Sachin Tendulkar" },
            'D'
        },
        {
            "10. What color ball is used in Test cricket?",
            { "White", "Red", "Pink", "Orange" },
            'B'
        }

  
};
 
int score = 0;
printf(" Quiz Game! \n");

for(int i = 0; i < total_question ; i++) {
    askQuestion(quiz[i], &score);
}

printf("\nYour final score: %d out of %d\n", score, total_question);

    if (score == total_question) {
        printf("Excellent! You're a quiz master!\n");
    } else if (score >= 3) {
        printf("Good job! You did well.\n");
    } else {
        printf("Keep practicing!\n");
    }

    return 0;
}