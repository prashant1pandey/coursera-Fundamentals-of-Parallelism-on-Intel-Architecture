#include <mkl.h>
#include "distribution.h"

int i,j;

int diffusion(const int n_particles, 
              const int n_steps, 
              const float x_threshold,
              const float alpha, 
              VSLStreamStatePtr rnStream) {
  int n_escaped=0;
  int pos[n_particles];
  for (int i = 0; i < n_steps; i++) {
	  float rn[n_particles];
    
      vsRngUniform(VSL_RNG_METHOD_UNIFORM_STD, rnStream, 1, rn, -1.0, 1.0);
      
    for (int j = 0; j < n_particles; j++) {
      pos[j] += dist_func(alpha, rn[j]);
    }
    if (pos[j] > x_threshold) n_escaped++;
  }
  return n_escaped;
}
