# Hydroneer 2.0+ Template
## Brought to you by: The RFC Mining Company

These templates contain all the files you need to get started with modding Hydroneer (v2.0+) in Unreal Engine (v4.26)!

## Step 1: Picking a Template

The Master branch contains the basic template with the smallest overall file size. You get most of the core functionality and none of the fluff. Missing items are not critical and can be pulled in or created on an as needed basis for your mod.

The Full Template contains nearly everything. Meshes, textures, materials, plus everything in the Master branch. It has a **very** large overall file size, but allows you to work with items in the viewport as they appear in the game with no additional work on your part. (Thank F4t4l for this one) (Seriously, thank him, like, at least four times. This was a huge task, and Cheebsta made him do it twice.)

## Step 2: Launching your project

Inside either template you will find an Unreal Engine (v4.26) project file. All you need to do is run this file. An empty scene will appear and the content browser will be populated. Go ahead and have a look around. Most item blueprints are found withing the WorldObj folder and its child folders. Textures, Materials, and Meshes are only included in the Full Template.

**Note**: The first time you "Cook Content for Windows" it *will* take a long time. This is normal. Do not be alarmed.

## Step 3: Start Modding!

Simple replacement mods only need to place files in the appropriate retail locations. For functional items ResaloliPT has created the Hydroneer Mod Loader, or HML for short. This handy tool lives within the HML folder of your project, and lets modders easily load their custom items into the game without worry of writing over each other. To begin using it navigate to the HML/Hooks folder and create a new Actor blueprint. Add the BPI_Mod interface in Class Settings, and include this hook file in your pak. Then just add HML as a required item of your mod in the Steam Workshop.

## If you have problems/fixes:

Direct questions to the #modding channel of the Hydroneer Discord. Someone is usually around to help.

If you've already done some fixes you can add them to a push request for the development branch. Once verified they will be added to the other branches as needed.


### RFC Mining Company Members:
ResaloliPT [2.0 Releases Link Coming Soon]()

F4t4l [2.0 Releases Link Coming Soon]()

Cheebsta [2.0 Releases Link Coming Soon]()
