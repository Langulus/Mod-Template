///                                                                           
/// Langulus::Module::((((YourModName))))                                     
/// Copyright (c) ((((Year)))) ((((YourName)))) ((((YourEmail))))             
/// Plug-in for the Langulus framework, see https://langulus.com              
///                                                                           
/// SPDX-License-Identifier: ((((YourLicense))))                              
///                                                                           
#include "Main.hpp"
// Include any abstract interfaces provided from Langulus if using any.       
// Such interfaces are usually available for mods that do the same thing,     
// like renderers - there's one abstract A::Renderer in                       
// <Langulus/Graphics.hpp> and multiple modules, like OpenGL, Vulkan and      
// DirectX, that include it and provide implementations. This allows the      
// user to simply create A::Renderer without caring what plug-in is actually  
// currently loaded.                                                          
// #include <Langulus/((((AbstractUnitIfAny)))).hpp>                          
#include <catch2/catch.hpp>


/// See https://github.com/catchorg/Catch2/blob/devel/docs/tostring.md        
CATCH_TRANSLATE_EXCEPTION(::Langulus::Exception const& ex) {
   const Text serialized {ex};
   return ::std::string {Token {serialized}};
}

SCENARIO("Main testing scenario for ((((YourModName))))", "[((((YourModName))))]") {
   static Allocator::State memoryState;
   
   for (int repeat = 0; repeat != 10; ++repeat) {
      GIVEN(std::string("Init and shutdown cycle #") + std::to_string(repeat)) {
         // Create root entity                                          
         auto root = Thing::Root<false>("((((YourModName))))");

         WHEN("Components created via abstractions (not mandatory)") {
            auto unit = root.CreateUnit< ((((AbstractUnitIfAny)))) >();

            // Update once                                              
            root.Update({});
            root.DumpHierarchy();

            REQUIRE(unit.GetCount() == 1);
            REQUIRE(unit.CastsTo< ((((AbstractUnitIfAny)))) >(1));
            REQUIRE(unit.IsSparse());

            REQUIRE(root.GetUnits().GetCount() == 1);
         }

         WHEN("Components created via tokens (mandatory)") {
            auto unit = root.CreateUnitToken( ((((UnitToken)))) );

            // Update once                                              
            root.Update({});
            root.DumpHierarchy();

            REQUIRE(unit.GetCount() == 1);
            REQUIRE(unit.CastsTo<A::Unit>(1));
            REQUIRE(unit.IsSparse());

            REQUIRE(root.GetUnits().GetCount() == 1);
         }

         // Check for memory leaks after each cycle                     
         REQUIRE(memoryState.Assert());
      }
   }
}

// You can add other scenarios here, or in separate CPP files, by       
// copying and modifying this one                                       