///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#include "Main.hpp"
#include <Flow/Time.hpp>
#include <thread>

using namespace Langulus;

LANGULUS_RTTI_BOUNDARY(RTTI::MainBoundary)


/// Entry point for you demo                                                  
/// Shouldn't change in general, just modify Demo.cpp                         
int main(int, char**) {
   // Create root entity that immediately loads your module             
   auto root = Thing::Root("((((YourModName))))");

   // Run your demo setup, see Demo.cpp                                 
   Demo(root);

   // Loop until quit                                                   
   Framerate<60> fps;
   while (root.Update(fps.GetDeltaTime()))
      fps.Tick();

   return 0;
}
