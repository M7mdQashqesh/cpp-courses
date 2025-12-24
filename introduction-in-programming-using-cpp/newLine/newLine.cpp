#include <iostream>
using namespace std;

int main()
{
  cout << "Mohammed Qashqesh." << endl;
  cout << "Mohammed Qashqesh.\n";

  // Difference between "\n" and endl:
  // "\n" moves to a new line and is fast because it does NOT flush (clear buffer) the output buffer.
  // endl moves to a new line AND flushes the buffer, which is slower, especially in loops.
  // Rule of thumb:
  // - Use "\n" for large or frequent output (even millions of lines) → fast.
  // - Use endl only when you need immediate output (e.g., debugging, prompts).
  // - Hybrid approach: mostly "\n" and flush occasionally with endl (e.g., every 100 lines) → balanced speed and visibility.

  return 0;
}
