#include <stdio.h>
#include <string.h>

union match {
    int runs, wickets;
};

int main () {
    union match q;
    q.runs=241;
    printf("Information by '.' operator:\nFirst team:\n");
    printf("Runs scored: %d\n",q.runs);
    q.wickets=3;
    printf("Wickets lost: %d\n",q.wickets);
    union match *w;
    w=(union Movie_info*)malloc(sizeof(union match)); 
    printf("\nInformation by '->' operator:\nSecond team:\n");
    w->runs=262;
    printf("Runs scored: %d\n",w->runs);
    w->wickets=2;
    printf("Wickets lost: %d",w->wickets);
    return 0;
}
