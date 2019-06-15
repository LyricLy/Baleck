import sys
import json


with open(sys.argv[1]) as f:
    track = json.load(f)

for i in range(len(track[2])):
    track[2][i] = track[2][i][::int(sys.argv[3])]

with open(sys.argv[2], "w") as f:
    json.dump(track, f)
