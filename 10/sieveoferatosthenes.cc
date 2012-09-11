#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  bitset<2000000> Sieve;
  unsigned long long sum = 0;
        
  Sieve.flip();    // Set all bits to 1
  Sieve[0].flip();  // Set 0 and 1 to not prime
  Sieve[1].flip();

  // Check all nos from 2 to 1 million
  for(long i = 2; i < 2000000; ++i)
  {
    if( ! Sieve.test(i) )  // If marked not prime
      continue;    // return to head of loop
    else
      // Set all multiples as not prime
      for(long j = 2*i; j < 2000000; j += i)
        Sieve[j] = 0; 
  }

  for(long i = 2; i < 2000000; ++i)
    if( Sieve.test(i))   // Add all nos with bit set
      sum += i;

  cout << "\nThe sum is : "  << sum << endl;

  return 0;
}
