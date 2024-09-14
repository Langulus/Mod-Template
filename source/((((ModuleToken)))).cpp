///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#include "((((ModuleToken)))).hpp"


/// This macro exposes your types to flows and sets some global module        
/// properties. It needs to be called once in a single CPP file.              
LANGULUS_DEFINE_MODULE(
   ((((ModuleToken)))), ((((Precedence)))), "((((YourModName))))",
   "((((Description))))", "",
   ((((ModuleToken)))), ((((UnitToken)))), ProducedBy((((UnitToken))))
)


/// Module construction                                                       
///   @param runtime - the runtime that owns the module                       
///   @param descriptor - instructions for configuring the module             
((((ModuleToken))))::((((ModuleToken))))(Runtime* runtime, const Neat& descriptor)
   : Resolvable {this}
   , A::Module  {runtime} {
   VERBOSE("Initializing...");
   // You can check `descriptor` for some load-time configurations      
   VERBOSE("Initialized");
}

/// Module update routine                                                     
///   @param deltaTime - time between updates                                 
///   @return false                                                           
bool ((((ModuleToken))))::Update(Time deltaTime) {
   // This is invoked on each Runtime tick                              
   for (auto& unit : mUnits)
      unit.Update(deltaTime);
   return false;
}

/// Create/destroy units in this module instance                              
///   @param verb - the creation/destruction verb                             
void ((((ModuleToken))))::Create(Verb& verb) {
   mUnits.Create(this, verb);
}