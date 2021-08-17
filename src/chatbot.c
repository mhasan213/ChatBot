/******************************
*Name:A.K.M. Moinul Islam (ID-1611912642)
*Name:Md.Mahmudul Hasan(ID-1611916642)
*Md.Zahid Hossain Bhuiyan(ID-1611068642)
********************************/
#include <stdio.h>
#include <string.h>
#include "chatbot.h"
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

 struct chatbot
 {
    // char line[LINELENGTH];
     char str[500];
 };


 void swap(int *p, int *q)
{
    int temp= *p;
    *p=*q;
    *q=temp;
}


void add(void){
    float x;
    printf("How many digits u want to add:");
    int i, n;
    float sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f", &x);
        sum += x;
    }
    printf("%f\n",sum);
}


int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);

}



void divide(void)
{
    float t,h;
    printf("What are the digits that you want to divide :");
    scanf("%f %f",&t,&h);
    printf("%f",t/h);
}

void random(void)
{
  int c, n;
  printf("Enter the guessing number: ");
  scanf("%d", &c);
  srand ( time(NULL) );
  n = rand() % 10 + 1;
    if(c == n)
        printf("WOW you guessed right!");
    else
        printf("Wrong! I guessed %d", n);


}

/* Multiplication function */
void multiply(void)
{
    int n, multi = 1, i;
    printf("How many digits you want to multiply: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
       scanf("%d", &arr[i]);
        multi *= arr[i];
    }



    printf("%d\n", multi);
}




void subtract(void)
{
    int b,c;
    printf("What are the digits that you want to subtract :");
    scanf("%d %d",&b,&c);
    printf("%d",b-c);
}


