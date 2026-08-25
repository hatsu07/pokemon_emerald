	@ pret/pokeemerald-jp direct xref for 0x084E6CE0: save_failed_screen.s: CB2_SaveFailedScreen
	.globl gSaveFailedScreenData_084E6CE0
gSaveFailedScreenData_084E6CE0:
	@ Text window frame graphics: 20 entries, each 9 4bpp tiles (0x120 bytes).
	@ Entry 0 is also loaded by CB2_SaveFailedScreen for its window frame tiles.
gTextWindowFrameTiles_0: @ 0x084E6CE0
	@ Editable 24x24 indexed PNG; 9 row-major 4bpp tiles.
	.incbin "build/graphics/ui/text_window/frame_00.4bpp"
gTextWindowFrameTiles_1: @ 0x084E6E00
	@ Editable 24x24 indexed PNG; 9 row-major 4bpp tiles.
	.incbin "build/graphics/ui/text_window/frame_01.4bpp"
gTextWindowFrameTiles_2: @ 0x084E6F20
