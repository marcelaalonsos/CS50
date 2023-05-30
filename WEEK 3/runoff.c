#include <stdio.h>
#include <string.h>
#include "cs50.h"

//max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

//preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

//candidates have name, vote count and eliminated status
typedef struct
{
  string name;
  int votes;
  bool eliminated;
}
candidate;

//array of candidates
candidate candidates[MAX_CANDIDATES];

//numbers of voters and candidates
int voter_count;
int candidate_count;

//function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
  //check for invalid usage
  if (argc < 2)
  {
    printf("Usage: runoff [candidate ...]\n");
    return 1;
  }

  //populate array of candidates
  candidate_count = argc - 1;
  if (candidate_count > MAX_CANDIDATES)
  {
    printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
    return 2;
  }
  for (int i = 0; i < candidate_count; i++)
  {
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
    candidates[i].eliminated = false;
  }
  voter_count = get_int("Number of voters: ");
  if (voter_count > MAX_VOTERS)
  {
    printf("Maximum number of voters is %i\n", MAX_VOTERS);
    return 3;
  }
  //keep querying for votes
  for (int i = 0; i < voter_count; i++)
  {
    //query for each rank
    for (int j = 0; j < candidate_count; j++)
    {
      string name = get_string("Rank %i: ", j + 1);
      //record vote, unless it's invalid
      if (!vote(i, j, name))
      {
        printf("Invalid vote.\n");
        return 4;
      }
    }
    printf("\n");
  }

  //keep holding runoffs until winner exists
  while (true)
  {
    //calculate votes given remaining candidates
    tabulate();

    //check if election has been won
    bool won = print_winner();
    if (won)
    {
      break;
    }
    //eliminate last-place candidates
    int min = find_min();
    bool tie = is_tie(min);

    //if tie, everyone wins
    if (tie)
    {
      for (int i = 0; i < candidate_count; i++)
      {
        if (!candidates[i].eliminated)
        {
          printf("%s\n", candidates[i].name);
        }
      }
      break;
    }
    //eliminate anyone with minimum number of votes
    eliminate(min);
    //reset vote counts back to zero
    for (int i = 0; i < candidate_count; i++)
    {
      candidates[i].votes = 0;
    }
  }
  return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    //loop through the candidates array
    for (int i = 0; i < candidate_count; i++)
    {
        //check if name exists in the array
        if (strcmp(candidates[i].name, name) == 0)
        {
            //if so, update preferences array
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    //loop through the voter count array
    for (int i = 0; i < voter_count; i++)
    {
        //loop through candidate array
        for (int j = 0; j < candidate_count; j++)
        {
            //if the candidate has not been eliminated
            if (!candidates[preferences[i][j]].eliminated)
            {
                //update their vote count
                candidates[preferences[i][j]].votes++;
                break;
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    //winner needs half of the total votes
    int votes = (voter_count / 2) + 1;
    //loop through the candidates array
    for (int i = 0; i < candidate_count; i++)
    {
        //if it has enough votes
        if (candidates[i].votes >= votes)
        {
            //print the name
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    //min of votes variable equal to the
    int min_votes = INT_MAX;
    //loop through candidates array
    for (int i = 0; i < candidate_count; i++)
    {
        //if candidate is not eliminated and has min number of votes
        if (!candidates[i].eliminated && candidates[i].votes < min_votes)
        {
            //update min votes with candidate votes values
            min_votes = candidates[i].votes;
        }
    }
    return min_votes;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    //candidates remaining
    int candidates_left = 0;
    //candidates with min votes
    int min_candidates = 0;
    //loop through candidate array
    for (int i = 0; i < candidate_count; i++)
    {
        //check if candidate is not eliminated
        if (!candidates[i].eliminated)
        {
            //increase candidates by 1
            candidates_left++;
            //check if candidates votes have min votes
            if (candidates[i].votes == min)
            {
                //increase min candidates by 1
                min_candidates++;
            }
        }
    }
    //check if there is a tie
    if (candidates_left == min_candidates)
    {
        return true;
    }
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        //if candidate is not eliminated and if it has min amount of votes
        if (!candidates[i].eliminated && candidates[i].votes == min)
        {
            candidates[i].eliminated = true;
        }
    }
    return;
}
