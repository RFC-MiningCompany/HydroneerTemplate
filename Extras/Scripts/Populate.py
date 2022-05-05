import os, shutil, time
START = time.time()
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


Project_Folder  = os.path.join("E:\\", "HydroneerModStuff", "GithubRepo", "Template2Work", "Hydroneer2Template")

Template_Folder = os.path.join(Project_Folder, "TEST_Content", "Content")

Retail_Folder   = os.path.join(Project_Folder, "Extras", "Extracted Assets 2.0H", "Mining", "Content")

folders_to_skip  = ["Textures", "Meshes", "Materials"]

# ***

class PathMaker:
  def __init__(self):
    self.Dummies = {}
    # Populate prefix:filename Dictionary
    for dummy_name in os.listdir("Dummies"):
      prefix = dummy_name.split("_")[0]
      if not self.Dummies.has_key(prefix):
        self.Dummies[prefix] = os.path.join("Dummies", dummy_name)

  def getDummyPath(self, template_path, retail_folder, retail_file):
    # Hardcoded hack for sound concurrency files
    if "concurrency" in retail_file.lower():  return self.Dummies["Concurrency"], os.path.join(template_path, retail_file) 
    dummy_path = self.Dummies["BP"]
    prefix = retail_file.split("_")[0]
    fix = True
    if prefix in self.Dummies:
      dummy_path, fix = self.Dummies[prefix], False
    if "Textures" in retail_folder:
      dummy_path, fix = self.Dummies["T"], False
    elif "Materials" in retail_folder:
      dummy_path, fix = self.Dummies["M"], False
    elif "Sounds" in retail_folder and prefix == "S":
      dummy_path, fix = self.Dummies["SW"], False
    if fix: rFile = "FIXME_" + retail_file
    return dummy_path, os.path.join(template_path, retail_file)

P = PathMaker()
SkipDirs = []
for s in folders_to_skip: SkipDirs.append(os.path.join(Retail_Folder, s))
  
if os.path.exists(Template_Folder):
  shutil.rmtree(Template_Folder)

for i in os.walk(Retail_Folder):
  if True in [x in i[0] for x in SkipDirs]: continue
  sub_path = i[0][len(Retail_Folder):]
  template_path = "%s%s" % (Template_Folder, sub_path)
  if not os.path.exists(template_path):
    os.makedirs(template_path)
  if len(i) == 3:
    for asset in i[2]:
      if "uasset" in asset:
        dummy_path, new_path = P.getDummyPath(template_path, i[0], asset)
        if not os.path.exists(new_path):            
          shutil.copy(dummy_path, new_path)

END = time.time() - START
print "Process Complete (%s seconds)" % (round(END, 2))
