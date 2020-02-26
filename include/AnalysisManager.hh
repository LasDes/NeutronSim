#ifndef ANALYSISMANAGER_HH
#define ANALYSISMANAGER_HH 

#include "globals.hh"
#include "g4root.hh"
//#include "g4csv.hh"
//#include "g4xml.hh"

// Define the total number of columns in the ntuple
const G4int MaxNtCol = 4;

class AnalysisManager
{ 

public:
   AnalysisManager();
  ~AnalysisManager();
  
  void Initialise(); // Creating the ROOT file

  void StoreTotalEdep(G4double edep);

  void StoreElectronEdep(G4double edep);
  
  void StorePositronEdep(G4double edep); 

  void StorePhotonEdep(G4double edep);   

  void StorePionEdep(G4double edep);     
  
  void Finish();
  // Close the ROOT file with all the results stored in nutples 

private:
  G4bool    factoryOn; 
  G4int     fNtColId[MaxNtCol];

};

#endif















































