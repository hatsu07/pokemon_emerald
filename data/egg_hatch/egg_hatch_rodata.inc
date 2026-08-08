@ Egg hatch graphics and sprite metadata.

	.globl gUnknown_82FC0FE
gUnknown_82FC0FE: @ 0x082FC0FE
	.byte 0xF9, 0x05, 0xFF, 0x00

sEggPalette: @ 0x082FC102
	.2byte 0x4BF4, 0x2528, 0x4E72, 0x6BDE, 0x539D, 0x4319, 0x272F, 0x2A4D
	.2byte 0x001C, 0x001C, 0x001C, 0x001C, 0x001C, 0x001C, 0x001C, 0x7390

sEggHatchTiles: @ 0x082FC122
	.incbin "build/graphics/pokemon/egg/hatch.4bpp"

sEggShardTiles: @ 0x082FC922
	.incbin "build/graphics/pokemon/egg/shard.4bpp"
	.2byte 0 @ alignment

sOamData_Egg: @ 0x082FC9A4
	.2byte 0x0000, 0x8000, 0x0400, 0x0000

sSpriteAnim_Egg_Normal: @ 0x082FC9AC
	.4byte 0x00050000, 0x0000FFFF

sSpriteAnim_Egg_Cracked1: @ 0x082FC9B4
	.4byte 0x00050010, 0x0000FFFF

sSpriteAnim_Egg_Cracked2: @ 0x082FC9BC
	.4byte 0x00050020, 0x0000FFFF

sSpriteAnim_Egg_Cracked3: @ 0x082FC9C4
	.4byte 0x00050030, 0x0000FFFF

sSpriteAnimTable_Egg: @ 0x082FC9CC
	.4byte sSpriteAnim_Egg_Normal, sSpriteAnim_Egg_Cracked1, sSpriteAnim_Egg_Cracked2, sSpriteAnim_Egg_Cracked3

	.globl gUnknown_82FC9DC
sEggHatch_Sheet: @ 0x082FC9DC
gUnknown_82FC9DC:
	.4byte sEggHatchTiles
	.2byte 0x0800, 0x3039

	.globl gUnknown_82FC9E4
sEggShards_Sheet: @ 0x082FC9E4
gUnknown_82FC9E4:
	.4byte sEggShardTiles
	.2byte 0x0080, 0x5BA0

	.globl gUnknown_82FC9EC
sEgg_SpritePalette: @ 0x082FC9EC
gUnknown_82FC9EC:
	.4byte sEggPalette
	.2byte 0xD431, 0x0000

	.globl gUnknown_82FC9F4
sSpriteTemplate_Egg: @ 0x082FC9F4
gUnknown_82FC9F4:
	.4byte 0xD4313039, sOamData_Egg, sSpriteAnimTable_Egg, 0x00000000
	.4byte 0x082BF310, 0x08007141

sOamData_EggShard: @ 0x082FCA0C
	.2byte 0x0000, 0x0000, 0x0800, 0x0000

sSpriteAnim_EggShard0: @ 0x082FCA14
	.4byte 0x00050000, 0x0000FFFF

sSpriteAnim_EggShard1: @ 0x082FCA1C
	.4byte 0x00050001, 0x0000FFFF

sSpriteAnim_EggShard2: @ 0x082FCA24
	.4byte 0x00050002, 0x0000FFFF

sSpriteAnim_EggShard3: @ 0x082FCA2C
	.4byte 0x00050003, 0x0000FFFF

sSpriteAnimTable_EggShard: @ 0x082FCA34
	.4byte sSpriteAnim_EggShard0, sSpriteAnim_EggShard1, sSpriteAnim_EggShard2, sSpriteAnim_EggShard3

	.globl gUnknown_82FCA44
sSpriteTemplate_EggShard: @ 0x082FCA44
gUnknown_82FCA44:
	.4byte 0xD4315BA0, sOamData_EggShard, sSpriteAnimTable_EggShard, 0x00000000
	.4byte 0x082BF310, 0x08071AF9

	.globl gUnknown_82FCA5C
sBgTemplates_EggHatch: @ 0x082FCA5C
gUnknown_82FCA5C:
	.4byte 0x00000788, 0x00002281

	.globl gUnknown_82FCA64
sWinTemplates_EggHatch: @ 0x082FCA64
gUnknown_82FCA64:
	.byte 0x00, 0x02, 0x0F, 0x1A, 0x04, 0x00, 0x40, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.globl gUnknown_82FCA74
sYesNoWinTemplate: @ 0x082FCA74
gUnknown_82FCA74:
	.byte 0x00, 0x15, 0x09, 0x05, 0x04, 0x0F, 0xA8, 0x01

	.globl gUnknown_82FCA7C
sEggShardVelocities: @ 0x082FCA7C
gUnknown_82FCA7C:
	.2byte -384, -960, -1280, -768, 896, -768, -1024, -960
	.2byte 512, -384, -128, -1728, 1280, -576, -384, -960
	.2byte 1152, -384, -256, -1728, 1024, -576, -896, -960
	.2byte 256, -384, -900, -1728, 1152, -576, -128, -1920
	.2byte 256, -1152, -640, -576, 640, -1920
