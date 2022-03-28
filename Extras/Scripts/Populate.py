import os, shutil, time

'''
Populate.py - by Cheebsta

*** Probably only works on Windows, Run with IDLE ***

Requires:
  Empty Unreal 4.26 Project
  Python 2.7
  Unpacked Retail Assets
  Dummies folder (Described below)

Dummies folder should be in the same directory as this script.
To create or add dummy files:
  Create a new object of the appropriate type in Unreal
  Name this object using the prefix of the objects it should mimic
  Put this uasset file into the Dummies folder
  
When a prefix is not found:
  The object type is set to Blueprint
  The name is prefixed with FIXME_

'''

# *** SET THESE TO MATCH YOUR ENVIRONMENT ***
TemplateDir = os.path.join("E:\\", "HydroneerModStuff", "2.0Template", "Mining", "Content")
RetailDir   = os.path.join("E:\\", "HydroneerModStuff", "Retail2", "Mining", "Content")
SkipDirs    = ["E:\HydroneerModStuff\Retail2\Mining\Content\Textures"]
# ***

class PathMaker:
  def __init__(self):
    self.Dummies = {}
    self.loadDummyObjects()

  def loadDummyObjects(self):
    # Grab and "save" dummy file paths
    for d in os.listdir("Dummies"):
      k = d.split("_")[0]
      if not self.Dummies.has_key(k):
        self.Dummies[k] = os.path.join("Dummies", d)

  def getDummyPath(self, tDir, rDir, rFile):
    # Hardcoded hack for sound concurrency files
    if "concurrency" in rFile.lower():
      return self.Dummies["Concurrency"], os.path.join(tDir, rFile)
    r = self.Dummies["BP"] # Sets default dummy path
    pf = rFile.split("_")[0] # Gets current file prefix
    flag = True # Trips FIXME file naming
    if pf in self.Dummies: # These are known types
      r = self.Dummies[pf]
      flag = False
    if "Textures" in f: # Force textures, if included
      r = self.Dummies["T"]
      flag = False
    elif "Materials" in f: # Force materials, always
      r = self.Dummies["M"]
      flag = False
    if flag: # Flag file names
      rFile = "FIXME_" + rFile
    return r, os.path.join(tDir, rFile)

P = PathMaker()

for i in os.walk(RetailDir):
  if i[0] in SkipDirs: # Exclude folders
    continue
  stripPath = i[0][len(RetailDir):] # Make /Game/ cwd
  templatePath = "%s%s" % (TemplateDir, stripPath)
  if not os.path.exists(templatePath): # Create folders as needed
    os.makedirs(templatePath)
  if len(i) == 3: # Files are present in this folder
    files = i[2]
    for f in files:
      if "uasset" in f: # Skip any non asset files
        # Get Dummy and copy to template
        dummyPath, newPath = P.getDummyPath(templatePath, i[0], f)
        if not os.path.exists(newPath):
          shutil.copy(useDummy, newPath)
print "Process Complete"
