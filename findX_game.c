#include <stdio.h>
int main(){
int num=4,x,result=14,i=0,score=0;
char y,n,b;
printf("Welcome to my game\nif you want to start type y if not print n\n");
scanf("%c",&b);
if ('y'==b) {
  // round 1   4+10=14
printf("if 4+X=14 what is x!\n");
scanf("%d",&x);
num+=x;
if(num==result){
  printf("correct X is %d",x);
  score++;
}else{
  printf("Wrong X is not %d",x);
  i++;
}
// round 2   4+21=25
x=0;
num=4;
result=25;
printf("\nif 4+X=25 what is x!\n");
scanf("%d",&x);
num+=x;
if(num==result){
  printf("correct X is %d",x);
  score++;
}else{
  printf("Wrong X is not %d",x);
  i++;
}
// round 3   8+77=85
x=0;
num=8;
result=85;
printf("\nif 8+X=85 what is x!\n");
scanf("%d",&x);
num+=x;
if(num==result){
  printf("correct X is %d",x);
  score++;
}else{
  printf("Wrong X is not %d",x);
  i++;
}
// round 2   52-21=31
x=0;
num=52;
result=31;
printf("\nif 52-X=31 what is x!\n");
scanf("%d",&x);
num-=x;
if(num==result){
  printf("correct X is %d",x);
  score++;
}else{
  printf("Wrong X is not %d",x);
  i++;
}

 // you win end of the game
printf("\nyour score is \n%d correct \n%d Wrong",score,i);
if(score>i){
  printf("\nmost of the answers are correct so you pass");
}else if(score<i){
  printf("\nmost of the answers are wrong so you faild");
}else if(score==i){
  printf("\nyou score 50%");
}

} else if('n'==b) {
printf("then leave");
}else {
  printf("invalid character");
}
  return 0;
}
