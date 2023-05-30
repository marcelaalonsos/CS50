/*
Complete the vote function.
  - vote takes a single argument, a string called name, representing the name of the candidate who was voted for.
  - If name matches one of the names of the candidates in the election, then update that candidate’s vote total to account for the new vote. The vote function in this case should return true  to indicate a successful ballot.
  - If name does not match the name of any of the candidates in the election, no vote totals should change, and the vote function should return false to indicate an invalid ballot.
  - You may assume that no two candidates will have the same name.
Complete the print_winner function.
  - The function should print out the name of the candidate who received the most votes in the election, and then print a newline.
  - It is possible that the election could end in a tie if multiple candidates each have the maximum number of votes. In that case, you should output the names of each of the winning candidates, each on a separate line.
*/

#include <stdio.h>
#include <string.h>
#include "cs50.h"

//MAX number of candidates
#define MAX 9

//Candidates have name and vote count
typedef struct
{
  string name;
  int votes;
}
candidate;

//array of candidates
candidate candidates[MAX];

//number of candicates
int candidate_count;

//function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
  //check for invalid usage
  if (argc < 2)
  {
    printf("Usage: plurality [candidate...]\n");
    return 1;
  }

  //populate array of candidates
  candidate_count = argc - 1;
  if (candidate_count > MAX)
  {
    printf("Maximum number of candidates is %i\n", MAX);
    return 2;
  }
  for (int i = 0; i < candidate_count; i++)
  {
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
  }

  int voter_count = get_int("Number of voters: ");

  //loop through all voters
  for (int i = 0; i < voter_count; i++)
  {
    string name = get_string("Vote: ");

    //check for invalid vote
    if(!vote(name))
    {
      printf("Invalid vote.\n");
    }
  }
  //display winner of election
  print_winner();
}

//update vote totals given a new vote
bool vote(string name)
{
  for (int i = 0; i < candidate_count; i++)
  {
    if (strcasecmp(candidates[i].name, name) == 0)
    {
      candidates[i].votes++;
      return true;
    }
  }
  return false;
}

//print the winner of winners of the election
void print_winner(void)
{
  int max_votes = 0;
  for (int i = 0; i < candidate_count; i++)
  {
    if (candidates[i].votes > max_votes)
    {
      max_votes = candidates[i].votes;
    }
  }
  for (int i = 0; i < candidate_count; i++)
  {
    if (candidates[i].votes == max_votes)
    {
      printf("%s\n", candidates[i].name);
    }
  }
  return;
}
