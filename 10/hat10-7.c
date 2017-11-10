#include <stdio.h>

int main()
{
  double val1, val2, val3;
  int mode;
  char op;
  
  while(1){
    printf("Input calculation mode(1:add, 2:subtract, 3:multiply, 4:divide, 5:quit):");
    scanf(" %d", &mode);
    if(mode == 5) break;  //5‚Ì“ü—Í‚ÅI—¹
    else if(mode>5){      //5‚æ‚è‘å‚«‚¢’l‚ª“ü—Í‚³‚ê‚½ê‡‚â‚è’¼‚·
      continue;
    }
    printf("Input number:");
    scanf(" %lf", &val1);
    printf("Input number:");
    scanf(" %lf", &val2);
    if(mode == 1){
      op = '+';
      val3 = val1 + val2;
    } else if(mode == 2){
      op = '-';
      val3 = val1 - val2;
    } else if(mode == 3){
      op = '*';
      val3 = val1 * val2;
    } else if(mode ==4){
      op = '/';
      val3 = val1 / val2;
    }
    printf("%.2f%c%.2f=%.2f\n",  val1, op, val2, val3);
  }
 
  return 0;
}
