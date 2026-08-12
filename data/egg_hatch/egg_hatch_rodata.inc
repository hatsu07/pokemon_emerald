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

sEggHatch_Sheet: @ 0x082FC9DC
	rodata_sprite_sheet sEggHatchTiles, 0x0800, GFXTAG_EGG

sEggShards_Sheet: @ 0x082FC9E4
	rodata_sprite_sheet sEggShardTiles, 0x0080, GFXTAG_EGG_SHARD

sEgg_SpritePalette: @ 0x082FC9EC
	rodata_sprite_palette sEggPalette, PALTAG_EGG

sSpriteTemplate_Egg: @ 0x082FC9F4
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

sSpriteTemplate_EggShard: @ 0x082FCA44
	rodata_sprite_template GFXTAG_EGG_SHARD, PALTAG_EGG, sOamData_EggShard, sSpriteAnimTable_EggShard, NULL, gDummySpriteAffineAnimTable, SpriteCB_EggShard

sBgTemplates_EggHatch: @ 0x082FCA5C
	bg_template 0, 2, 24, 3, 0, 0, 0
	bg_template 1, 0, 8, 1, 0, 2, 0

sWinTemplates_EggHatch: @ 0x082FCA64
	window_template 0, 2, 15, 26, 4, 0, 64
	null_window_template

sYesNoWinTemplate: @ 0x082FCA74
	window_template 0, 21, 9, 5, 4, 15, 424

	.globl sEggShardVelocities
sEggShardVelocities: @ 0x082FCA7C
	@ signed Q8.8 (x, y) velocities; 19 records
	@ first shake
	egg_shard_velocity 0, -384, -960 @ (-1.5, -3.75)
	@ third shake
	egg_shard_velocity 1, -1280, -768 @ (-5.0, -3.0)
	egg_shard_velocity 2, 896, -768 @ (3.5, -3.0)
	@ hatching
	egg_shard_velocity 3, -1024, -960 @ (-4.0, -3.75)
	egg_shard_velocity 4, 512, -384 @ (2.0, -1.5)
	egg_shard_velocity 5, -128, -1728 @ (-0.5, -6.75)
	egg_shard_velocity 6, 1280, -576 @ (5.0, -2.25)
	egg_shard_velocity 7, -384, -960 @ (-1.5, -3.75)
	egg_shard_velocity 8, 1152, -384 @ (4.5, -1.5)
	egg_shard_velocity 9, -256, -1728 @ (-1.0, -6.75)
	egg_shard_velocity 10, 1024, -576 @ (4.0, -2.25)
	egg_shard_velocity 11, -896, -960 @ (-3.5, -3.75)
	egg_shard_velocity 12, 256, -384 @ (1.0, -1.5)
	egg_shard_velocity 13, -900, -1728 @ (-3.515625, -6.75)
	egg_shard_velocity 14, 1152, -576 @ (4.5, -2.25)
	egg_shard_velocity 15, -128, -1920 @ (-0.5, -7.5)
	egg_shard_velocity 16, 256, -1152 @ (1.0, -4.5)
	egg_shard_velocity 17, -640, -576 @ (-2.5, -2.25)
	egg_shard_velocity 18, 640, -1920 @ (2.5, -7.5)
	.if (. - sEggShardVelocities) != 0x4C
	.error "sEggShardVelocities size changed"
	.endif
