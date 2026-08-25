
sSecretPowerCave_Gfx: @ 0x0856955C
	.incbin "build/graphics/field_effects/pics/secret_power_cave.4bpp"
sFiller: @ 0x085697DC
	.space 0x20
sSecretPowerCave_Pal: @ 0x085697FC
	.incbin "build/graphics/field_effects/palettes/secret_power_cave.gbapal"
sSecretPowerShrub_Gfx: @ 0x0856981C
	.incbin "build/graphics/field_effects/pics/secret_power_shrub.4bpp"
sSecretPowerTree_Gfx: @ 0x08569A9C
	.incbin "build/graphics/field_effects/pics/secret_power_tree.4bpp"
sSecretPowerPlant_Pal: @ 0x08569D9C
	.incbin "build/graphics/field_effects/palettes/secret_power_plant.gbapal"
sSandPillar0_Gfx: @ 0x08569DBC
	.incbin "build/graphics/field_effects/pics/sand_pillar/0.4bpp"
sSandPillar1_Gfx: @ 0x08569EBC
	.incbin "build/graphics/field_effects/pics/sand_pillar/1.4bpp"
sSandPillar2_Gfx: @ 0x08569FBC
	.incbin "build/graphics/field_effects/pics/sand_pillar/2.4bpp"

sOam_SecretPower: @ 0x0856A0BC
	@ packed struct OamData: 16x16, 4bpp, priority 2
	.2byte 0x0000, 0x4000, 0x0800, 0x0000

sAnim_SecretPowerCave: @ 0x0856A0C4
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0001, 0x0008 @ ANIMCMD_FRAME(1, 8)
	.2byte 0x0002, 0x0008 @ ANIMCMD_FRAME(2, 8)
	.2byte 0x0003, 0x0008 @ ANIMCMD_FRAME(3, 8)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VineDropLeft: @ 0x0856A0DC
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0001, 0x0008 @ ANIMCMD_FRAME(1, 8)
	.2byte 0x0002, 0x0008 @ ANIMCMD_FRAME(2, 8)
	.2byte 0x0003, 0x0008 @ ANIMCMD_FRAME(3, 8)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VineRiseLeft: @ 0x0856A0F4
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0x0003, 0x0008 @ ANIMCMD_FRAME(3, 8)
	.2byte 0x0002, 0x0008 @ ANIMCMD_FRAME(2, 8)
	.2byte 0x0001, 0x0008 @ ANIMCMD_FRAME(1, 8)
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VineDropRight: @ 0x0856A10C
	.2byte 0x0000, 0x0048 @ ANIMCMD_FRAME(0, 8, hFlip)
	.2byte 0x0001, 0x0048 @ ANIMCMD_FRAME(1, 8, hFlip)
	.2byte 0x0002, 0x0048 @ ANIMCMD_FRAME(2, 8, hFlip)
	.2byte 0x0003, 0x0048 @ ANIMCMD_FRAME(3, 8, hFlip)
	.2byte 0x0004, 0x0048 @ ANIMCMD_FRAME(4, 8, hFlip)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VineRiseRight: @ 0x0856A124
	.2byte 0x0004, 0x0048 @ ANIMCMD_FRAME(4, 8, hFlip)
	.2byte 0x0003, 0x0048 @ ANIMCMD_FRAME(3, 8, hFlip)
	.2byte 0x0002, 0x0048 @ ANIMCMD_FRAME(2, 8, hFlip)
	.2byte 0x0001, 0x0048 @ ANIMCMD_FRAME(1, 8, hFlip)
	.2byte 0x0000, 0x0048 @ ANIMCMD_FRAME(0, 8, hFlip)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_SecretPowerShrub: @ 0x0856A13C
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0001, 0x0008 @ ANIMCMD_FRAME(1, 8)
	.2byte 0x0002, 0x0008 @ ANIMCMD_FRAME(2, 8)
	.2byte 0x0003, 0x0008 @ ANIMCMD_FRAME(3, 8)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnimTable_SecretPowerCave: @ 0x0856A154
	semantic_anim_table_entry sAnim_SecretPowerCave
sAnimTable_SecretPowerTree: @ 0x0856A158
	semantic_anim_table_entry sAnim_VineDropLeft
	semantic_anim_table_entry sAnim_VineRiseLeft
	semantic_anim_table_entry sAnim_VineDropRight
	semantic_anim_table_entry sAnim_VineRiseRight
sAnimTable_SecretPowerShrub: @ 0x0856A168
	semantic_anim_table_entry sAnim_SecretPowerShrub

sPicTable_SecretPowerCave: @ 0x0856A16C
	.4byte sSecretPowerCave_Gfx
	.2byte 0x80, 0
	.4byte sSecretPowerCave_Gfx + 0x80
	.2byte 0x80, 0
	.4byte sSecretPowerCave_Gfx + 0x100
	.2byte 0x80, 0
	.4byte sSecretPowerCave_Gfx + 0x180
	.2byte 0x80, 0
	.4byte sSecretPowerCave_Gfx + 0x200
	.2byte 0x80, 0

sPicTable_SecretPowerTree: @ 0x0856A194
	.4byte sSecretPowerTree_Gfx
	.2byte 0x80, 0
	.4byte sSecretPowerTree_Gfx + 0x80
	.2byte 0x80, 0
	.4byte sSecretPowerTree_Gfx + 0x100
	.2byte 0x80, 0
	.4byte sSecretPowerTree_Gfx + 0x180
	.2byte 0x80, 0
	.4byte sSecretPowerTree_Gfx + 0x200
	.2byte 0x80, 0

sPicTable_SecretPowerShrub: @ 0x0856A1BC
	.4byte sSecretPowerShrub_Gfx
	.2byte 0x80, 0
	.4byte sSecretPowerShrub_Gfx + 0x80
	.2byte 0x80, 0
	.4byte sSecretPowerShrub_Gfx + 0x100
	.2byte 0x80, 0
	.4byte sSecretPowerShrub_Gfx + 0x180
	.2byte 0x80, 0
	.4byte sSecretPowerShrub_Gfx + 0x200
	.2byte 0x80, 0

	.globl sSpriteTemplate_SecretPowerCave
sSpriteTemplate_SecretPowerCave: @ 0x0856A1E4
	semantic_sprite_template 0xFFFF, 0x1003, sOam_SecretPower, sAnimTable_SecretPowerCave, sPicTable_SecretPowerCave, gDummySpriteAffineAnimTable, CaveEntranceSpriteCallback1
	.globl sSpriteTemplate_SecretPowerTree
sSpriteTemplate_SecretPowerTree: @ 0x0856A1FC
	semantic_sprite_template 0xFFFF, 0x1008, sOam_SecretPower, sAnimTable_SecretPowerTree, sPicTable_SecretPowerTree, gDummySpriteAffineAnimTable, TreeEntranceSpriteCallback1
	.globl sSpriteTemplate_SecretPowerShrub
sSpriteTemplate_SecretPowerShrub: @ 0x0856A214
	semantic_sprite_template 0xFFFF, 0x1008, sOam_SecretPower, sAnimTable_SecretPowerShrub, sPicTable_SecretPowerShrub, gDummySpriteAffineAnimTable, ShrubEntranceSpriteCallback1

	.globl gSpritePalette_SecretPower_Cave
gSpritePalette_SecretPower_Cave: @ 0x0856A22C
	.4byte sSecretPowerCave_Pal
	.2byte 0x1003, 0
	.globl gSpritePalette_SecretPower_Plant
gSpritePalette_SecretPower_Plant: @ 0x0856A234
	.4byte sSecretPowerPlant_Pal
	.2byte 0x1008, 0

