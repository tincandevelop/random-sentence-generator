#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <random>
#include <chrono>

using namespace std;

int randBetween(int min, int max){
  return (rand() % (min - max) + min);
}

int main(){
  srand(chrono::duration_cast<chrono::microseconds>(chrono::steady_clock::now().time_since_epoch()).count());
  vector<string> pronoun;
  vector<string> adverb;
  vector<string> verb;
  vector<string> preposition;
  vector<string> adjective;
  vector<string> noun;

  string line;

  ifstream _pronoun("pronoun.txt");
  while(getline(_pronoun,line)){
    pronoun.push_back(line);
  }
  _pronoun.close();

  ifstream _adverb("adverb.txt");
  while(getline(_adverb,line)){
    adverb.push_back(line);
  }
  _adverb.close();

  ifstream _verb("verb.txt");
  while(getline(_verb,line)){
    verb.push_back(line);
  }
  _verb.close();

  ifstream _preposition("preposition.txt");
  while(getline(_preposition,line)){
    preposition.push_back(line);
  }
  _preposition.close();

  ifstream _adjective("adjective.txt");
  while(getline(_adjective,line)){
    adjective.push_back(line);
  }
  _adjective.close();

  ifstream _noun("noun.txt");
  while(getline(_noun,line)){
    noun.push_back(line);
  }
  _noun.close();

  cout << pronoun[randBetween(0,pronoun.size()-1)] << " " << adverb[randBetween(0,adverb.size()-1)] << " " << verb[randBetween(0,verb.size()-1)] << " " << preposition[randBetween(0,preposition.size()-1)] << " the " << adjective[randBetween(0,adjective.size()-1)] << " " << noun[randBetween(0,noun.size()-1)] << ".\n" ;

  return 0;
}
