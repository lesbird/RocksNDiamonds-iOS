# RocksNDiamonds-iOS
Rocks'N'Diamonds for iOS as published on the App Store

Based on RocksNDiamonds V4.1.0.0

Minimal changes to the original source code.
Changes:
- set GAME_FRAME_DELAY to 16 to support 60 FPS in src/libgame/system.h
- renamed some structures to prevent conflicts. Since we are building as a single large project instead of separate lib files this was necessary.
- Xcode project added
- Game Center support added
- Included all Emerald Mine levels
- Included all Mirror Magic levels
