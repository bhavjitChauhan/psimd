#include <mmintrin.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  __v2si m = {INT32_MAX, INT32_MIN};
  __v1di count = {1};
  __v2si result = _mm_srl_pi32(m, count);

  for (uint8_t i = 0; i < 2; ++i)
    printf("%d\n", result[i]);
}
