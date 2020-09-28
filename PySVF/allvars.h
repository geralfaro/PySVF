
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <omp.h>
#include <vector>
#include "/usr/local/include/voro++/voro++.hh"

using namespace std;
using namespace voro;

#define MAXCHAR 200

// Some constants

#define PI     3.141592654
#define TWOPI  (2.0*PI)
#define HALFPI (0.5*PI)
#define CVEL   299792.469 

extern double RadIncrement;
extern int    NumRanWalk;
extern double BoxSize;          
extern double MaxRadiusSearch;  
extern double FracRadius;       
extern double DeltaThreshold;   
extern double DeltaSeed;        
extern double OverlapTol;   
extern int    FormatTracers;
extern int    NumFiles;
extern char   FileTracers[MAXCHAR];      
extern char   FileVoids[MAXCHAR];        
extern int    OMPcores;         
extern int    RSDist;           
extern double Redshift;         
extern double OmegaMatter;
extern double OmegaLambda;
extern double Hubble;           
extern int    GDist;           
extern double FidOmegaMatter;        
extern double FidOmegaLambda;        
extern double FidHubble;        
extern int    WriteProfiles;    
extern double MinProfileDist;   
extern double MaxProfileDist;   
extern int    NumProfileBins;   
extern char   PathProfiles[MAXCHAR];     
extern double InnerShellVel;  
extern double OuterShellVel;  
extern double ScalePos;
extern double ScaleVel;

extern vector <double> StepTime;
extern vector <string> StepName;   

extern int    NumTrac;
extern double MeanNumTrac;
extern double MeanSeparation;
extern int    NumVoid;
extern double LBox[3];
extern FILE   *logfile;

// Tracers

struct tracers {
  float Pos[3];
  float Vel[3];
  float Cen[3];
  float Delta;
  float Volume;
}; 
extern struct tracers *Tracer;

// Voids

struct voids {
  float Rad;
  float Rini;
  float Ini[3];
  float Pos[3];
  float Vel[3];
  float Dtype;
  float Delta;
  float Poisson;
  bool  ToF;  
  int   Nran;
};
extern vector <voids> Void;

// Grid-list 

struct grid {
  int NumMem;
  int *Member;
  int *Neighbour;
};

// Sorting

struct sort {
  int    ord;
  float val;  
};

// Neighbours

struct neighbour {
   vector <int> i;	
   vector <int> j;	
   vector <int> k;
};

// Cosmologia para GDist y RSDist

struct params {
   double OmM;
   double OmL;
   double OmK;
   double Hub;
   double Red;
};
extern struct params Cosmo;

