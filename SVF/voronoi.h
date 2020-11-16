
void ComputeVoronoi(void);
void         BuildGridList(struct grid *, int, double *, int, bool);
extern double LBox[3];
vector <int> Index3D(int,int);
void         FreeGridList(struct grid *, int);
double       PeriodicPos(double,double);
double       Time(clock_t, int);
