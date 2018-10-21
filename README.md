# PWND_SDK
SDK for the game PWND

Useful game info:
```
GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 50 B9 ? ? ? ? 48 89 5C 24 ?
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24\x00 xxx????xxxxxx????xxxx?

GObjects:
48 8D 0D ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 48 8B D6
\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6 xxx????x????x????x????xxx

GWorld: 
48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01
\x48\x8B\x1D\x00\x00\x00\x00\x48\x85\xDB\x74\x3B\x41\xB0\x01 xxx????xxxxxxxx

ProcessEvent: 63
CreateDefaultObject: 100
```

Useful files:
- PWND_Basic.cpp
- PWND_Basic.hpp
- PWND_CoreUObject_classes.hpp
- PWND_CoreUObject_functions.cpp
- PWND_Engine_classes.hpp
- PWND_Engine_functions.cpp
- PWND_PWND_classes.hpp
- PWND_PWND_Functions.cpp
