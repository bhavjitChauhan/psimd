#include <mmintrin.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  __v4hi m = {0, 1, 2, 3};
  __v1di count = {2};
  __v4hi result = _mm_sll_pi16(m, count);

  for (uint8_t i = 0; i < 4; ++i)
    printf("%d\n", result[i]);
}
