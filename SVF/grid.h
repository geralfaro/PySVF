
void         BuildGridList(struct grid *, int, double *, int, bool);
int          Index1D(int,int,int,int);
int          PeriodicGrid(int,int);
void         SearchNeighbours(struct neighbour *, int *, double *, double, double);
void         FreeGridList(struct grid *, int);
void         FreeNeighbours(struct neighbour *);

