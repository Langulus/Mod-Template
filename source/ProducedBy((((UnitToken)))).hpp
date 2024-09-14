///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#pragma once
#include "Common.hpp"


///                                                                           
///   Example ProducedBy((((UnitToken))))                                     
///                                                                           
/// This unit serves only as an example for a unit that is produced by        
/// another unit, as opposed to being produced by the module instance.        
///                                                                           
struct ProducedBy((((UnitToken)))) final : ((((AbstractUnitIfAny)))), ProducedFrom<((((UnitToken))))> {
   LANGULUS(ABSTRACT) false;
   LANGULUS(PRODUCER) ((((UnitToken))));
   LANGULUS_BASES( ((((AbstractUnitIfAny)))) );

   ProducedBy((((UnitToken))))(((((UnitToken))))*, const Neat&);

   bool Update(Time);
   void Refresh();
};