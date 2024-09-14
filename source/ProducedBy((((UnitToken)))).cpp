///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#include "ProducedBy((((UnitToken)))).hpp"
#include "((((ModuleToken)))).hpp"


/// ProducedBy((((UnitToken)))) construction                                  
///   @param producer - the producer                                          
///   @param descriptor - instructions for configuring the unit               
ProducedBy((((UnitToken))))::ProducedBy((((UnitToken))))(((((UnitToken))))* producer, const Neat& descriptor)
   : Resolvable   {this}
   , ProducedFrom {producer, descriptor} {
   VERBOSE("Initializing...");
   Couple(descriptor);
   VERBOSE("Initialized");
}

/// Update routine                                                            
///   @param deltaTime - time between updates                                 
///   @return false                                                           
bool ProducedBy((((UnitToken))))::Update(Time deltaTime) {
   // This is invoked on each Runtime tick                              
   return false;
}

/// React on environmental change                                             
void ProducedBy((((UnitToken))))::Refresh() {
   // This is invoked when the Thing that uses this unit changes - like 
   // if other units or traits were added                               
}