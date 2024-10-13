#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct point { // piste
  int koordinaatit[3];
  struct point *seuraava;
};

struct path {
  double matka;
  struct point *pisteet;
};


void calculate_path_distance(struct path *path);
double distanceToNextPiste(struct point *fromPiste);
int main() {
  struct path testPath;
  struct point piste1 = {{1, 2, 3}, NULL};
  struct point piste2 = {{4, 5, 6}, NULL};
  struct point piste3 = {{1, 2, 3}, NULL};

  piste1.seuraava = &piste2;
  piste2.seuraava = &piste3;

  testPath.pisteet = &piste1;

  calculate_path_distance(&testPath);

  printf("%f", testPath.matka);

  return 0;
}

void calculate_path_distance(struct path *path){
  struct point *currentPoint = path->pisteet;
  double total = 0;

  while (currentPoint->seuraava != NULL) {
    total += distanceToNextPiste(currentPoint);
    currentPoint = currentPoint->seuraava;
  }
  path->matka = total;
}

double distanceToNextPiste(struct point *fromPiste) {
  return sqrt(
      pow(fromPiste->koordinaatit[0] - fromPiste->seuraava->koordinaatit[0],
          2) +
      pow(fromPiste->koordinaatit[1] - fromPiste->seuraava->koordinaatit[1],
          2) +
      pow(fromPiste->koordinaatit[2] - fromPiste->seuraava->koordinaatit[2],
          2));
}