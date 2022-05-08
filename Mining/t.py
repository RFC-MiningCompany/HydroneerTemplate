import unreal, os


loc1 = "/Game/Meshes/UsedItems/Tools/Textures"
loc2 = "/Game/Meshes/UsedItems/Tools/Materials"

loc3 = "/Game/"
loc4 = "/Game/"

f4t4lTextures  = unreal.EditorAssetLibrary.list_assets(loc1, True, True)
gameTextures   = unreal.EditorAssetLibrary.list_assets(loc3, True, True)

f4t4lMaterials = unreal.EditorAssetLibrary.list_assets(loc2, True, True)
gameMaterials  = unreal.EditorAssetLibrary.list_assets(loc4, True, True)

ft = [os.path.basename(x) for x in f4t4lTextures]
fm = [os.path.basename(x) for x in f4t4lMaterials]

gt = [os.path.basename(x) for x in gameTextures]
gm = [os.path.basename(x) for x in gameMaterials]

TDL = {}
dt = 0
dm = 0



idx = 0
for t in gt:
  if t in ft:
    f4t4lIdx = ft.index(t)
    gamePath = gameTextures[idx]
    f4t4lPath = f4t4lTextures[f4t4lIdx]
    if f4t4lPath == gamePath:
      idx += 1
      continue
    if f4t4lPath in TDL.keys():
      TDL[f4t4lPath].append(gamePath)
    else:
      TDL[f4t4lPath] = [gamePath]
    unreal.EditorAssetLibrary.delete_asset(gamePath)
    unreal.EditorAssetLibrary.duplicate_asset(f4t4lPath, gamePath)
  idx += 1
idx = 0
for m in gm:
  if m in fm:
    f4t4lIdx = fm.index(m)
    gamePath = gameMaterials[idx]
    f4t4lPath = f4t4lMaterials[f4t4lIdx]
    if f4t4lPath == gamePath:
      idx += 1
      continue
    if f4t4lPath in TDL.keys():
      TDL[f4t4lPath].append(gamePath)
    else:
      TDL[f4t4lPath] = [gamePath]
    unreal.EditorAssetLibrary.delete_asset(gamePath)
    unreal.EditorAssetLibrary.duplicate_asset(f4t4lPath, gamePath)
  idx += 1

for k in TDL:
  unreal.EditorAssetLibrary.delete_asset(k)

