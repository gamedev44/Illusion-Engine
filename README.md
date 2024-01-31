# Illusion Engine - Primal Engine Bare Framework
A Game Engine by Mr.Asterisk Following the Primal Framework to later Incorperate a Froxel Based Overhaul Mode and New UI to resemble that of Dreams , Game builder garage , uchronia project bge , or Hammer editor

At the moment we have the following features:
-  ability to create a project based on 4 game types: Empty, First Person, Third Person, Top Down
-  Give a name of the project with a path (there is a default path)
-  Tells you if the project exists so that it does not allow you to make a project
-  If no projects exist cannot open a project
-  Opening a project where you are brought into an editor mode
-  Editor mode very very rudimentary, can add scenes and game entities (all empty for now)
-  Has an undo/redo system and a basic history and logging system



##-todo

step 1: Change All Reference Ocurrances of the Name Primal To illusion and all instances of PrimalEditor to IllusionEditor making sure when finished to-
,check for references once more before re-building.

step 2: Implement the Needed GUI Based on the references found in the GUI channel in the R&D Catagory on the discord server (devs only).

step 3: Implement the Needed icons by using https://www.calligraphr.com/en/  to make our custom logos and custom font.

step 4: Implement Primitive shapes via CSG 

step 5: Refine editor functionalities and mechanics like translate adding things like scale recolor etc basing the functionality and features-
,of the editor on Unreal Engine Whilst Keeping the UI Thats Been Discussed.

step 6: Implement Model Importation

step 7: Refine Open / Create Project UI to be more proffessional in design and functionality

step 8: Add The necessary Voxel Octree Dependencies & Files Needed and there necessary- 
,Inlcudes in the corrosponding c# and c++ files making sure to be able to be able to access the octree parameters within the scene via the xaml.cs-
,Additonally Make sure that when adding a button that can activate the Octree that you ensure to link the button from the xaml.cs to the engine.cpp via editing the .dll-



 