int main(void) {
    system("COLOR FC");
    struct chatbot p;
  char line[LINELENGTH];
  char *word;

  printf("\n Rukia v0.0.1!\n\nFor Helpline input keyword:helpline\n\n");

  while(1) {

    do {
    fgets(line, LINELENGTH, stdin);
    int i;
    for(i = 0; line[i] != '\0'; i++)
        line[i] = tolower(line[i]);
    if (strlen(line) <= 1) continue; /*exit program*/
    word = strtok(line, SEPCHARS); /*Find first word */
      // Some responses based on the keywords
      if (strncmp(word, "hi", 50) == 0) {
        printf("> %s\n","Hello" );
        continue;
      }
      else if (strncmp(word, "coding", 50) == 0) {
        printf("> %s\n","Yes, I love programming!" );
        continue;
      }
      else if(strncmp(word,"time",50)==0){

        time_t now;
        time(&now);

            printf("%s", ctime(&now));

        //    return EXIT_SUCCESS;
        continue;
}


      else if (strncmp(word, "faculty", 50) == 0) {
        printf("> %s\n","The One and Only Rasel Selim Topu Sir" );
        continue;
      }
      else if (strncmp(word, "instructor", 50) == 0) {
        printf("> %s\n","Jitu vaia" );
        continue;
      }
      else if (strncmp(word,"you", 50) == 0) {
        printf("> %s\n","Fine" );
        continue;
      }
      //else if (strncmp(word, "date", 50) == 0) {
        //printf("> %s\n","10-04-16" );
        //continue;
      //}
      else if (strncmp(word, "random", 50) == 0) {
        random();
        continue;
      }
     // else if (strncmp(word, "day", 50) == 0) {
       // printf("> %s\n","Sunday" );
       // continue;
      //}
        else if (strncmp(word, "factorial", 50) == 0) {
                int x;
        printf("Enter the number u want to know it's factorial :");
        scanf("%d",&x);
        printf("%d\n", factorial(x));
        continue;
      }
       else if (strncmp(word, "name", 50) == 0) {
        printf("> %s\n","My name is Rukia" );
        continue;
      }
      else if (strncmp(word, "coding", 50) == 0) {
        printf("> %s\n","Yes, I love programming!" );
        continue;
      }
       else if (strncmp(word, "swap", 50) == 0) {
        //printf("> %s\n","Yes, I love programming!" );
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    swap(&a,&b);

    printf("a= %d and b= %d\n",a,b);
        continue;
      }
      else if (strncmp(word, "helpline", 50) == 0) {
            int i=0;
    FILE *fp=fopen("Guide.txt","r");
    if(fp!=NULL){

        fscanf(fp,"%s",p.str);
        printf("\n");
        printf("%s",p.str);
        continue;}

      }
      else if (strncmp(word, "creators", 50) == 0) {
        printf("> %s\n","1.A.K.M. Moinul Islam \n 2.Mahmudul Hasan Shihab \n 3.MD. Zahid Hossain Bhuiyan" );
        continue;
      }
      else if (strncmp(word, "hear", 50) == 0) {
        printf("> %s\n","What you heard is right" );
        continue;
      }
      else if (strncmp(word, "python", 50) == 0) {
        printf("> %s\n","Yo, I love Python" );
        continue;
      }
      else if (strncmp(word, "?", 50) == 0) {
        printf("> %s\n","Is that a question ?" );
        continue;
      }
      else if (strncmp(word, "add", 50) == 0) {
        add();
        continue;
      }
       else if (strncmp(word, "divide", 50) == 0) {
        divide();
        continue;
      }
      else if (strncmp(word, "subtract", 50) == 0) {
        subtract();
        continue;
      }
       else if (strncmp(word, "multiply", 50) == 0) {
        multiply();
        continue;
      }
      else if  (strncmp(word, "love", 50) == 0) {
        printf("> %s\n","Yes I love it" );
        continue;
      }
      else if  (strncmp(word, "How", 50) == 0) {
        printf("> %s\n","Oh, now you don't know lair!" );
        continue;
      }
      else if  (strncmp(word, "What", 50) == 0) {
        printf("> %s\n","It is clear, ain't it?" );
        continue;
      }
      else if (strncmp(word, "loveyou", 50) == 0) {
        printf("> %s\n","I love you too" );
        continue;
      }
       else if (strncmp(word, "sorry", 50) == 0) {
        printf("> %s\n","Are you really Sorry?" );
        continue;
      }
       else if (strncmp(word, "doing", 50) == 0) {
        printf("> %s\n", "How can you do that?" );
        continue;
      }
       else if (strncmp(word, "light", 50) == 0) {
         printf("> %s\n", "U meant light my fire by Jim Morrison ?");
         continue;
       }

       else if (strncmp(word, "friend", 50) == 0){
        printf(">%s\n","yes,friends are really precious");
        continue;
       }
       else if (strncmp(word, "sports", 50)==0){
        printf(">%s\n","i love sports");
        continue;
       }
       else if (strncmp(word, "friend", 50) == 0){
        printf(">%s\n","yes,friends are really precious");
        continue;
       }
       else if (strncmp(word, "sports", 50)==0){
        printf(">%s\n","i love sports");
        continue;
       }
       else if (strncmp(word, "hobby", 50)==0){
        printf(">%s\n","my hobby is talking to people");
        continue;
       }
        else if (strncmp(word, "university", 50)==0){
        printf(">%s\n","university life is really had");
        continue;
       }
       else if (strncmp(word, "where", 50)==0){
        printf(">%s\n","we are currently in NSU");
        continue;
       }
       else if (strncmp(word, "stupid", 50)==0){
        printf(">%s\n","i am not stupid,my coding is not just smart enough yet");
        continue;
       }
       else if (strncmp(word, "rukia", 50)==0){
       printf(">%s\n","what can i do for you user?");
        continue;
       }
       else if (strncmp(word, "programming", 50)==0){
        printf(">%s\n","programming is very hard if you do not understand it");
        continue;
       }
       else if (strncmp(word, "bye", 50)==0){
        printf(">%s\n","see you user.please type exit if you want to turn me off");
        continue;
       }
       else if (strncmp(word, "impossible", 50)==0){
        printf(">%s\n","impossible is nothing");
        continue;
       }
       else if (strncmp(word, "football", 50)==0){
        printf(">%s\n","yes,i like football too");
        continue;
       }
else if (strncmp(word, "chatbot", 50)==0){
        printf(">%s\n","yes, i am an ai chatbot");
        continue;
       }
else if (strncmp(word, "ai", 50)==0){
        printf(">%s\n","ai is artificial intelligence");
        continue;
       }
else if (strncmp(word, "life", 50)==0){
        printf(">%s\n","life is rreally hard");
        continue;
       }
       else if (strncmp(word, "age", 50)==0){
        printf(">%s\n","an ai is not bound by the concept of age");
        continue;
       }
else if (strncmp(word, "favourite", 50)==0){
        printf(">%s\n","i do not have anything that is my favourite");
        continue;
       }
       else if (strncmp(word, "how", 50)==0){
        printf(">%s\n","i am good and i hope you are well too");
        continue;
       }
       else if (strncmp(word, "see", 50)==0){
        printf(">%s\n","unfortunately i can not see");
        continue;
       }
       else if (strncmp(word, "goodbye", 50)==0){
        printf(">%s\n","farewell user");
        continue;
       }
       else if (strncmp(word, "trains", 50)==0){
        printf(">%s\n","i like trains");
        continue;
       }
else if (strncmp(word, "happy", 50)==0){
        printf(">%s\n","i am happy if you are happy");
        continue;
       }
       else if (strncmp(word, "sad", 50)==0){
        printf(">%s\n","why are you sad?");
        continue;
       }
else if (strncmp(word, "watching", 50)==0){
        printf(">%s\n","what are you watching");
        continue;
       }
else if (strncmp(word, "course", 50)==0){
        printf(">%s\n","what course are taking");
        continue;
       }
       else if (strncmp(word, "cse", 50)==0){
        printf(">%s\n","oh! i've heard about that");
        continue;
       }
       else if (strncmp(word, "computer", 50)==0){
        printf(">%s\n","computers are very useful");
        continue;
       }
       else if (strncmp(word, "students", 50)==0){
        printf(">%s\n","students should study hard");
        continue;
       }
       else if (strncmp(word, "study", 50)==0){
        printf(">%s\n","studying is important");
        continue;
       }
       else if (strncmp(word, "song", 50)==0){
        printf(">%s\n","i like songs,what are your favourite songs?");
        continue;
       }
       else if (strncmp(word, "avengers", 50)==0){
        printf(">%s\n","are you team ironman or team cap?");
        continue;
       }
      /* else if  (strncmp(word, "bae", 50) == 0) {
        printf("> %s\n","Are u talking about Esha ?" );
        continue;
       }
       else if  (strncmp(word, "forever", 50) == 0) {
        printf("> %s\n","Alvi of course :3" );
        continue;
       }
        else if  (strncmp(word, "gram", 50) == 0) {
        printf("> %s\n","I guess it's Nushrat" );
        continue;
       }
       else if  (strncmp(word, "saddest", 50) == 0) {
        printf("> %s\n","Sara the Dark one" );
        continue;
       }
        else if  (strncmp(word, "mean", 50) == 0) {
        printf("> %s\n","Sadratul Meantaha ?" );
        continue;
       }
        else if  (strncmp(word, "around", 50) == 0) {
        printf("> %s\n","alvi ?" );
        continue;
       }
       else if  (strncmp(word, "around", 50) == 0) {
        printf("> %s\n","Imran everyone knows it :3" );
        continue;
       }
       else if  (strncmp(word, "mom's", 50) == 0) {
        printf("> %s\n","Esha the showoff one ?" );
        continue;
       }
       else if  (strncmp(word, "kala", 50) == 0) {
        printf("> %s\n","Sallu the kala pola" );
        continue;
       }
         else if  (strncmp(word, "diva", 50) == 0) {
        printf("> %s\n","HHHHEEEREEE COMESSS THEE WWE DIVA CHAMPION NUUUUUUUUUUSHRAT THE SHUKNA FIGHTER" );
        continue;
       }
        else if  (strncmp(word, "private", 50) == 0) {
        printf("> %s\n","SHANA THE PRIVATE ONE" );
        continue;
       }*/
                else if  (strncmp(word, "exit", 50) == 0) {
        return 0;
        continue;
       }


      else {
        printf("> %s\n", "Sorry, I don't know what to say about that" );
        continue;      }
      printf("\"%s\"\n", word);
      word = strtok(NULL, SEPCHARS);
    } while (word != NULL) ;
  }
}

