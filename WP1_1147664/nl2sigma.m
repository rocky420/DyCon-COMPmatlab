function z = nl2sigma(f,dt)

% norme L2 en dimension 1 de la fonction f

n = length(f);
f = f.*f;
z = sqrt(dt*sum(f(2:n-1)) + 0.5*dt*(f(1)+f(n)));
