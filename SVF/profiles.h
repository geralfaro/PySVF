
void ComputeProfiles(void);
void         BuildGridList(struct grid *, int, double *, int, bool);
void         SearchNeighbours(struct neighbour *, int *, double *, double, double);
extern FILE   *logfile;
extern double MaxProfileDist;   
extern double MinProfileDist;   
int          Index1D(int,int,int,int);
double       PeriodicDeltaPos(double,double);
extern int    NumProfileBins;   
extern int    WriteProfiles;    
extern char   PathProfiles[MAXCHAR];  
void         FreeNeighbours(struct neighbour *);
FILE*        SafeOpen(char *, const char *); 
int          PeriodicGrid(int,int);
double       Time(clock_t, int);
