
extern double BoxSize;          
extern double MaxRadiusSearch;  
extern double DeltaThreshold;   
extern double DeltaSeed;        
extern double OverlapTol;   
extern int    FormatTracers;
extern int    NumFiles;
extern char   FileTracers[MAXCHAR];      
extern char   FileVoids[MAXCHAR];        
extern double ScalePos;
extern double RadIncrement;
extern int    NumRanWalk;
extern double FracRadius;       
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
extern double ScaleVel;
extern double MeanSeparation;

void ReadInputFile(char *);
FILE*        SafeOpen(char *, const char *); 
void ReadTracers(void);
void ReadTracers_ASCII(void);
void ReadTracers_BINARY(void);
void ReadTracers_GADGET1(void);
void ReadTracers_GADGET2(void);
void WriteVoids(void);

double       Time(clock_t, int);
int          CountLines(char *);

void   RedshiftSpaceDistortions(void);
void   GeometricalDistortions(void);
double AngularDistance(double);
double E(double);

