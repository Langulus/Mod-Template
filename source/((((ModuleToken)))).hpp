///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#pragma once
#include "((((UnitToken)))).hpp"
#include <Flow/Verbs/Create.hpp>


///                                                                           
///   Example ((((ModuleToken)))) interface                                   
///                                                                           
/// This is the module's entry point. It can create instances of              
/// ((((UnitToken)))) through the Create(Verb&) interface.                    
///                                                                           
struct ((((ModuleToken)))) final : ((((AbstractModuleIfAny)))) {
   LANGULUS(ABSTRACT) false;
   LANGULUS_BASES( ((((AbstractModuleIfAny)))) );
   LANGULUS_VERBS(Verbs::Create);

private:
   // ((((UnitToken)))) factory                                         
   TFactory<((((UnitToken))))> mUnits;

public:
   ((((ModuleToken))))(Runtime*, const Neat&);

   bool Update(Time);
   void Create(Verb&);
};