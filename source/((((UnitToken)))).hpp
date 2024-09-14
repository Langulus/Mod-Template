///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#pragma once
#include "ProducedBy((((UnitToken)))).hpp"


///                                                                           
///   Example ((((UnitToken))))                                               
///                                                                           
/// An example unit, producible from (((ModuleToken))) instance.              
/// It may or may not inherit some ((((AbstractUnitIfAny)))).                 
///                                                                           
struct ((((UnitToken)))) final : ((((AbstractUnitIfAny)))), ProducedFrom<((((ModuleToken))))> {
   LANGULUS(ABSTRACT) false;
   LANGULUS(PRODUCER) ((((ModuleToken))));
   LANGULUS_BASES( ((((AbstractUnitIfAny)))) );
   LANGULUS_VERBS(Verbs::Create);

private:
   // ProducedBy((((UnitToken)))) factory                               
   TFactory<ProducedBy((((UnitToken))))> mSubUnits;

public:
   ((((UnitToken))))(((((ModuleToken))))*, const Neat&);

   bool Update(Time);
   void Create(Verb&);
   void Refresh();
};