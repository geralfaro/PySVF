#include "allvars.h"
#include "io.h"

double BoxSize;          
double MaxRadiusSearch;  
double DeltaThreshold;   
double DeltaSeed;        
double OverlapTol;   
int    FormatTracers;
int    NumFiles;
char   FileTracers[MAXCHAR];      
char   FileVoids[MAXCHAR];        
double ScalePos;
int    OMPcores;         
double RadIncrement;
int    NumRanWalk;
double FracRadius;       
int    RSDist;           
double Redshift;         
double OmegaMatter;
double OmegaLambda;
double Hubble;           
int    GDist;           
double FidOmegaMatter;        
double FidOmegaLambda;        
double FidHubble;        
int    WriteProfiles;    
double MinProfileDist;   
double MaxProfileDist;   
int    NumProfileBins;   
char   PathProfiles[MAXCHAR];     
double InnerShellVel;  
double OuterShellVel;  
double ScaleVel;

FILE   *logfile;
double LBox[3];
double MeanNumTrac;
int    NumTrac;
double MeanSeparation;
int    NumVoid;

vector<double> StepTime;
vector<string> StepName;

struct params  Cosmo;
struct tracers *Tracer;
vector<voids> Void;

double E(double);
