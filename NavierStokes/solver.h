#ifndef SOLVER_H
#define SOLVER_H

#define IX(i,j)((i)+(N+2)*(j))
#define SWAP(x0,x) {float* tmp=x0;x0=x;x=tmp;}

void dens_step(int N, float* x, float* x0, float* u, float* v, float diff, float dt);
void vel_step(int N, float* u, float* v, float* u0, float* v0, float visc, float dt);

#endif