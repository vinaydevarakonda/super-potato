import random

def monte_carlo(iterations):

  incircle = 0
  for i in range(iterations):
    x = random.random()
    y = random.random()
    r = ((x**2)+(y**2))**0.5 
    
    if r<=1:
      inircle = incircle+1
  pi = 4*incircle/iterations
  return pi
