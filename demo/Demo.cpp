///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#include "Main.hpp"


///                                                                           
///   Demo implementation                                                     
///                                                                           
void Demo(Thing& root) {
   // Load additional modules (must be added as dependencies in CMake)  
   /*root.LoadMod("GLFW");
   root.LoadMod("Vulkan");
   root.LoadMod("Physics");
   root.LoadMod("FileSystem");
   root.LoadMod("AssetsGeometry");

   // Create some units                                                 
   root.CreateUnits<
      A::Window,
      A::Renderer,
      A::Layer,
      A::World,
      A::InputGatherer
   >();

   // Create a player entity with controllable camera                   
   auto player = root.CreateChild("Player");
   player->CreateUnits<A::Camera, A::InputListener>();
   player->CreateUnit<A::Instance>(Traits::Place {0, 20, 20});
   player->Run("? create Anticipator(MouseMove, {thing? Move*-1 (Yaw(?.x * 0.05), Pitch(?.y * 0.05))})");

   // Create a castle                                                   
   auto castle = root.CreateChild("Castle");
   castle->CreateUnits<A::Renderable>();
   castle->CreateUnit<A::Instance>(Traits::Size {450}, Traits::Place {0, -5, 0});
   castle->CreateUnit<A::Mesh>("castle.obj");*/
}