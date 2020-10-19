
void ComputeVelocity(void);
void         BuildGridList(struct grid *, int, double *, int, bool);
extern double OuterShellVel;  
extern double MaxRadiusSearch;  
void         SearchNeighbours(struct neighbour *, int *, double *, double, double);
double       Time(clock_t, int);
int          PeriodicGrid(int,int);
int          Index1D(int,int,int,int);
double       PeriodicDeltaPos(double,double);
extern double InnerShellVel;  
void         FreeGridList(struct grid *, int);
void         FreeNeighbours(struct neighbour *);
