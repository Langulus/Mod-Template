This directory should contain the code for your plug-in.
<p>Generally, you would have a couple of files for the A::Module interface, which allows the plug-in to be instantiated from Langulus. In this case, those will be `((((ModuleToken)))).cpp` and `((((ModuleToken)))).hpp`.
<p>Then there are the units, that are produced from the module interface (or other units), and implement your desired logic. The units act as components (it's just easier to write a `unit` of behavior), and can be added to Thing(s) in order to provide them with new behaviors.

The hierarchy of types is like the following:
 - **((((ModuleToken))))** - Instantiated from the Runtime the moment a plug-in is loaded in Langulus
	- **((((UnitToken))))** - Can be produced from an instance of ((((ModuleToken))))
	   - **ProducedFrom((((UnitToken))))** - Can be produced from an instance of ((((UnitToken))))