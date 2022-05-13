# Hydroneer 2.0+ Templates
![Hydroneer 2.0 Template Logo](https://cdn.discordapp.com/attachments/963944307830702141/974494572359090206/gitHeader.png)
## Brought to you by: The RFC Mining Company

**It is important that you read this guide so you know which template to download!**

These templates contain all the files you need to get started with modding Hydroneer (v2.0+) in Unreal Engine (v4.26)!

## Step 1: Picking a Template

The [Master](https://github.com/RFC-MiningCompany/HydroneerTemplate/tree/master) branch contains the basic template with the smallest overall file size. ResaloliPT has packed this one with the core functionality and none of the fluff. The missing items are not critical and those you needcan be pulled in or created on an as needed basis for your mod.

The [Full Template](https://github.com/RFC-MiningCompany/HydroneerTemplate/tree/fullTemplate) contains nearly everything. Meshes, textures, materials, plus everything in the Master branch. It has a **very** large overall file size, but allows you to work with items in the viewport as they appear in the game with no additional work on your part. (Thank F4t4l for this one) (Seriously, thank him, like, at least four times. This was a huge task, and Cheebsta made him do it twice.)

## Step 2: Launching your project

Inside either template you will find an Unreal Engine (v4.26) project file. All you need to do is run this file. An empty scene will appear and the content browser will be populated. In the lower right corner you should see a message about "Compiling Shaders". Wait for this to complete and then have a look around. Most item blueprints are found withing the WorldObj folder and its child folders. Textures, Materials, and Meshes are only included in the Full Template. You can create these folders and add files as needed to keep the overall size of your template to a minimum.

**Note**: The first time you "Cook Content for Windows" it *will* take a long time. This is normal. Do not be alarmed.

## Step 3: Start Modding!

Simple replacement mods only need to place files in the appropriate retail locations. For functional items ResaloliPT has created the Hydroneer Mod Loader, or HML for short. This handy tool lives within the HML folder of your project, and lets modders easily load their custom items into the game without worry of writing over each other. To begin using it navigate to the HML/Hooks folder and create a new blueprint using the WorkshopMod class. The class defaults can be set up on the right (See Image Below). 

![Class Settings](https://cdn.discordapp.com/attachments/730880128766443553/974523524792348733/Naamloos.jpg)
*Order* does not need to be changed for most mods. 
*Name* is the display name used for the mod.
*HookName* must match the name of your hook file.
*ModType* does not need to be changed.

## Step 4: Packing for Workshop
We recommend using another tool by ResaloliPT called the [Hydroneer Modding Toolchain](https://github.com/ResaloliPT/HydroModTool). In the Create Mods section you can setup your project, add the required files, stage, and then package your mod. Inside the Output Dir you will find a dist folder containing the pak file for your mod. Move this into a folder by itself. Point to this directory when uploading your mod in Hydroneer.

![ModTool](https://cdn.discordapp.com/attachments/963944307830702141/974528726706577439/unknown.png)

## If you have problems/fixes:

Direct questions to the #modding channel of the Hydroneer Discord. Someone is usually around to help.

If you've already done some fixes you can add them to a push request for the development branch. Once verified they will be added to the other branches as needed.


### RFC Mining Company Members:
ResaloliPT [2.0 Releases Link Coming Soon]()

F4t4l [2.0 Releases Link Coming Soon]()

Cheebsta [2.0 Releases Link Coming Soon]()
