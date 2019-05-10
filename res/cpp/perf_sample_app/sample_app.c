#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define NUM_THREADS 10

pthread_t tid[NUM_THREADS];

static long long __attribute__ ((noinline)) current_timestamp() {
  struct timeval te;

  gettimeofday(&te, NULL); // get current time
  long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // calculate milliseconds
  return milliseconds;
}

static int __attribute__ ((noinline)) calculate_meaning_of_life() {
  volatile int c = 0;
  for (int n = 1; n < 6000; n++)
    for (int m = 1; m < 9000; m++)
      // Really important calculation that is what the program is all about
      c += c+1 % m;

  return c;
}



static void __attribute__ ((noinline)) do_something_really_busy(int random_variable)
{

  long long start = current_timestamp();

  long long end = current_timestamp();

  while((end - start) < (random_variable % 2000))
  {
    // Busy wait - You found me!
    end = current_timestamp();
  }

  return;
}

static int __attribute__ ((noinline)) going_to_hyperdrive()
{
  volatile int c = 0;

  c = calculate_meaning_of_life();

  return c;
}
static int __attribute__ ((noinline)) aligning_the_stars()
{
  volatile int c = 0;

  c = going_to_hyperdrive(c);

  return c;
}
static int __attribute__ ((noinline)) gathering_the_bits()
{
  volatile int c = 0;

  c = aligning_the_stars(c);

  return c;
}

static int __attribute__ ((noinline)) illustrate_call_chains()
{
  volatile int c = 0;

  c = gathering_the_bits(c);

  return c;
}


void* __attribute__ ((noinline)) do_something(void *arg)
{
  pthread_t id = pthread_self();

  int random_variable = rand();

  if((random_variable % 3) == 0)
    illustrate_call_chains();
  else
    do_something_really_busy(random_variable);


  pthread_exit(&id);

  return NULL;
}





int main (int argc, char **argv)
{
  int i, y = 0;
  int err;

  srand(time(0));
  printf ("Server: Starting!\n");

  long iterations = 10;

  for(y = 0; y < iterations; y++)
  {
    i = 0;
    while(i < NUM_THREADS)
    {
      err = pthread_create(&(tid[i]), NULL, &do_something, NULL);
      if (err != 0)
        printf("\ncan't create thread :[%s]", strerror(err));

      //usleep(50000);
      i++;
    }

    i = 0;
    while(i < NUM_THREADS) {
      pthread_join((tid[i]), NULL);
      i++;
    }
  }
}
