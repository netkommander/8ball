/*******************
This could of been done much better.
5.14.20
*******************/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>


int main()
{
  int response;
  std::cout << "MAGIC 8-BALL RESPONDS: " << "\n////////////////\n";
  srand(time(NULL)); //random

  response = rand() % 18 + 1;
  // the actual randomizer

  switch(response)
  {
    case 1:
      std::cout << "It is certain.\n";
      break;
    case 2:
      std:: cout << "It is decidedly so.\n";
      break;
    case 3:
      std::cout << "Without a doubt.\n";
      break;
    case 4:
      std::cout << "Yes - definitely.\n";
      break;
    case 5:
      std::cout << "You may rely on it.\n";
      break;
    case 6:
      std::cout << "As I see it, yes.\n";
      break;
    case 7:
      std::cout << "Most likely.";
      break;
    case 8:
      std::cout << "Outlook good.\n";
      break;
    case 9:
      std::cout << "Yes.\n";
      break;
    case 10:
      std::cout << "Signs point to yes.\n";
      break;
    case 11:
      std::cout << "Reply hazy, try again.\n";
      break;
    case 12:
      std::cout << "Ask again later.\n";
      break;
    case 13:
      std::cout << "Better not tell you now.\n";
      break;
    case 14:
      std::cout << "Cannot predict now.\n";
      break;
    case 15:
      std::cout << "Concentrate and ask again.\n";
      break;
    case 16:
      std::cout << "Don't count on it.\n";
      break;
    case 17:
      std::cout << "My reply is no.\n";
      break;
    case 18:
    std::cout << "My sources say no.\n";
      break;
    case 19:
      std::cout << "Very doubtful.\n";
      break;
  }
}
