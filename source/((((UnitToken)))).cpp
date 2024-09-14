///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#include "((((UnitToken)))).hpp"
#include "((((ModuleToken)))).hpp"


/// ((((UnitToken)))) construction                                            
///   @param producer - the module instance that produced the unit            
///   @param descriptor - instructions for configuring the unit               
((((UnitToken))))::((((UnitToken))))(((((ModuleToken))))* producer, const Neat& descriptor)
   : Resolvable   {this}
   , ProducedFrom {producer, descriptor} {
   VERBOSE("Initializing...");
   // This adds the unit as a Thing component, if there are parent      
   // things inside the descriptor                                      
   Couple(descriptor);
   VERBOSE("Initialized");
}

/// Create stuff in the unit's context                                        
///   @param verb - creation verb to satisfy                                  
void ((((UnitToken))))::Create(Verb& verb) {
   mSubUnits.Create(this, verb);
}

/// Update routine                                                            
///   @param deltaTime - time between updates                                 
///   @return false                                                           
bool ((((UnitToken))))::Update(Time deltaTime) {
   // This is invoked on each Runtime tick                              
   for (auto& subunits : mSubUnits)
      subunits.Update(deltaTime);
   return false;
}

/// React on environmental change                                             
void ((((UnitToken))))::Refresh() {
   // This is invoked when the Thing that uses this unit changes - like 
   // if other units or traits were added                               
}
