@ Egg hatch graphics and sprite metadata.

	.globl gUnknown_82FC0FE
gUnknown_82FC0FE: @ 0x082FC0FE
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0xF9, 0x05, 0xFF, 0x00

sEggPalette: @ 0x082FC102
	.incbin "build/graphics/pokemon/egg/normal.gbapal"

sEggHatchTiles: @ 0x082FC122
	.incbin "build/graphics/pokemon/egg/hatch.4bpp"

sEggShardTiles: @ 0x082FC922
	.incbin "build/graphics/pokemon/egg/shard.4bpp"
	.2byte 0 @ alignment

sOamData_Egg: @ 0x082FC9A4
	@ 32x32 square, priority 1.
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1, 0, 0

sSpriteAnim_Egg_Normal: @ 0x082FC9AC
	rodata_anim_frame 0, 5
	rodata_anim_end

sSpriteAnim_Egg_Cracked1: @ 0x082FC9B4
	rodata_anim_frame 16, 5
	rodata_anim_end

sSpriteAnim_Egg_Cracked2: @ 0x082FC9BC
	rodata_anim_frame 32, 5
	rodata_anim_end

sSpriteAnim_Egg_Cracked3: @ 0x082FC9C4
	rodata_anim_frame 48, 5
	rodata_anim_end

sSpriteAnimTable_Egg: @ 0x082FC9CC
	.4byte sSpriteAnim_Egg_Normal, sSpriteAnim_Egg_Cracked1, sSpriteAnim_Egg_Cracked2, sSpriteAnim_Egg_Cracked3

	.globl gUnknown_82FC9DC
sEggHatch_Sheet: @ 0x082FC9DC
gUnknown_82FC9DC:
	rodata_sprite_sheet sEggHatchTiles, 0x0800, GFXTAG_EGG

	.globl gUnknown_82FC9E4
sEggShards_Sheet: @ 0x082FC9E4
gUnknown_82FC9E4:
	rodata_sprite_sheet sEggShardTiles, 0x0080, GFXTAG_EGG_SHARD

	.globl gUnknown_82FC9EC
sEgg_SpritePalette: @ 0x082FC9EC
gUnknown_82FC9EC:
	rodata_sprite_palette sEggPalette, PALTAG_EGG

	.globl gUnknown_82FC9F4
sSpriteTemplate_Egg: @ 0x082FC9F4
gUnknown_82FC9F4:
	rodata_sprite_template GFXTAG_EGG, PALTAG_EGG, sOamData_Egg, sSpriteAnimTable_Egg, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

sOamData_EggShard: @ 0x082FCA0C
	@ 8x8 square, priority 2.
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0

sSpriteAnim_EggShard0: @ 0x082FCA14
	rodata_anim_frame 0, 5
	rodata_anim_end

sSpriteAnim_EggShard1: @ 0x082FCA1C
	rodata_anim_frame 1, 5
	rodata_anim_end

sSpriteAnim_EggShard2: @ 0x082FCA24
	rodata_anim_frame 2, 5
	rodata_anim_end

sSpriteAnim_EggShard3: @ 0x082FCA2C
	rodata_anim_frame 3, 5
	rodata_anim_end

sSpriteAnimTable_EggShard: @ 0x082FCA34
	.4byte sSpriteAnim_EggShard0, sSpriteAnim_EggShard1, sSpriteAnim_EggShard2, sSpriteAnim_EggShard3

	.globl gUnknown_82FCA44
sSpriteTemplate_EggShard: @ 0x082FCA44
gUnknown_82FCA44:
	rodata_sprite_template GFXTAG_EGG_SHARD, PALTAG_EGG, sOamData_EggShard, sSpriteAnimTable_EggShard, NULL, gDummySpriteAffineAnimTable, SpriteCB_EggShard

	.globl gUnknown_82FCA5C
sBgTemplates_EggHatch: @ 0x082FCA5C
gUnknown_82FCA5C:
	bg_template 0, 2, 24, 3, 0, 0, 0
	bg_template 1, 0, 8, 1, 0, 2, 0

	.globl gUnknown_82FCA64
sWinTemplates_EggHatch: @ 0x082FCA64
gUnknown_82FCA64:
	window_template 0, 2, 15, 26, 4, 0, 64
	null_window_template

	.globl gUnknown_82FCA74
sYesNoWinTemplate: @ 0x082FCA74
gUnknown_82FCA74:
	window_template 0, 21, 9, 5, 4, 15, 424

	.globl gUnknown_82FCA7C
sEggShardVelocities: @ 0x082FCA7C
gUnknown_82FCA7C:
	@ ANALYSIS: RAW_BLOCK size=0x4C
	.2byte -384, -960, -1280, -768, 896, -768, -1024, -960
	.2byte 512, -384, -128, -1728, 1280, -576, -384, -960
	.2byte 1152, -384, -256, -1728, 1024, -576, -896, -960
	.2byte 256, -384, -900, -1728, 1152, -576, -128, -1920
	.2byte 256, -1152, -640, -576, 640, -1920
