
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

char lib_upp[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char lib_low[] = {"abcdefghijklmnopqrstuvwxyz"};


int main()
{
 int i, j, t;

 while(cin >> t)
 {
  string input, temp;
  int freq[26] = {0};
  int max_freq, cur_freq;

  while(getchar() != '\n');

// Get each line in temp and store in input

  while(t--)
  {
   getline(cin, temp, '\n');
   input += temp;
  }

// Find frequency of all characters

  for(i=0; i<26; i++)
  {
   freq[i] = count(input.begin(), input.end(), lib_upp[i]);
   freq[i] += count(input.begin(), input.end(), lib_low[i]);
  }

// Determine the maximum frequency

  max_freq = *(max_element(freq, freq+26));

// Now iterating from max_freq till 0

  for(cur_freq= max_freq; cur_freq> 0; cur_freq--)
  {

// This loop searches freq array and print corresponding library equivalent

   for(i=0; i<26; i++)
   {
    if(freq[i] == cur_freq)
     cout<< lib_upp[i] << ' ' << freq[i] << endl;
   }
  }
 }
 return 0;
}
