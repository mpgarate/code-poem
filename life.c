#include <stdio.h>
#include <unistd.h>

#define ALIVE 1
int knowledge = 0;
#define say(english) {printf("%s\n",english);fflush(stdout);}
#define think_of(idea) {scanf("%s",idea);}
typedef char* idea;

void learn(idea){
  say("Today I am learning");
  knowledge++;
}

void wake_up(){
  say("What shall I learn today?");
  idea project;
  think_of(project);
  learn(project);
}

void prepare_for_bed(){
  say(" ");
}

int main(){
  say("Sleeping...");
  bed: sleep(8);
  wake_up();

  goto lecture;
  lecture: //learn();

  prepare_for_bed();
  if (ALIVE) goto bed;
  return knowledge;
}
