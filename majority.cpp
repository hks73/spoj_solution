# include <stdio.h>
# define bool int
int findCandidate(int *, int);
bool isMajority(int *, int, int);
void printMajority(int a[], int size)
{
  int cand = findCandidate(a, size);
  if(isMajority(a, size, cand))
    printf(" %d ", cand);
  else
    printf("NO Majority Element");
}
int findCandidate(int a[], int size)
{
    int maj_index = 0, count = 1;
    int i;
    for(i = 1; i < size; i++)
    {
        if(a[maj_index] == a[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
bool isMajority(int a[], int size, int cand)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
      if(a[i] == cand)
         count++;
    if (count > size/2)
       return 1;
    else
       return 0;
}
int main()
{
    int a[] = {1, 3, 3, 3, 2};
    printMajority(a, 5);
    getchar();
    return 0;
}