///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#pragma once
#include <Langulus.hpp>
// Include any abstract interfaces provided from Langulus if using any.       
// Such interfaces are usually available for mods that do the same thing,     
// like renderers - there's one abstract A::Renderer in                       
// <Langulus/Graphics.hpp> and multiple modules, like OpenGL, Vulkan and      
// DirectX, that include it and provide implementations. This allows the      
// user to simply create A::Renderer without caring what plug-in is actually  
// currently loaded.                                                          
// #include <Langulus/((((AbstractModuleIfAny)))).hpp>                        
// #include <Langulus/((((AbstractUnitIfAny)))).hpp>                          
#include <Flow/Factory.hpp>

using namespace Langulus;

// Predeclare your types                                                      
struct ((((ModuleToken))));
struct ((((UnitToken))));
struct ProducedBy((((UnitToken))));

// For debugging                                                              
#if 0
   #define VERBOSE_ENABLED() 1
   #define VERBOSE(...)      Logger::Verbose(Self(), __VA_ARGS__)
   #define VERBOSE_TAB(...)  const auto tab = Logger::VerboseTab(Self(), __VA_ARGS__)
#else
   #define VERBOSE_ENABLED() 0
   #define VERBOSE(...)      LANGULUS(NOOP)
   #define VERBOSE_TAB(...)  LANGULUS(NOOP)
#endif