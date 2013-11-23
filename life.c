#include <stdio.h>
#include <unistd.h>

typedef void I;
#define ALIVE 1
int knowledge = 0;
#define say(english,data) {printf(english + "\n",data);fflush(stdout);}
#define ask(english) {printf(english + "\n");fflush(stdout);}
#define think_of(idea) {scanf("%s",idea);}
typedef char* idea;

I learn(idea project){
  say("Today I am learning %s",project);
  knowledge++;
}

I wake_up(){
  ask("What shall I learn today?");
  idea project;
  think_of(project);
  learn(project);
}

I prepare_for_bed(){
  //say(" ");
}

int main(){
  say("Sleeping for %d a night...",8);
  bed: //sleep(8);
  wake_up();

  goto lecture;
  lecture: //learn();

  prepare_for_bed();
  if (ALIVE) goto bed;
  return knowledge;
}
