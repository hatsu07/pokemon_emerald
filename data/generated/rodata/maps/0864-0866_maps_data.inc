	.include "asm/macros/semantic_raw_structs.inc"

	@ Canonical first cluster recovered from JP ROM and matched to pret/pokeemerald.
	.globl sGiftRibbonsMonDataIds
sGiftRibbonsMonDataIds: @ 0x08569552
	@ MON_DATA_MARINE/LAND/SKY/COUNTRY/NATIONAL/EARTH/WORLD_RIBBON
	.byte 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E
	.balign 4, 0

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

sOam_SandPillar: @ 0x0856A23C
	@ packed struct OamData: 16x32, 4bpp, priority 2
	.2byte 0x8000, 0x8000, 0x0800, 0x0000

sAnim_SandPillar: @ 0x0856A244
	.2byte 0x0000, 0x0006 @ ANIMCMD_FRAME(0, 6)
	.2byte 0x0001, 0x0006 @ ANIMCMD_FRAME(1, 6)
	.2byte 0x0002, 0x0006 @ ANIMCMD_FRAME(2, 6)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnimTable_SandPillar: @ 0x0856A254
	semantic_anim_table_entry sAnim_SandPillar

sPicTable_SandPillar: @ 0x0856A258
	.4byte sSandPillar0_Gfx
	.2byte 0x100, 0
	.4byte sSandPillar1_Gfx
	.2byte 0x100, 0
	.4byte sSandPillar2_Gfx
	.2byte 0x100, 0

	.globl sSpriteTemplate_SandPillar
sSpriteTemplate_SandPillar: @ 0x0856A270
	semantic_sprite_template 0xFFFF, 0x100E, sOam_SandPillar, sAnimTable_SandPillar, sPicTable_SandPillar, gDummySpriteAffineAnimTable, SpriteCB_SandPillar_0
	.globl gSpritePalette_SandPillar
gSpritePalette_SandPillar: @ 0x0856A288
	.4byte 0x0835AF08 @ canonical gTilesetPalettes_SecretBase[5]
	.2byte 0x100E, 0

sRecordMixLights_Gfx: @ 0x0856A290
	.incbin "build/graphics/field_effects/pics/record_mix_lights.4bpp"
sRecordMixLights_Pal: @ 0x0856A410
	.incbin "build/graphics/field_effects/palettes/record_mix_lights.gbapal"

sPicTable_RecordMixLights: @ 0x0856A430
	.4byte sRecordMixLights_Gfx
	.2byte 0x80, 0
	.4byte sRecordMixLights_Gfx + 0x80
	.2byte 0x80, 0
	.4byte sRecordMixLights_Gfx + 0x100
	.2byte 0x80, 0

	.globl sSpritePalette_RecordMixLights
sSpritePalette_RecordMixLights: @ 0x0856A448
	.4byte sRecordMixLights_Pal
	.2byte 0x1000, 0

sAnim_RecordMixLights: @ 0x0856A450
	.2byte 0x0000, 0x001E @ ANIMCMD_FRAME(0, 30)
	.2byte 0x0001, 0x001E @ ANIMCMD_FRAME(1, 30)
	.2byte 0x0002, 0x001E @ ANIMCMD_FRAME(2, 30)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnimTable_RecordMixLights: @ 0x0856A460
	semantic_anim_table_entry sAnim_RecordMixLights

	.globl sSpriteTemplate_RecordMixLights
sSpriteTemplate_RecordMixLights: @ 0x0856A464
	semantic_sprite_template 0xFFFF, 0x1000, 0x084E1958, sAnimTable_RecordMixLights, sPicTable_RecordMixLights, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl sTruckCamera_HorizontalTable
sTruckCamera_HorizontalTable: @ 0x0856A47C
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 0xFF, 0xFF, 0xFF, 0
	.globl sSSTidalSailEastMovementScript
sSSTidalSailEastMovementScript: @ 0x0856A48F
	.byte 0x18, 0xFE @ MOVEMENT_ACTION_WALK_FAST_RIGHT, MOVEMENT_ACTION_STEP_END
	.globl sSSTidalSailWestMovementScript
sSSTidalSailWestMovementScript: @ 0x0856A491
	.byte 0x17, 0xFE @ MOVEMENT_ACTION_WALK_FAST_LEFT, MOVEMENT_ACTION_STEP_END
	.balign 4, 0
	@ pret/pokeemerald-jp direct xref for 0x0856A494: rotating_gate.s: RotatingGate_LoadPuzzleConfig
	.globl gFortreeGymRotatingGatePuzzleGates
gFortreeGymRotatingGatePuzzleGates: @ 0x0856A494
	@ analyzed canonical ROM range 0x0856A494-0x0856A4D3
	rotating_gate_puzzle_gate 6, 7, 5, 1
	rotating_gate_puzzle_gate 9, 15, 5, 2
	rotating_gate_puzzle_gate 3, 19, 5, 1
	rotating_gate_puzzle_gate 2, 6, 4, 1
	rotating_gate_puzzle_gate 9, 12, 4, 0
	rotating_gate_puzzle_gate 6, 23, 4, 0
	rotating_gate_puzzle_gate 12, 22, 4, 0
	rotating_gate_puzzle_gate 6, 3, 3, 2
	@ pret/pokeemerald-jp direct xref for 0x0856A4D4: rotating_gate.s: RotatingGate_LoadPuzzleConfig
	.globl gTrickHousePuzzle6RotatingGatePuzzleGates
gTrickHousePuzzle6RotatingGatePuzzleGates: @ 0x0856A4D4
	@ analyzed canonical ROM range 0x0856A4D4-0x0856A52B
	rotating_gate_puzzle_gate 14, 5, 4, 1
	rotating_gate_puzzle_gate 10, 6, 1, 2
	rotating_gate_puzzle_gate 6, 6, 3, 1
	rotating_gate_puzzle_gate 14, 8, 4, 1
	rotating_gate_puzzle_gate 3, 10, 2, 3
	rotating_gate_puzzle_gate 9, 14, 0, 1
	rotating_gate_puzzle_gate 3, 15, 6, 0
	rotating_gate_puzzle_gate 2, 17, 1, 2
	rotating_gate_puzzle_gate 12, 18, 6, 3
	rotating_gate_puzzle_gate 5, 18, 3, 1
	rotating_gate_puzzle_gate 10, 19, 2, 2
	.globl gRotatingGateTiles
gRotatingGateTiles: @ 0x0856A52C
	.globl gRotatingGateTiles_L1
gRotatingGateTiles_L1: @ 0x0856A52C
	.incbin "build/graphics/rotating_gates/l1.4bpp"

	.globl gRotatingGateTiles_L2
gRotatingGateTiles_L2: @ 0x0856A72C
	.incbin "build/graphics/rotating_gates/l2.4bpp"

	.globl gRotatingGateTiles_L3
gRotatingGateTiles_L3: @ 0x0856AF2C
	.incbin "build/graphics/rotating_gates/l3.4bpp"

	.globl gRotatingGateTiles_L4
gRotatingGateTiles_L4: @ 0x0856B72C
	.incbin "build/graphics/rotating_gates/l4.4bpp"

	.globl gRotatingGateTiles_T1
gRotatingGateTiles_T1: @ 0x0856BF2C
	.incbin "build/graphics/rotating_gates/t1.4bpp"

	.globl gRotatingGateTiles_T2
gRotatingGateTiles_T2: @ 0x0856C12C
	.incbin "build/graphics/rotating_gates/t2.4bpp"

	.globl gRotatingGateTiles_T3
gRotatingGateTiles_T3: @ 0x0856C92C
	.incbin "build/graphics/rotating_gates/t3.4bpp"

	.globl gRotatingGateTiles_T4
gRotatingGateTiles_T4: @ 0x0856D12C
	.incbin "build/graphics/rotating_gates/t4.4bpp"

	.globl gRotatingGateOam_64x64
gRotatingGateOam_64x64: @ 0x0856D92C
	rodata_sprite_oam_data 0, 1, 0, 0, 0, 0, 0, 0, 3, 0, 2, 2, 0
	.globl gRotatingGateOam_32x32
gRotatingGateOam_32x32: @ 0x0856D934
	rodata_sprite_oam_data 0, 1, 0, 0, 0, 0, 0, 0, 2, 0, 2, 2, 0
	@ pret/pokeemerald-jp direct xref for 0x0856D93C: rotating_gate.s: LoadRotatingGatePics
	.globl gRotatingGateSpriteSheets
gRotatingGateSpriteSheets: @ 0x0856D93C
	@ analyzed canonical ROM range 0x0856D93C-0x0856D983
	rodata_sprite_sheet gRotatingGateTiles_L1, 0x0200, 0x1300
	rodata_sprite_sheet gRotatingGateTiles_L2, 0x0800, 0x1301
	rodata_sprite_sheet gRotatingGateTiles_L3, 0x0800, 0x1302
	rodata_sprite_sheet gRotatingGateTiles_L4, 0x0800, 0x1303
	rodata_sprite_sheet gRotatingGateTiles_T1, 0x0200, 0x1304
	rodata_sprite_sheet gRotatingGateTiles_T2, 0x0800, 0x1305
	rodata_sprite_sheet gRotatingGateTiles_T3, 0x0800, 0x1306
	rodata_sprite_sheet gRotatingGateTiles_T4, 0x0800, 0x1307
	rodata_sprite_sheet 0, 0, 0
	.globl gRotatingGateSpriteAnim_Normal
gRotatingGateSpriteAnim_Normal: @ 0x0856D984
	rodata_anim_frame 0, 0
	rodata_anim_end
	.globl gRotatingGateSpriteAnim_Affine
gRotatingGateSpriteAnim_Affine: @ 0x0856D98C
	rodata_anim_frame 0, 0
	rodata_anim_end
	.globl gRotatingGateSpriteAnimTable
gRotatingGateSpriteAnimTable: @ 0x0856D994
	semantic_anim_table_entry gRotatingGateSpriteAnim_Normal
	.globl gRotatingGateSpriteAnimTable_Affine
gRotatingGateSpriteAnimTable_Affine: @ 0x0856D998
	semantic_anim_table_entry gRotatingGateSpriteAnim_Affine
	.globl sSpriteAffineAnim_Rotated0
sSpriteAffineAnim_Rotated0: @ 0x0856D99C
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	semantic_affine_animcmd_jump 0
	.globl sSpriteAffineAnim_Rotated90
sSpriteAffineAnim_Rotated90: @ 0x0856D9AC
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	semantic_affine_animcmd_jump 0
	.globl sSpriteAffineAnim_Rotated180
sSpriteAffineAnim_Rotated180: @ 0x0856D9BC
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	semantic_affine_animcmd_jump 0
	.globl sSpriteAffineAnim_Rotated270
sSpriteAffineAnim_Rotated270: @ 0x0856D9CC
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	semantic_affine_animcmd_jump 0
	.globl sSpriteAffineAnim_RotatingClockwise0to90
sSpriteAffineAnim_RotatingClockwise0to90: @ 0x0856D9DC
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xFC, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise90to180
sSpriteAffineAnim_RotatingClockwise90to180: @ 0x0856D9F4
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xFC, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise180to270
sSpriteAffineAnim_RotatingClockwise180to270: @ 0x0856DA0C
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xFC, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise270to360
sSpriteAffineAnim_RotatingClockwise270to360: @ 0x0856DA24
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xFC, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise360to270
sSpriteAffineAnim_RotatingAnticlockwise360to270: @ 0x0856DA3C
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x04, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise270to180
sSpriteAffineAnim_RotatingAnticlockwise270to180: @ 0x0856DA54
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x04, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise180to90
sSpriteAffineAnim_RotatingAnticlockwise180to90: @ 0x0856DA6C
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x04, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise90to0
sSpriteAffineAnim_RotatingAnticlockwise90to0: @ 0x0856DA84
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x04, 0x10
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise0to90Faster
sSpriteAffineAnim_RotatingClockwise0to90Faster: @ 0x0856DA9C
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xF8, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise90to180Faster
sSpriteAffineAnim_RotatingClockwise90to180Faster: @ 0x0856DAB4
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xF8, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise180to270Faster
sSpriteAffineAnim_RotatingClockwise180to270Faster: @ 0x0856DACC
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xF8, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingClockwise270to360Faster
sSpriteAffineAnim_RotatingClockwise270to360Faster: @ 0x0856DAE4
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	semantic_affine_animcmd_frame 0, 0, 0xF8, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise360to270Faster
sSpriteAffineAnim_RotatingAnticlockwise360to270Faster: @ 0x0856DAFC
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x08, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise270to180Faster
sSpriteAffineAnim_RotatingAnticlockwise270to180Faster: @ 0x0856DB14
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x08, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise180to90Faster
sSpriteAffineAnim_RotatingAnticlockwise180to90Faster: @ 0x0856DB2C
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x08, 0x08
	rodata_affine_anim_end
	.globl sSpriteAffineAnim_RotatingAnticlockwise90to0Faster
sSpriteAffineAnim_RotatingAnticlockwise90to0Faster: @ 0x0856DB44
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	semantic_affine_animcmd_frame 0, 0, 0x08, 0x08
	rodata_affine_anim_end
	.globl gRotatingGateAffineAnimTable
gRotatingGateAffineAnimTable: @ 0x0856DB5C
	semantic_affine_anim_table_entry sSpriteAffineAnim_Rotated0
	semantic_affine_anim_table_entry sSpriteAffineAnim_Rotated90
	semantic_affine_anim_table_entry sSpriteAffineAnim_Rotated180
	semantic_affine_anim_table_entry sSpriteAffineAnim_Rotated270
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise360to270
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise90to0
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise180to90
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise270to180
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise0to90
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise90to180
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise180to270
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise270to360
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise360to270Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise90to0Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise180to90Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingAnticlockwise270to180Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise0to90Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise90to180Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise180to270Faster
	semantic_affine_anim_table_entry sSpriteAffineAnim_RotatingClockwise270to360Faster
	@ pret/pokeemerald-jp direct xref for 0x0856DBAC: rotating_gate.s: RotatingGate_CreateGate
	.globl gRotatingGateSpriteTemplate_64x64
gRotatingGateSpriteTemplate_64x64: @ 0x0856DBAC
	@ analyzed canonical ROM range 0x0856DBAC-0x0856DBC3
	rodata_sprite_template 0x1300, 0xFFFF, gRotatingGateOam_64x64, gRotatingGateSpriteAnimTable, 0, gRotatingGateAffineAnimTable, SpriteCallback_RotatingGate
	@ pret/pokeemerald-jp direct xref for 0x0856DBC4: rotating_gate.s: RotatingGate_CreateGate
	.globl gRotatingGateSpriteTemplate_32x32
gRotatingGateSpriteTemplate_32x32: @ 0x0856DBC4
	@ analyzed canonical ROM range 0x0856DBC4-0x0856DBDB
	rodata_sprite_template 0x1300, 0xFFFF, gRotatingGateOam_32x32, gRotatingGateSpriteAnimTable_Affine, 0, gRotatingGateAffineAnimTable, SpriteCallback_RotatingGate
	@ pret/pokeemerald-jp direct xref for 0x0856DBDC: rotating_gate.s: RotatingGate_GetRotationInfo
	.globl gRotatingGateRotationInfo_GateType2
gRotatingGateRotationInfo_GateType2: @ 0x0856DBDC
	@ analyzed canonical ROM range 0x0856DBDC-0x0856DBEB
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0x27, 0x26, 0x12, 0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x0856DBEC: rotating_gate.s: RotatingGate_GetRotationInfo
	.globl gRotatingGateRotationInfo_GateType1
gRotatingGateRotationInfo_GateType1: @ 0x0856DBEC
	@ analyzed canonical ROM range 0x0856DBEC-0x0856DBFB
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x17, 0x16, 0x22, 0x23, 0xFF, 0xFF, 0xFF, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x0856DBFC: rotating_gate.s: RotatingGate_GetRotationInfo
	.globl gRotatingGateRotationInfo_GateType3
gRotatingGateRotationInfo_GateType3: @ 0x0856DBFC
	@ analyzed canonical ROM range 0x0856DBFC-0x0856DC0B
	.byte 0xFF, 0x11, 0xFF, 0xFF, 0xFF, 0x10, 0xFF, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0xFF, 0x25, 0xFF, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x0856DC0C: rotating_gate.s: RotatingGate_GetRotationInfo
	.globl gRotatingGateRotationInfo_GateType4
gRotatingGateRotationInfo_GateType4: @ 0x0856DC0C
	@ analyzed canonical ROM range 0x0856DC0C-0x0856DC1B
	.byte 0xFF, 0xFF, 0x21, 0xFF, 0xFF, 0xFF, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0xFF, 0xFF, 0x15, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x0856DC1C: rotating_gate.s: RotatingGate_CanRotate
	.globl gTrickHousePuzzle6RotatingGateCollisionOffsets
gTrickHousePuzzle6RotatingGateCollisionOffsets: @ 0x0856DC1C
	@ analyzed canonical ROM range 0x0856DC1C-0x0856DC3B
	rotating_gate_collision_offset 0, -1
	rotating_gate_collision_offset 1, -2
	rotating_gate_collision_offset 0, 0
	rotating_gate_collision_offset 1, 0
	rotating_gate_collision_offset -1, 0
	rotating_gate_collision_offset -1, 1
	rotating_gate_collision_offset -1, -1
	rotating_gate_collision_offset -2, -1
	@ pret/pokeemerald-jp direct xref for 0x0856DC3C: rotating_gate.s: RotatingGate_CanRotate
	.globl gFortreeGymRotatingGateCollisionOffsets
gFortreeGymRotatingGateCollisionOffsets: @ 0x0856DC3C
	@ analyzed canonical ROM range 0x0856DC3C-0x0856DC5B
	rotating_gate_collision_offset -1, -1
	rotating_gate_collision_offset -1, -2
	rotating_gate_collision_offset 0, -1
	rotating_gate_collision_offset 1, -1
	rotating_gate_collision_offset 0, 0
	rotating_gate_collision_offset 0, 1
	rotating_gate_collision_offset -1, 0
	rotating_gate_collision_offset -2, 0
	@ pret/pokeemerald-jp direct xref for 0x0856DC5C: rotating_gate.s: RotatingGate_CanRotate, RotatingGate_HasArm
	.globl gRotatingGateArmLayoutTable
gRotatingGateArmLayoutTable: @ 0x0856DC5C
	@ analyzed canonical ROM range 0x0856DC5C-0x0856DCBB
	.byte 1, 0, 1, 0, 0, 0, 0, 0
	.byte 1, 1, 1, 0, 0, 0, 0, 0
	.byte 1, 0, 1, 1, 0, 0, 0, 0
	.byte 1, 1, 1, 1, 0, 0, 0, 0
	.byte 1, 0, 1, 0, 1, 0, 0, 0
	.byte 1, 1, 1, 0, 1, 0, 0, 0
	.byte 1, 0, 1, 1, 1, 0, 0, 0
	.byte 1, 0, 1, 0, 1, 1, 0, 0
	.byte 1, 1, 1, 1, 1, 0, 0, 0
	.byte 1, 1, 1, 0, 1, 1, 0, 0
	.byte 1, 0, 1, 1, 1, 1, 0, 0
	.byte 1, 1, 1, 1, 1, 1, 0, 0
	.globl gItemUsePocketCallbacks
gItemUsePocketCallbacks: @ 0x0856DCBC
	.4byte sub_081B5E1C
	.4byte CB2_ReturnToField
	.4byte NULL
	@ pret/pokeemerald-jp direct xref for 0x0856DCC8: item_use.s: sub_080FDD58, sub_080FE330
	.globl gItemUseFacingDirectionOrder
gItemUseFacingDirectionOrder: @ 0x0856DCC8
	@ analyzed canonical ROM range 0x0856DCC8-0x0856DCCB
	.byte 0x02, 0x04, 0x01, 0x03
	@ pret/pokeemerald-jp direct xref for 0x0856DCCC: item_use.s: sub_080FE874
	.globl gItemUseYesNoCallbacks
gItemUseYesNoCallbacks: @ 0x0856DCCC
	@ analyzed canonical ROM range 0x0856DCCC-0x0856DCD3
	.4byte sub_080FE88C
	.4byte BagMenu_InitListsMenu
	.set gBattleAnimOam_AffineOff_ObjNormal_8x8, gOamData_AffineOff_ObjNormal_8x8

	.set gBattleAnimOam_AffineOff_ObjNormal_16x16, gOamData_AffineOff_ObjNormal_16x16

	.set gBattleAnimOam_AffineOff_ObjNormal_32x32, gOamData_AffineOff_ObjNormal_32x32

	.set gBattleAnimOam_AffineOff_ObjNormal_32x16, gOamData_AffineOff_ObjNormal_32x16

	.set gBattleAnimOam_084FD060, gOamData_AffineOff_ObjNormal_16x32

	.set gBattleAnimOam_084FD078, gOamData_AffineNormal_ObjNormal_16x16

	.set gBattleAnimOam_AffineOff_ObjNormal_8x16, gOamData_AffineOff_ObjNormal_8x16

	.set gBattleAnimOam_AffineOff_ObjNormal_64x64, gOamData_AffineNormal_ObjNormal_32x32

	.set gBattleAnimOam_084FD0A8, gOamData_AffineNormal_ObjNormal_64x32

	.set gBattleAnimOam_084FD0C8, gOamData_AffineNormal_ObjNormal_32x64

	.set gBattleAnimOam_084FD0E0, gOamData_AffineDouble_ObjNormal_32x32

	.set gBattleAnimOam_084FD0E8, gOamData_AffineDouble_ObjNormal_64x64

	.set gBattleAnimOam_084FD120, gOamData_AffineDouble_ObjNormal_16x32

	.set gBattleAnimOam_084FD128, gOamData_AffineDouble_ObjNormal_32x64

	.set gBattleAnimOam_084FD140, gOamData_AffineOff_ObjBlend_32x32

	.set gBattleAnimOam_084FD148, gOamData_AffineOff_ObjBlend_64x64

	.set gBattleAnimOam_084FD160, gOamData_AffineOff_ObjBlend_32x16

	.set gBattleAnimOam_084FD1A0, gOamData_AffineNormal_ObjBlend_32x32

	.set gBattleAnimOam_084FD1A8, gOamData_AffineNormal_ObjBlend_64x64

	.set gBattleAnimOam_084FD1E8, gOamData_AffineNormal_ObjBlend_32x64

	.set gBattleAnimOam_084FD1F0, gOamData_AffineDouble_ObjBlend_8x8

	.set gBattleAnimOam_084FD200, gOamData_AffineDouble_ObjBlend_32x32

	.set gBattleAnimOam_084FD208, gOamData_AffineDouble_ObjBlend_64x64

	.set gBattleAnimOam_084FD220, gOamData_AffineDouble_ObjBlend_32x16

	.set gBattleAnimOam_084FD228, gOamData_AffineDouble_ObjBlend_64x32

	.set gBattleAnimOam_AffineDouble_ObjNormal_8x8, gOamData_AffineDouble_ObjNormal_8x8

	.set gBattleAnimOam_AffineDouble_ObjNormal_16x16, gOamData_AffineDouble_ObjNormal_16x16

	.set gBattleAnimOam_AffineOn_ObjBlend_8x8, gOamData_AffineNormal_ObjBlend_16x16

	.globl gMovePowderParticleAnim
gMovePowderParticleAnim: @ 0x0856DCD4
	@ analyzed canonical ROM range 0x0856DCD4-0x0856DDF3
	rodata_anim_frame 0, 5
	rodata_anim_frame 2, 5
	rodata_anim_frame 4, 5
	rodata_anim_frame 6, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 10, 5
	rodata_anim_frame 12, 5
	rodata_anim_frame 14, 5
	rodata_anim_jump 0
	.globl gMovePowderParticleAnims
gMovePowderParticleAnims: @ 0x0856DCF8
	semantic_anim_table_entry gMovePowderParticleAnim
	.globl gMovePowderParticleSpriteTemplate_Tag2753
gMovePowderParticleSpriteTemplate_Tag2753: @ 0x0856DCFC
	rodata_sprite_template 0x2753, 0x2753, gOamData_AffineOff_ObjNormal_8x16, gMovePowderParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMovePowderParticle
	.globl gMovePowderParticleSpriteTemplate_Tag2754
gMovePowderParticleSpriteTemplate_Tag2754: @ 0x0856DD14
	rodata_sprite_template 0x2754, 0x2754, gOamData_AffineOff_ObjNormal_8x16, gMovePowderParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMovePowderParticle
	.globl gMovePowderParticleSpriteTemplate_Tag2751
gMovePowderParticleSpriteTemplate_Tag2751: @ 0x0856DD2C
	rodata_sprite_template 0x2751, 0x2751, gOamData_AffineOff_ObjNormal_8x16, gMovePowderParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMovePowderParticle
	.globl gSolarbeamBigOrbAnim_Frame0
gSolarbeamBigOrbAnim_Frame0: @ 0x0856DD44
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame1
gSolarbeamBigOrbAnim_Frame1: @ 0x0856DD4C
	rodata_anim_frame 1, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame2
gSolarbeamBigOrbAnim_Frame2: @ 0x0856DD54
	rodata_anim_frame 2, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame3
gSolarbeamBigOrbAnim_Frame3: @ 0x0856DD5C
	rodata_anim_frame 3, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame4
gSolarbeamBigOrbAnim_Frame4: @ 0x0856DD64
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame5
gSolarbeamBigOrbAnim_Frame5: @ 0x0856DD6C
	rodata_anim_frame 5, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame6
gSolarbeamBigOrbAnim_Frame6: @ 0x0856DD74
	rodata_anim_frame 6, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame7
gSolarbeamBigOrbAnim_Frame7: @ 0x0856DD7C
	rodata_anim_frame 7, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame8
gSolarbeamBigOrbAnim_Frame8: @ 0x0856DD84
	rodata_anim_frame 8, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnims
gSolarbeamBigOrbAnims: @ 0x0856DD8C
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame0
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame1
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame2
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame3
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame4
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame5
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame6
	.globl gSolarbeamSmallOrbAnims
gSolarbeamSmallOrbAnims: @ 0x0856DDA8
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame7
	.globl gPowerAbsorptionOrbAnims
gPowerAbsorptionOrbAnims: @ 0x0856DDAC
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame8
	.globl gPowerAbsorptionOrbAffineAnim
gPowerAbsorptionOrbAffineAnim: @ 0x0856DDB0
	semantic_affine_animcmd_frame -5, -5, 0x00, 0x01
	semantic_affine_animcmd_jump 0
	.globl gPowerAbsorptionOrbAffineAnims
gPowerAbsorptionOrbAffineAnims: @ 0x0856DDC0
	semantic_affine_anim_table_entry gPowerAbsorptionOrbAffineAnim
	.globl gPowerAbsorptionOrbSpriteTemplate
gPowerAbsorptionOrbSpriteTemplate: @ 0x0856DDC4
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineNormal_ObjBlend_16x16, gPowerAbsorptionOrbAnims, 0, gPowerAbsorptionOrbAffineAnims, AnimPowerAbsorptionOrb
	.globl gSolarbeamBigOrbSpriteTemplate
gSolarbeamBigOrbSpriteTemplate: @ 0x0856DDDC
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gSolarbeamBigOrbAnims, 0, gDummySpriteAffineAnimTable, AnimSolarbeamBigOrb
	@ pret/pokeemerald-jp direct xref for 0x0856DDF4: battle_anim_effects_1.s: AnimTask_CreateSmallSolarbeamOrbs
	.globl gSolarbeamSmallOrbSpriteTemplate
gSolarbeamSmallOrbSpriteTemplate: @ 0x0856DDF4
	@ analyzed canonical ROM range 0x0856DDF4-0x0856DE0B
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gSolarbeamSmallOrbAnims, 0, gDummySpriteAffineAnimTable, AnimSolarbeamSmallOrb
	.globl gSolarbeamSmallOrbAffineAnim
gSolarbeamSmallOrbAffineAnim: @ 0x0856DE0C
	semantic_affine_animcmd_frame 0x0140, 0x0140, 0x00, 0x00
	semantic_affine_animcmd_frame -14, -14, 0x00, 0x01
	semantic_affine_animcmd_jump 1
	.globl gSolarbeamSmallOrbAffineAnims
gSolarbeamSmallOrbAffineAnims: @ 0x0856DE24
	semantic_affine_anim_table_entry gSolarbeamSmallOrbAffineAnim
	.globl gPowerAbsorptionOrbSpriteTemplate_Tag27FB
gPowerAbsorptionOrbSpriteTemplate_Tag27FB: @ 0x0856DE28
	rodata_sprite_template 0x27FB, 0x27FB, gOamData_AffineDouble_ObjNormal_8x8, gDummySpriteAnimTable, 0, gSolarbeamSmallOrbAffineAnims, AnimPowerAbsorptionOrb
	.globl gPowerAbsorptionOrbAffineAnim_Loop
gPowerAbsorptionOrbAffineAnim_Loop: @ 0x0856DE40
	semantic_affine_animcmd_frame -5, -5, 0x00, 0x01
	semantic_affine_animcmd_jump 0
	.globl gPowerAbsorptionOrbAffineAnims_Loop
gPowerAbsorptionOrbAffineAnims_Loop: @ 0x0856DE50
	semantic_affine_anim_table_entry gPowerAbsorptionOrbAffineAnim_Loop
	.globl gAbsorptionOrbSpriteTemplate
gAbsorptionOrbSpriteTemplate: @ 0x0856DE54
	@ analyzed canonical ROM range 0x0856DE54-0x0856DE6B
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineNormal_ObjBlend_16x16, gPowerAbsorptionOrbAnims, 0, gPowerAbsorptionOrbAffineAnims_Loop, AnimAbsorptionOrb
	.globl gHyperBeamOrbSpriteTemplate
gHyperBeamOrbSpriteTemplate: @ 0x0856DE6C
	@ analyzed canonical ROM range 0x0856DE6C-0x0856DE83
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gSolarbeamBigOrbAnims, 0, gDummySpriteAffineAnimTable, AnimHyperBeamOrb
	.globl gLeechSeedAnim_Idle
gLeechSeedAnim_Idle: @ 0x0856DE84
	@ analyzed canonical ROM range 0x0856DE84-0x0856DF17
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gLeechSeedAnim_Sprouting
gLeechSeedAnim_Sprouting: @ 0x0856DE8C
	rodata_anim_frame 4, 7
	rodata_anim_frame 8, 7
	rodata_anim_jump 0
	.globl gLeechSeedAnims
gLeechSeedAnims: @ 0x0856DE98
	semantic_anim_table_entry gLeechSeedAnim_Idle
	semantic_anim_table_entry gLeechSeedAnim_Sprouting
	.globl gLeechSeedSpriteTemplate
gLeechSeedSpriteTemplate: @ 0x0856DEA0
	rodata_sprite_template 0x2716, 0x2716, gOamData_AffineOff_ObjNormal_16x16, gLeechSeedAnims, 0, gDummySpriteAffineAnimTable, AnimLeechSeed
	.globl gSporeParticleAnim_Idle
gSporeParticleAnim_Idle: @ 0x0856DEB8
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gSporeParticleAnim_Sprout
gSporeParticleAnim_Sprout: @ 0x0856DEC0
	rodata_anim_frame 4, 7
	rodata_anim_end
	.globl gSporeParticleAnims
gSporeParticleAnims: @ 0x0856DEC8
	semantic_anim_table_entry gSporeParticleAnim_Idle
	semantic_anim_table_entry gSporeParticleAnim_Sprout
	.globl gSporeParticleSpriteTemplate
gSporeParticleSpriteTemplate: @ 0x0856DED0
	rodata_sprite_template 0x27AE, 0x27AE, gOamData_AffineOff_ObjNormal_16x16, gSporeParticleAnims, 0, gDummySpriteAffineAnimTable, AnimSporeParticle
	.globl gPetalDanceBigFlowerAnim_Idle
gPetalDanceBigFlowerAnim_Idle: @ 0x0856DEE8
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gPetalDanceBigFlowerAnim_Bloom
gPetalDanceBigFlowerAnim_Bloom: @ 0x0856DEF0
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl gPetalDanceBigFlowerAnims
gPetalDanceBigFlowerAnims: @ 0x0856DEF8
	semantic_anim_table_entry gPetalDanceBigFlowerAnim_Idle
	.globl gPetalDanceSmallFlowerAnims
gPetalDanceSmallFlowerAnims: @ 0x0856DEFC
	semantic_anim_table_entry gPetalDanceBigFlowerAnim_Bloom
	.globl gPetalDanceBigFlowerSpriteTemplate
gPetalDanceBigFlowerSpriteTemplate: @ 0x0856DF00
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineOff_ObjNormal_16x16, gPetalDanceBigFlowerAnims, 0, gDummySpriteAffineAnimTable, AnimPetalDanceBigFlower
	.globl gPetalDanceSmallFlowerSpriteTemplate
gPetalDanceSmallFlowerSpriteTemplate: @ 0x0856DF18
	@ analyzed canonical ROM range 0x0856DF18-0x0856DF2F
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineOff_ObjNormal_8x8, gPetalDanceSmallFlowerAnims, 0, gDummySpriteAffineAnimTable, AnimPetalDanceSmallFlower
	.globl gRazorLeafParticleAnim_Spin
gRazorLeafParticleAnim_Spin: @ 0x0856DF30
	rodata_anim_frame 0, 5
	rodata_anim_frame 4, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 12, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 20, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 12, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 4, 5
	rodata_anim_jump 0
	.globl gRazorLeafParticleAnim_End
gRazorLeafParticleAnim_End: @ 0x0856DF5C
	rodata_anim_frame 24, 5
	rodata_anim_frame 28, 5
	rodata_anim_frame 32, 5
	rodata_anim_end
	.globl gRazorLeafParticleAnims
gRazorLeafParticleAnims: @ 0x0856DF6C
	semantic_anim_table_entry gRazorLeafParticleAnim_Spin
	semantic_anim_table_entry gRazorLeafParticleAnim_End
	.globl gRazorLeafParticleSpriteTemplate
gRazorLeafParticleSpriteTemplate: @ 0x0856DF74
	rodata_sprite_template 0x274F, 0x274F, gOamData_AffineOff_ObjNormal_16x16, gRazorLeafParticleAnims, 0, gDummySpriteAffineAnimTable, AnimRazorLeafParticle
	.globl gMoveTwisterParticleSpriteTemplate
gMoveTwisterParticleSpriteTemplate: @ 0x0856DF8C
	rodata_sprite_template 0x274F, 0x274F, gOamData_AffineOff_ObjNormal_16x16, gRazorLeafParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMoveTwisterParticle
	.globl gTranslateLinearSingleSineWaveAnim_Tag27B0
gTranslateLinearSingleSineWaveAnim_Tag27B0: @ 0x0856DFA4
	rodata_anim_frame 0, 3
	rodata_anim_frame 0, 3, 1
	rodata_anim_frame 0, 3, 1, 1
	rodata_anim_frame 0, 3, 0, 1
	rodata_anim_jump 0
	.globl gTranslateLinearSingleSineWaveAnims_Tag27B0
gTranslateLinearSingleSineWaveAnims_Tag27B0: @ 0x0856DFB8
	semantic_anim_table_entry gTranslateLinearSingleSineWaveAnim_Tag27B0
	.globl gTranslateLinearSingleSineWaveSpriteTemplate_Tag27B0
gTranslateLinearSingleSineWaveSpriteTemplate_Tag27B0: @ 0x0856DFBC
	rodata_sprite_template 0x27B0, 0x27B0, gOamData_AffineOff_ObjNormal_32x16, gTranslateLinearSingleSineWaveAnims_Tag27B0, 0, gDummySpriteAffineAnimTable, AnimTranslateLinearSingleSineWave
	.globl gTranslateLinearSingleSineWaveAffineAnim
gTranslateLinearSingleSineWaveAffineAnim: @ 0x0856DFD4
	semantic_affine_animcmd_frame 0, 0, 0, 1
	semantic_affine_animcmd_jump 0
	.globl gTranslateLinearSingleSineWaveAffineAnims
gTranslateLinearSingleSineWaveAffineAnims: @ 0x0856DFE4
	semantic_affine_anim_table_entry gTranslateLinearSingleSineWaveAffineAnim
	.globl gTranslateLinearSingleSineWaveSpriteTemplate_Tag27BE
gTranslateLinearSingleSineWaveSpriteTemplate_Tag27BE: @ 0x0856DFE8
	rodata_sprite_template 0x27BE, 0x27BE, gOamData_AffineNormal_ObjNormal_32x32, gDummySpriteAnimTable, 0, gTranslateLinearSingleSineWaveAffineAnims, AnimTranslateLinearSingleSineWave
	.globl gConstrictBindingAnim_Normal
gConstrictBindingAnim_Normal: @ 0x0856E000
	rodata_anim_frame 0, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 64, 4
	rodata_anim_frame 96, 4
	rodata_anim_end
	.globl gConstrictBindingAnim_Flipped
gConstrictBindingAnim_Flipped: @ 0x0856E014
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_frame 64, 4, 1
	rodata_anim_frame 96, 4, 1
	rodata_anim_end
	.globl gConstrictBindingAnims
gConstrictBindingAnims: @ 0x0856E028
	semantic_anim_table_entry gConstrictBindingAnim_Normal
	semantic_anim_table_entry gConstrictBindingAnim_Flipped
	.globl gConstrictBindingAffineAnim_Normal
gConstrictBindingAffineAnim_Normal: @ 0x0856E030
	semantic_affine_animcmd_frame 0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame -11, 0, 0, 6
	semantic_affine_animcmd_frame 11, 0, 0, 6
	rodata_affine_anim_end
	.globl gConstrictBindingAffineAnim_Flipped
gConstrictBindingAffineAnim_Flipped: @ 0x0856E050
	semantic_affine_animcmd_frame -0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame 11, 0, 0, 6
	semantic_affine_animcmd_frame -11, 0, 0, 6
	rodata_affine_anim_end
	.globl gConstrictBindingAffineAnims
gConstrictBindingAffineAnims: @ 0x0856E070
	semantic_affine_anim_table_entry gConstrictBindingAffineAnim_Normal
	semantic_affine_anim_table_entry gConstrictBindingAffineAnim_Flipped
	.globl gConstrictBindingSpriteTemplate
gConstrictBindingSpriteTemplate: @ 0x0856E078
	rodata_sprite_template 0x27CA, 0x27CA, gOamData_AffineNormal_ObjNormal_64x32, gConstrictBindingAnims, 0, gConstrictBindingAffineAnims, AnimConstrictBinding
	.globl gMimicOrbAffineAnim_Grow
gMimicOrbAffineAnim_Grow: @ 0x0856E090
	semantic_affine_animcmd_frame 0, 0, 0, 0
	semantic_affine_animcmd_frame 0x30, 0x30, 0, 14
	rodata_affine_anim_end
	.globl gMimicOrbAffineAnim_Loop
gMimicOrbAffineAnim_Loop: @ 0x0856E0A8
	semantic_affine_animcmd_frame -16, -16, 0, 1
	semantic_affine_animcmd_jump 0
	.globl gMimicOrbAffineAnims
gMimicOrbAffineAnims: @ 0x0856E0B8
	semantic_affine_anim_table_entry gMimicOrbAffineAnim_Grow
	semantic_affine_anim_table_entry gMimicOrbAffineAnim_Loop
	.globl gMimicOrbSpriteTemplate
gMimicOrbSpriteTemplate: @ 0x0856E0C0
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineDouble_ObjNormal_16x16, gPowerAbsorptionOrbAnims, 0, gMimicOrbAffineAnims, AnimMimicOrb
	.globl gIngrainRootAnim_Normal
gIngrainRootAnim_Normal: @ 0x0856E0D8
	rodata_anim_frame 0, 7
	rodata_anim_frame 16, 7
	rodata_anim_frame 32, 7
	rodata_anim_frame 48, 7
	rodata_anim_end
	.globl gIngrainRootAnim_Flipped
gIngrainRootAnim_Flipped: @ 0x0856E0EC
	rodata_anim_frame 0, 7, 1
	rodata_anim_frame 16, 7, 1
	rodata_anim_frame 32, 7, 1
	rodata_anim_frame 48, 7, 1
	rodata_anim_end
	.globl gIngrainRootAnim_Short
gIngrainRootAnim_Short: @ 0x0856E100
	rodata_anim_frame 0, 7
	rodata_anim_frame 16, 7
	rodata_anim_frame 32, 7
	rodata_anim_end
	.globl gIngrainRootAnim_ShortFlipped
gIngrainRootAnim_ShortFlipped: @ 0x0856E110
	rodata_anim_frame 0, 7, 1
	rodata_anim_frame 16, 7, 1
	rodata_anim_frame 32, 7, 1
	rodata_anim_end
	.globl gIngrainRootAnims
gIngrainRootAnims: @ 0x0856E120
	semantic_anim_table_entry gIngrainRootAnim_Normal
	semantic_anim_table_entry gIngrainRootAnim_Flipped
	semantic_anim_table_entry gIngrainRootAnim_Short
	semantic_anim_table_entry gIngrainRootAnim_ShortFlipped
	.globl gIngrainRootSpriteTemplate
gIngrainRootSpriteTemplate: @ 0x0856E130
	rodata_sprite_template 0x27EF, 0x27EF, gOamData_AffineOff_ObjNormal_32x32, gIngrainRootAnims, 0, gDummySpriteAffineAnimTable, AnimIngrainRoot
	.globl gFrenzyPlantRootSpriteTemplate
gFrenzyPlantRootSpriteTemplate: @ 0x0856E148
	rodata_sprite_template 0x27EF, 0x27EF, gOamData_AffineOff_ObjNormal_32x32, gIngrainRootAnims, 0, gDummySpriteAffineAnimTable, AnimFrenzyPlantRoot
	.globl gIngrainOrbAnim
gIngrainOrbAnim: @ 0x0856E160
	rodata_anim_frame 3, 3
	rodata_anim_frame 0, 5
	rodata_anim_jump 0
	.globl gIngrainOrbAnims
gIngrainOrbAnims: @ 0x0856E16C
	semantic_anim_table_entry gIngrainOrbAnim
	.globl gIngrainOrbSpriteTemplate
gIngrainOrbSpriteTemplate: @ 0x0856E170
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gIngrainOrbAnims, 0, gDummySpriteAffineAnimTable, AnimIngrainOrb
	.globl gPresentAnim
gPresentAnim: @ 0x0856E188
	rodata_anim_frame 0, 30
	rodata_anim_end
	.globl gPresentAnims
gPresentAnims: @ 0x0856E190
	semantic_anim_table_entry gPresentAnim
	.globl gPresentAffineAnim_Spin
gPresentAffineAnim_Spin: @ 0x0856E194
	semantic_affine_animcmd_frame 0, 0, 0xFC, 10
	semantic_affine_animcmd_frame 0, 0, 4, 20
	semantic_affine_animcmd_frame 0, 0, 0xFC, 10
	rodata_affine_anim_end
	.globl gPresentAffineAnim_Shake
gPresentAffineAnim_Shake: @ 0x0856E1B4
	semantic_affine_animcmd_frame 0, 0, 0xFF, 2
	semantic_affine_animcmd_frame 0, 0, 1, 4
	semantic_affine_animcmd_frame 0, 0, 0xFF, 4
	semantic_affine_animcmd_frame 0, 0, 1, 4
	semantic_affine_animcmd_frame 0, 0, 0xFF, 4
	semantic_affine_animcmd_frame 0, 0, 1, 2
	rodata_affine_anim_end
	.globl gPresentAffineAnims
gPresentAffineAnims: @ 0x0856E1EC
	semantic_affine_anim_table_entry gPresentAffineAnim_Spin
	semantic_affine_anim_table_entry gPresentAffineAnim_Shake
	.globl gPresentSpriteTemplate
gPresentSpriteTemplate: @ 0x0856E1F4
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gPresentAffineAnims, AnimPresent
	.globl gKnockOffItemSpriteTemplate
gKnockOffItemSpriteTemplate: @ 0x0856E20C
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gPresentAffineAnims, AnimKnockOffItem
	.globl gPresentHealParticleAnim
gPresentHealParticleAnim: @ 0x0856E224
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 8, 4
	rodata_anim_frame 12, 4
	rodata_anim_end
	.globl gPresentHealParticleAnims
gPresentHealParticleAnims: @ 0x0856E238
	semantic_anim_table_entry gPresentHealParticleAnim
	.globl gPresentHealParticleSpriteTemplate
gPresentHealParticleSpriteTemplate: @ 0x0856E23C
	rodata_sprite_template 0x27D3, 0x27D3, gOamData_AffineOff_ObjNormal_16x16, gPresentHealParticleAnims, 0, gDummySpriteAffineAnimTable, AnimPresentHealParticle
	.globl gItemStealSpriteTemplate
gItemStealSpriteTemplate: @ 0x0856E254
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gPresentAffineAnims, AnimItemSteal
	.globl gTrickBagAffineAnim_Idle
gTrickBagAffineAnim_Idle: @ 0x0856E26C
	semantic_affine_animcmd_frame 0, 0, 0, 3
	rodata_affine_anim_end
	.globl gTrickBagAffineAnim_Wobble
gTrickBagAffineAnim_Wobble: @ 0x0856E27C
	semantic_affine_animcmd_frame 0, -10, 0, 3
	semantic_affine_animcmd_frame 0, -6, 0, 3
	semantic_affine_animcmd_frame 0, -2, 0, 3
	semantic_affine_animcmd_frame 0, 0, 0, 3
	semantic_affine_animcmd_frame 0, 2, 0, 3
	semantic_affine_animcmd_frame 0, 6, 0, 3
	semantic_affine_animcmd_frame 0, 10, 0, 3
	rodata_affine_anim_end
	.globl gTrickBagAffineAnims
gTrickBagAffineAnims: @ 0x0856E2BC
	semantic_affine_anim_table_entry gTrickBagAffineAnim_Idle
	semantic_affine_anim_table_entry gTrickBagAffineAnim_Wobble
	semantic_affine_anim_table_entry gPresentAffineAnim_Spin
	semantic_affine_anim_table_entry gPresentAffineAnim_Shake
	.globl gTrickBagSpriteTemplate
gTrickBagSpriteTemplate: @ 0x0856E2CC
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gTrickBagAffineAnims, AnimTrickBag
	.globl gTrickBagSwingSteps
gTrickBagSwingSteps: @ 0x0856E2E4
	.byte 5, 24, 1
	.byte 0, 4, 0
	.byte 8, 16, -1
	.byte 0, 2, 0
	.byte 8, 16, 1
	.byte 0, 2, 0
	.byte 8, 16, 1
	.byte 0, 2, 0
	.byte 8, 16, 1
	.byte 0, 16, 0
	.byte 0, 0, 0x7F
	.byte 0, 0, 0
	.globl gTrickBagItemAnim_Frame28
gTrickBagItemAnim_Frame28: @ 0x0856E308
	rodata_anim_frame 28, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame32
gTrickBagItemAnim_Frame32: @ 0x0856E310
	rodata_anim_frame 32, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame20
gTrickBagItemAnim_Frame20: @ 0x0856E318
	rodata_anim_frame 20, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame28Flipped
gTrickBagItemAnim_Frame28Flipped: @ 0x0856E320
	rodata_anim_frame 28, 1, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame16
gTrickBagItemAnim_Frame16: @ 0x0856E328
	rodata_anim_frame 16, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame16Flipped
gTrickBagItemAnim_Frame16Flipped: @ 0x0856E330
	rodata_anim_frame 16, 1, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame28_2
gTrickBagItemAnim_Frame28_2: @ 0x0856E338
	rodata_anim_frame 28, 1
	rodata_anim_end
	.globl gTrickBagItemAnims
gTrickBagItemAnims: @ 0x0856E340
	semantic_anim_table_entry gTrickBagItemAnim_Frame28
	semantic_anim_table_entry gTrickBagItemAnim_Frame32
	semantic_anim_table_entry gTrickBagItemAnim_Frame20
	semantic_anim_table_entry gTrickBagItemAnim_Frame28Flipped
	semantic_anim_table_entry gTrickBagItemAnim_Frame16
	semantic_anim_table_entry gTrickBagItemAnim_Frame16Flipped
	semantic_anim_table_entry gTrickBagItemAnim_Frame28_2
	.globl gTrickBagItemSpriteTemplate
gTrickBagItemSpriteTemplate: @ 0x0856E35C
	rodata_sprite_template 0x274F, 0x274F, gOamData_AffineOff_ObjNormal_16x16, gTrickBagItemAnims, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gAromatherapyFlowerAffineAnim
gAromatherapyFlowerAffineAnim: @ 0x0856E374
	semantic_affine_animcmd_frame 0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame 0, 0, 4, 1
	semantic_affine_animcmd_jump 1
	.globl gAromatherapyFlowerAffineAnims
gAromatherapyFlowerAffineAnims: @ 0x0856E38C
	semantic_affine_anim_table_entry gAromatherapyFlowerAffineAnim
	.globl gAromatherapySmallFlowerSpriteTemplate
gAromatherapySmallFlowerSpriteTemplate: @ 0x0856E390
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineOff_ObjNormal_8x8, gPetalDanceSmallFlowerAnims, 0, gDummySpriteAffineAnimTable, sub_08100E90
	.globl gAromatherapyBigFlowerSpriteTemplate
gAromatherapyBigFlowerSpriteTemplate: @ 0x0856E3A8
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineNormal_ObjNormal_16x16, gPetalDanceBigFlowerAnims, 0, gAromatherapyFlowerAffineAnims, sub_08100E90
	.globl gSilverWindParticleAffineAnim_Small
gSilverWindParticleAffineAnim_Small: @ 0x0856E3C0
	semantic_affine_animcmd_frame 0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame 0, 0, 0xF6, 1
	semantic_affine_animcmd_jump 1
	.globl gSilverWindParticleAffineAnim_Medium
gSilverWindParticleAffineAnim_Medium: @ 0x0856E3D8
	semantic_affine_animcmd_frame 0xC0, 0xC0, 0, 0
	semantic_affine_animcmd_frame 0, 0, 0xF4, 1
	semantic_affine_animcmd_jump 1
	.globl gSilverWindParticleAffineAnim_Large
gSilverWindParticleAffineAnim_Large: @ 0x0856E3F0
	semantic_affine_animcmd_frame 0x8F, 0x8F, 0, 0
	semantic_affine_animcmd_frame 0, 0, 0xF1, 1
	semantic_affine_animcmd_jump 1
	.globl gSilverWindParticleAffineAnims_Small
gSilverWindParticleAffineAnims_Small: @ 0x0856E408
	semantic_affine_anim_table_entry gSilverWindParticleAffineAnim_Small
	.globl gSilverWindParticleAffineAnims_Medium
gSilverWindParticleAffineAnims_Medium: @ 0x0856E40C
	semantic_affine_anim_table_entry gSilverWindParticleAffineAnim_Medium
	.globl gSilverWindParticleAffineAnims_Large
gSilverWindParticleAffineAnims_Large: @ 0x0856E410
	semantic_affine_anim_table_entry gSilverWindParticleAffineAnim_Large
	.globl gSilverWindParticleSpriteTemplate_Small
gSilverWindParticleSpriteTemplate_Small: @ 0x0856E414
	rodata_sprite_template 0x281F, 0x281F, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gSilverWindParticleAffineAnims_Small, sub_08100E90
	.globl gSilverWindParticleSpriteTemplate_Medium
gSilverWindParticleSpriteTemplate_Medium: @ 0x0856E42C
	rodata_sprite_template 0x281F, 0x281F, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gSilverWindParticleAffineAnims_Medium, sub_08100E90
	.globl gSilverWindParticleSpriteTemplate_Large
gSilverWindParticleSpriteTemplate_Large: @ 0x0856E444
	rodata_sprite_template 0x281F, 0x281F, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gSilverWindParticleAffineAnims_Large, sub_08100E90
	.globl gMagicalLeafBlendColors
gMagicalLeafBlendColors: @ 0x0856E45C
	.2byte 0x001F, 0x027F, 0x03FF, 0x03E0, 0x7DC5, 0x7D56, 0x7EB6
	.2byte 0
	.globl gNeedleArmSpikeSpriteTemplate
gNeedleArmSpikeSpriteTemplate: @ 0x0856E46C
	rodata_sprite_template 0x281A, 0x281A, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081010E8
	.globl gSlamVineWhipAnim_Normal
gSlamVineWhipAnim_Normal: @ 0x0856E484
	rodata_anim_frame 64, 3
	rodata_anim_frame 80, 3
	rodata_anim_frame 96, 3
	rodata_anim_frame 112, 6
	rodata_anim_end
	.globl gSlamVineWhipAnim_Flipped
gSlamVineWhipAnim_Flipped: @ 0x0856E498
	rodata_anim_frame 64, 3, 1
	rodata_anim_frame 80, 3, 1
	rodata_anim_frame 96, 3, 1
	rodata_anim_frame 112, 6, 1
	rodata_anim_end
	.globl gSlamVineWhipAnims
gSlamVineWhipAnims: @ 0x0856E4AC
	semantic_anim_table_entry gSlamVineWhipAnim_Normal
	semantic_anim_table_entry gSlamVineWhipAnim_Flipped
	.globl gSlamImpactSpriteTemplate
gSlamImpactSpriteTemplate: @ 0x0856E4B4
	rodata_sprite_template 0x2748, 0x2748, gOamData_AffineOff_ObjNormal_32x32, gSlamVineWhipAnims, 0, gDummySpriteAffineAnimTable, sub_081012A0
	.globl gVineWhipImpactSpriteTemplate
gVineWhipImpactSpriteTemplate: @ 0x0856E4CC
	rodata_sprite_template 0x282F, 0x282F, gOamData_AffineOff_ObjNormal_32x32, gSlamVineWhipAnims, 0, gDummySpriteAffineAnimTable, sub_081012A0
	.globl sAnim_SlidingHit
sAnim_SlidingHit: @ 0x0856E4E4
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 48, 4
	rodata_anim_frame 64, 5
	rodata_anim_end
	.globl sAnims_SlidingHit
sAnims_SlidingHit: @ 0x0856E4FC
	semantic_anim_table_entry sAnim_SlidingHit
	.globl gBattleAnimEffects1SpriteTemplate_2725
gBattleAnimEffects1SpriteTemplate_2725: @ 0x0856E500
	rodata_sprite_template 0x2725, 0x2725, gOamData_AffineOff_ObjNormal_32x32, sAnims_SlidingHit, 0, gDummySpriteAffineAnimTable, sub_08101248
	.globl gBattleAnimEffects1SpriteTemplate_2726
gBattleAnimEffects1SpriteTemplate_2726: @ 0x0856E518
	rodata_sprite_template 0x2726, 0x2726, gOamData_AffineOff_ObjNormal_32x32, sAnims_SlidingHit, 0, gDummySpriteAffineAnimTable, sub_08101248
	.globl gBattleAnimEffects1AffineAnim_Rot00
gBattleAnimEffects1AffineAnim_Rot00: @ 0x0856E530
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot20
gBattleAnimEffects1AffineAnim_Rot20: @ 0x0856E540
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x20, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot40
gBattleAnimEffects1AffineAnim_Rot40: @ 0x0856E550
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot60
gBattleAnimEffects1AffineAnim_Rot60: @ 0x0856E560
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x60, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot80
gBattleAnimEffects1AffineAnim_Rot80: @ 0x0856E570
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_RotA0
gBattleAnimEffects1AffineAnim_RotA0: @ 0x0856E580
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xA0, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_RotC0
gBattleAnimEffects1AffineAnim_RotC0: @ 0x0856E590
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_RotE0
gBattleAnimEffects1AffineAnim_RotE0: @ 0x0856E5A0
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xE0, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnims_RotationSet
gBattleAnimEffects1AffineAnims_RotationSet: @ 0x0856E5B0
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot00
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot20
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot40
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot60
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot80
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_RotA0
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_RotC0
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_RotE0
	.globl gBattleAnimEffects1SpriteTemplate_279F
gBattleAnimEffects1SpriteTemplate_279F: @ 0x0856E5D0
	rodata_sprite_template 0x279F, 0x279F, gOamData_AffineNormal_ObjNormal_32x32, gDummySpriteAnimTable, 0, gBattleAnimEffects1AffineAnims_RotationSet, sub_081012E4
	.globl gCuttingSliceAnim
gCuttingSliceAnim: @ 0x0856E5E8
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 48, 5
	rodata_anim_end
	.globl gCuttingSliceAnims
gCuttingSliceAnims: @ 0x0856E5FC
	semantic_anim_table_entry gCuttingSliceAnim
	.globl gCuttingSliceSpriteTemplate
gCuttingSliceSpriteTemplate: @ 0x0856E600
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gCuttingSliceAnims, 0, gDummySpriteAffineAnimTable, AnimCuttingSlice
	.globl gAirCutterSliceSpriteTemplate
gAirCutterSliceSpriteTemplate: @ 0x0856E618
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gCuttingSliceAnims, 0, gDummySpriteAffineAnimTable, sub_081013D8
	.globl gMusicNoteAnim_Frame0
gMusicNoteAnim_Frame0: @ 0x0856E630
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame4
gMusicNoteAnim_Frame4: @ 0x0856E638
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame8
gMusicNoteAnim_Frame8: @ 0x0856E640
	rodata_anim_frame 8, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame12
gMusicNoteAnim_Frame12: @ 0x0856E648
	rodata_anim_frame 12, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame16
gMusicNoteAnim_Frame16: @ 0x0856E650
	rodata_anim_frame 16, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame20
gMusicNoteAnim_Frame20: @ 0x0856E658
	rodata_anim_frame 20, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame0Flipped
gMusicNoteAnim_Frame0Flipped: @ 0x0856E660
	rodata_anim_frame 0, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame4Flipped
gMusicNoteAnim_Frame4Flipped: @ 0x0856E668
	rodata_anim_frame 4, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame8Flipped
gMusicNoteAnim_Frame8Flipped: @ 0x0856E670
	rodata_anim_frame 8, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame12Flipped
gMusicNoteAnim_Frame12Flipped: @ 0x0856E678
	rodata_anim_frame 12, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnims
gMusicNoteAnims: @ 0x0856E680
	semantic_anim_table_entry gMusicNoteAnim_Frame0
	semantic_anim_table_entry gMusicNoteAnim_Frame4
	semantic_anim_table_entry gMusicNoteAnim_Frame8
	semantic_anim_table_entry gMusicNoteAnim_Frame12
	semantic_anim_table_entry gMusicNoteAnim_Frame16
	semantic_anim_table_entry gMusicNoteAnim_Frame20
	semantic_anim_table_entry gMusicNoteAnim_Frame0Flipped
	semantic_anim_table_entry gMusicNoteAnim_Frame4Flipped
	semantic_anim_table_entry gMusicNoteAnim_Frame8Flipped
	semantic_anim_table_entry gMusicNoteAnim_Frame12Flipped
	.globl gMusicNoteSpriteTemplate
gMusicNoteSpriteTemplate: @ 0x0856E6A8
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineOff_ObjNormal_16x16, gMusicNoteAnims, 0, gDummySpriteAffineAnimTable, sub_0810166C
	.globl gProtectShieldSpriteTemplate
gProtectShieldSpriteTemplate: @ 0x0856E6C0
	rodata_sprite_template 0x2828, 0x2828, gOamData_AffineOff_ObjBlend_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08101740
	.globl gMilkDrinkDropletAffineAnim_Normal
gMilkDrinkDropletAffineAnim_Normal: @ 0x0856E6D8
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0, 0
	rodata_affine_anim_end
	.globl gMilkDrinkDropletAffineAnim_Wobble
gMilkDrinkDropletAffineAnim_Wobble: @ 0x0856E6E8
	semantic_affine_animcmd_frame 0, 0, 2, 12
	semantic_affine_animcmd_frame 0, 0, 0, 6
	semantic_affine_animcmd_frame 0, 0, 0xFE, 24
	semantic_affine_animcmd_frame 0, 0, 0, 6
	semantic_affine_animcmd_frame 0, 0, 2, 12
	semantic_affine_animcmd_jump 0
	.globl gMilkDrinkDropletAffineAnims
gMilkDrinkDropletAffineAnims: @ 0x0856E718
	semantic_affine_anim_table_entry gMilkDrinkDropletAffineAnim_Normal
	semantic_affine_anim_table_entry gMilkDrinkDropletAffineAnim_Wobble
	.globl gMilkDrinkDropletSpriteTemplate
gMilkDrinkDropletSpriteTemplate: @ 0x0856E720
	rodata_sprite_template 0x2773, 0x2773, gOamData_AffineNormal_ObjBlend_32x32, gDummySpriteAnimTable, 0, gMilkDrinkDropletAffineAnims, sub_0810191C
	.globl gHealingSparkleAnim
gHealingSparkleAnim: @ 0x0856E738
	rodata_anim_frame 0, 7
	rodata_anim_frame 16, 7
	rodata_anim_frame 32, 7
	rodata_anim_frame 48, 7
	rodata_anim_frame 64, 7
	rodata_anim_frame 80, 7
	rodata_anim_frame 96, 7
	rodata_anim_frame 112, 7
	rodata_anim_jump 0
	.globl gHealingSparkleAnims
gHealingSparkleAnims: @ 0x0856E75C
	semantic_anim_table_entry gHealingSparkleAnim
	.globl gHealingSparkleSpriteTemplate
gHealingSparkleSpriteTemplate: @ 0x0856E760
	rodata_sprite_template 0x2741, 0x2741, gOamData_AffineOff_ObjNormal_32x32, gHealingSparkleAnims, 0, gDummySpriteAffineAnimTable, sub_08101B5C
	.globl gAromatherapySparkleSpriteTemplate
gAromatherapySparkleSpriteTemplate: @ 0x0856E778
	rodata_sprite_template 0x2741, 0x2741, gOamData_AffineOff_ObjNormal_32x32, gHealingSparkleAnims, 0, gDummySpriteAffineAnimTable, sub_08101BAC
	.globl sAnim_BubbleBurst
sAnim_BubbleBurst: @ 0x0856E790
	rodata_anim_frame 0, 10
	rodata_anim_frame 4, 10
	rodata_anim_frame 8, 10
	rodata_anim_frame 12, 10
	rodata_anim_frame 16, 26
	rodata_anim_frame 16, 5
	rodata_anim_frame 20, 5
	rodata_anim_frame 24, 15
	rodata_anim_end
	.globl sAnim_BubbleBurst_Flipped
sAnim_BubbleBurst_Flipped: @ 0x0856E7B4
	rodata_anim_frame 0, 10, 1
	rodata_anim_frame 4, 10, 1
	rodata_anim_frame 8, 10, 1
	rodata_anim_frame 12, 10, 1
	rodata_anim_frame 16, 26, 1
	rodata_anim_frame 16, 5, 1
	rodata_anim_frame 20, 5, 1
	rodata_anim_frame 24, 15, 1
	rodata_anim_end
	.globl sAnims_BubbleBurst
sAnims_BubbleBurst: @ 0x0856E7D8
	semantic_anim_table_entry sAnim_BubbleBurst
	semantic_anim_table_entry sAnim_BubbleBurst_Flipped
	.globl gBattleAnimEffects1SpriteTemplate_2730
gBattleAnimEffects1SpriteTemplate_2730: @ 0x0856E7E0
	rodata_sprite_template 0x2730, 0x2730, gOamData_AffineOff_ObjNormal_16x16, sAnims_BubbleBurst, 0, gDummySpriteAffineAnimTable, sub_08101C90
	.globl gSleepZAnim
gSleepZAnim: @ 0x0856E7F8
	rodata_anim_frame 0, 40
	rodata_anim_end
	.globl gSleepZAnims
gSleepZAnims: @ 0x0856E800
	semantic_anim_table_entry gSleepZAnim
	.globl gSleepZAffineAnim_Right
gSleepZAffineAnim_Right: @ 0x0856E804
	semantic_affine_animcmd_frame 20, 20, 0xE2, 0
	semantic_affine_animcmd_frame 8, 8, 1, 24
	rodata_affine_anim_end
	semantic_affine_animcmd_loop 0
	semantic_affine_animcmd_frame 0, 0, 1, 24
	semantic_affine_animcmd_loop 10
	.globl gSleepZAffineAnim_Left
gSleepZAffineAnim_Left: @ 0x0856E834
	semantic_affine_animcmd_frame 20, 20, 0x1E, 0
	semantic_affine_animcmd_frame 8, 8, 0xFF, 24
	rodata_affine_anim_end
	semantic_affine_animcmd_loop 0
	semantic_affine_animcmd_frame 0, 0, 0xFF, 24
	semantic_affine_animcmd_loop 10
	.globl gSleepZAffineAnims
gSleepZAffineAnims: @ 0x0856E864
	semantic_affine_anim_table_entry gSleepZAffineAnim_Right
	semantic_affine_anim_table_entry gSleepZAffineAnim_Left
	.globl gSleepZSpriteTemplate
gSleepZSpriteTemplate: @ 0x0856E86C
	rodata_sprite_template 0x27F4, 0x27F4, gOamData_AffineNormal_ObjNormal_32x32, gSleepZAnims, 0, gSleepZAffineAnims, sub_08101D44
	.globl gLockOnTargetSpriteTemplate
gLockOnTargetSpriteTemplate: @ 0x0856E884
	rodata_sprite_template 0x271E, 0x271E, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08101DFC
	.globl gLockOnRingSpriteTemplate
gLockOnRingSpriteTemplate: @ 0x0856E89C
	rodata_sprite_template 0x271E, 0x271E, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081020E8
	.globl gLockOnRingOffsets
gLockOnRingOffsets: @ 0x0856E8B4
	.byte 64, 64
	.byte 0, -64
	.byte -64, 64
	.byte 32, -32
	.globl gPhysicalStrikeMovementSpriteTemplate
gPhysicalStrikeMovementSpriteTemplate: @ 0x0856E8BC
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08102190
	.globl sTipMonSpriteTemplate
sTipMonSpriteTemplate: @ 0x0856E8D4
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081023E0
	.globl gSlashAnim_Sweep
gSlashAnim_Sweep: @ 0x0856E8EC
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 48, 4
	rodata_anim_end
	.globl gSlashAnim_LastFrame
gSlashAnim_LastFrame: @ 0x0856E900
	rodata_anim_frame 48, 4
	rodata_anim_end
	.globl gSlashAnims
gSlashAnims: @ 0x0856E908
	semantic_anim_table_entry gSlashAnim_Sweep
	semantic_anim_table_entry gSlashAnim_LastFrame
	.globl gSlashSpriteTemplate
gSlashSpriteTemplate: @ 0x0856E910
	rodata_sprite_template 0x27C7, 0x27C7, gOamData_AffineOff_ObjNormal_32x32, gSlashAnims, 0, gDummySpriteAffineAnimTable, sub_08102790
	.globl gFalseSwipeSlashSpriteTemplate
gFalseSwipeSlashSpriteTemplate: @ 0x0856E928
	rodata_sprite_template 0x282E, 0x282E, gOamData_AffineOff_ObjNormal_32x32, gSlashAnims, 0, gDummySpriteAffineAnimTable, sub_081027F8
	.globl gFalseSwipeSliceSpriteTemplate
gFalseSwipeSliceSpriteTemplate: @ 0x0856E940
	rodata_sprite_template 0x282E, 0x282E, gOamData_AffineOff_ObjNormal_32x32, gSlashAnims, 0, gDummySpriteAffineAnimTable, sub_08102840
	.globl gEndureFocusEnergyAnim
gEndureFocusEnergyAnim: @ 0x0856E958
	rodata_anim_frame 0, 4
	rodata_anim_frame 8, 12
	rodata_anim_frame 16, 4
	rodata_anim_frame 24, 4
	rodata_anim_end
	.globl gEndureFocusEnergyAnims
gEndureFocusEnergyAnims: @ 0x0856E96C
	semantic_anim_table_entry gEndureFocusEnergyAnim
	.globl gEndureFocusEnergySpriteTemplate
gEndureFocusEnergySpriteTemplate: @ 0x0856E970
	rodata_sprite_template 0x27C8, 0x27C8, gOamData_AffineOff_ObjNormal_16x32, gEndureFocusEnergyAnims, 0, gDummySpriteAffineAnimTable, sub_08102928
	.globl gSharpenAnim
gSharpenAnim: @ 0x0856E988
	rodata_anim_frame 0, 18
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 18
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 18
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 6
	rodata_anim_frame 48, 18
	rodata_anim_frame 32, 6
	rodata_anim_frame 48, 6
	rodata_anim_frame 64, 18
	rodata_anim_frame 48, 6
	rodata_anim_frame 64, 54
	rodata_anim_end
	.globl gSharpenAnims
gSharpenAnims: @ 0x0856E9C4
	semantic_anim_table_entry gSharpenAnim
	.globl gSharpenSpriteTemplate
gSharpenSpriteTemplate: @ 0x0856E9C8
	rodata_sprite_template 0x27C9, 0x27C9, gOamData_AffineOff_ObjNormal_32x32, gSharpenAnims, 0, gDummySpriteAffineAnimTable, sub_081029CC
	.globl gOctazookaSmokeSpriteTemplate
gOctazookaSmokeSpriteTemplate: @ 0x0856E9E0
	rodata_sprite_template 0x2721, 0x2721, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, TranslateAnimSpriteToTargetMonLocation
	.globl gOctazookaInkAnim
gOctazookaInkAnim: @ 0x0856E9F8
	rodata_anim_frame 0, 3
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 3
	rodata_anim_frame 48, 3
	rodata_anim_frame 64, 3
	rodata_anim_end
	.globl gOctazookaInkAnims
gOctazookaInkAnims: @ 0x0856EA10
	semantic_anim_table_entry gOctazookaInkAnim
	.globl gOctazookaInkSpriteTemplate
gOctazookaInkSpriteTemplate: @ 0x0856EA14
	rodata_sprite_template 0x272E, 0x272E, gOamData_AffineOff_ObjNormal_32x32, gOctazookaInkAnims, 0, gDummySpriteAffineAnimTable, sub_080A7090
	.globl gConversionAnim
gConversionAnim: @ 0x0856EA2C
	rodata_anim_frame 3, 5
	rodata_anim_frame 2, 5
	rodata_anim_frame 1, 5
	rodata_anim_frame 0, 5
	rodata_anim_end
	.globl gConversionAnims
gConversionAnims: @ 0x0856EA40
	semantic_anim_table_entry gConversionAnim
	.globl gConversionAffineAnim
gConversionAffineAnim: @ 0x0856EA44
	rodata_affine_anim_frame 0x0200, 0x0200, 0, 0
	rodata_affine_anim_end
	.globl gConversionAffineAnims
gConversionAffineAnims: @ 0x0856EA54
	semantic_affine_anim_table_entry gConversionAffineAnim
	.globl gConversionSpriteTemplate
gConversionSpriteTemplate: @ 0x0856EA58
	rodata_sprite_template 0x2722, 0x2722, gOamData_AffineDouble_ObjBlend_8x8, gConversionAnims, 0, gConversionAffineAnims, sub_08102AB8
	.globl gConversion2Anim
gConversion2Anim: @ 0x0856EA70
	rodata_anim_frame 0, 5
	rodata_anim_frame 1, 5
	rodata_anim_frame 2, 5
	rodata_anim_frame 3, 5
	rodata_anim_end
	.globl gConversion2Anims
gConversion2Anims: @ 0x0856EA84
	semantic_anim_table_entry gConversion2Anim
	.globl gConversion2SpriteTemplate
gConversion2SpriteTemplate: @ 0x0856EA88
	rodata_sprite_template 0x2722, 0x2722, gOamData_AffineDouble_ObjBlend_8x8, gConversion2Anims, 0, gConversionAffineAnims, sub_08102B9C
	@ pret/pokeemerald-jp direct xref for 0x0856EAA0: battle_anim_effects_1.s: sub_08102EF8
	.globl gBattleAnimSpriteTemplate_MoonlightMoon
gBattleAnimSpriteTemplate_MoonlightMoon: @ 0x0856EAA0
	rodata_sprite_template 0x27D2, 0x27D2, gOamData_AffineOff_ObjBlend_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08102D30
	.globl gMoonlightSparkleAnim
gMoonlightSparkleAnim: @ 0x0856EAB8
	rodata_anim_frame 0, 8
	rodata_anim_frame 4, 8
	rodata_anim_frame 8, 8
	rodata_anim_frame 12, 8
	rodata_anim_jump 0
	.globl gMoonlightSparkleAnims
gMoonlightSparkleAnims: @ 0x0856EACC
	semantic_anim_table_entry gMoonlightSparkleAnim
	@ pret/pokeemerald-jp direct xref for 0x0856EAD0: battle_anim_effects_1.s: sub_08102EF8
	.globl gBattleAnimSpriteTemplate_MoonlightSparkle
gBattleAnimSpriteTemplate_MoonlightSparkle: @ 0x0856EAD0
	rodata_sprite_template 0x27D3, 0x27D3, gOamData_AffineOff_ObjNormal_16x16, gMoonlightSparkleAnims, 0, gDummySpriteAffineAnimTable, sub_08102D90
	.globl gHealingSparkleAnim_Tag272F
gHealingSparkleAnim_Tag272F: @ 0x0856EAE8
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 48, 3
	rodata_anim_frame 64, 5
	rodata_anim_frame 80, 3
	rodata_anim_frame 96, 2
	rodata_anim_frame 0, 2
	rodata_anim_end
	.globl gHealingSparkleAnims_Tag272F
gHealingSparkleAnims_Tag272F: @ 0x0856EB0C
	semantic_anim_table_entry gHealingSparkleAnim_Tag272F
	.globl gHealingSparkleSpriteTemplate_Tag272F
gHealingSparkleSpriteTemplate_Tag272F: @ 0x0856EB10
	rodata_sprite_template 0x272F, 0x272F, gOamData_AffineOff_ObjNormal_32x32, gHealingSparkleAnims_Tag272F, 0, gDummySpriteAffineAnimTable, sub_080A7090
	.globl gHornHitSpriteTemplate
gHornHitSpriteTemplate: @ 0x0856EB28
	rodata_sprite_template 0x2724, 0x2724, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103094
	.globl gSuperFangAnim
gSuperFangAnim: @ 0x0856EB40
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 48, 2
	rodata_anim_end
	.globl gSuperFangAnims
gSuperFangAnims: @ 0x0856EB54
	semantic_anim_table_entry gSuperFangAnim
	.globl gSuperFangSpriteTemplate
gSuperFangSpriteTemplate: @ 0x0856EB58
	rodata_sprite_template 0x27D0, 0x27D0, gOamData_AffineOff_ObjNormal_32x32, gSuperFangAnims, 0, gDummySpriteAffineAnimTable, sub_0810341C
	.globl gSingMusicNoteAnim_0
gSingMusicNoteAnim_0: @ 0x0856EB70
	rodata_anim_frame 0, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_1
gSingMusicNoteAnim_1: @ 0x0856EB78
	rodata_anim_frame 4, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_2
gSingMusicNoteAnim_2: @ 0x0856EB80
	rodata_anim_frame 8, 41
	rodata_anim_end
	.globl gSingMusicNoteAnim_3
gSingMusicNoteAnim_3: @ 0x0856EB88
	rodata_anim_frame 12, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_4
gSingMusicNoteAnim_4: @ 0x0856EB90
	rodata_anim_frame 16, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_5
gSingMusicNoteAnim_5: @ 0x0856EB98
	rodata_anim_frame 20, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_6
gSingMusicNoteAnim_6: @ 0x0856EBA0
	rodata_anim_frame 0, 10, 0, 1
	rodata_anim_end
	.globl gSingMusicNoteAnim_7
gSingMusicNoteAnim_7: @ 0x0856EBA8
	rodata_anim_frame 4, 10, 0, 1
	rodata_anim_end
	.globl gSingMusicNoteAnims
gSingMusicNoteAnims: @ 0x0856EBB0
	semantic_anim_table_entry gSingMusicNoteAnim_0
	semantic_anim_table_entry gSingMusicNoteAnim_1
	semantic_anim_table_entry gSingMusicNoteAnim_2
	semantic_anim_table_entry gSingMusicNoteAnim_3
	semantic_anim_table_entry gSingMusicNoteAnim_4
	semantic_anim_table_entry gSingMusicNoteAnim_5
	semantic_anim_table_entry gSingMusicNoteAnim_6
	semantic_anim_table_entry gSingMusicNoteAnim_7
	.globl gSingMusicNoteAffineAnim
gSingMusicNoteAffineAnim: @ 0x0856EBD0
	semantic_affine_animcmd_frame 12, 12, 0, 16
	semantic_affine_animcmd_frame -12, -12, 0, 16
	semantic_affine_animcmd_jump 0
	.globl gSingMusicNoteAffineAnims
gSingMusicNoteAffineAnims: @ 0x0856EBE8
	semantic_affine_anim_table_entry gSingMusicNoteAffineAnim
	.globl gSingMusicNoteSpriteTemplate
gSingMusicNoteSpriteTemplate: @ 0x0856EBEC
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineDouble_ObjNormal_16x16, gSingMusicNoteAnims, 0, gSingMusicNoteAffineAnims, sub_08103524
	@ pret/pokeemerald-jp direct xref for 0x0856EC04: battle_anim_effects_1.s: sub_08103438, sub_081034F0, sub_08103524, sub_08103634, sub_08103878
	.globl gMusicNotePaletteVariants
gMusicNotePaletteVariants: @ 0x0856EC04
	.2byte 0x2758, 0x7FFF, 0x735F, 0x6ADF, 0x623F, 0x59BF
	.2byte 0x2771, 0x7FFF, 0x6BF9, 0x57F4, 0x43EF, 0x33EA
	.2byte 0x27C9, 0x7FFF, 0x63FF, 0x47FF, 0x2BFF, 0x0FFF
	.2byte 0x27BF, 0x7FFF, 0x7F9A, 0x7F55, 0x7F10, 0x7ECC
	.globl gTeeterDanceMusicNoteSpriteTemplate
gTeeterDanceMusicNoteSpriteTemplate: @ 0x0856EC34
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineDouble_ObjNormal_16x16, gSingMusicNoteAnims, 0, gSingMusicNoteAffineAnims, sub_08103700
	.globl gBellyDrumImpactSpriteTemplate
gBellyDrumImpactSpriteTemplate: @ 0x0856EC4C
	rodata_sprite_template 0x27D1, 0x27D1, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103808
	.globl gBellyDrumMusicNoteAffineAnim
gBellyDrumMusicNoteAffineAnim: @ 0x0856EC64
	semantic_affine_animcmd_frame 160, 160, 0, 0
	semantic_affine_animcmd_frame 4, 4, 0, 1
	semantic_affine_animcmd_jump 1
	.globl gBellyDrumMusicNoteAffineAnims
gBellyDrumMusicNoteAffineAnims: @ 0x0856EC7C
	semantic_affine_anim_table_entry gBellyDrumMusicNoteAffineAnim
	.globl gBellyDrumMusicNoteSpriteTemplate
gBellyDrumMusicNoteSpriteTemplate: @ 0x0856EC80
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineDouble_ObjNormal_16x16, gSingMusicNoteAnims, 0, gBellyDrumMusicNoteAffineAnims, sub_08103878
	.globl gFingerWagAnim_Left
gFingerWagAnim_Left: @ 0x0856EC98
	rodata_anim_frame 0, 2, 1
	rodata_anim_frame 16, 2, 1
	rodata_anim_frame 32, 2, 1
	rodata_anim_frame 48, 2, 1
	rodata_anim_end
	.globl gFingerWagAnim_Right
gFingerWagAnim_Right: @ 0x0856ECAC
	rodata_anim_frame 48, 2, 1
	rodata_anim_frame 32, 2, 1
	rodata_anim_frame 16, 2, 1
	rodata_anim_frame 0, 2, 1
	rodata_anim_end
	.globl gFingerWagAnim_LeftNoFlip
gFingerWagAnim_LeftNoFlip: @ 0x0856ECC0
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 48, 2
	rodata_anim_end
	.globl gFingerWagAnim_RightNoFlip
gFingerWagAnim_RightNoFlip: @ 0x0856ECD4
	rodata_anim_frame 48, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 0, 2
	rodata_anim_end
	.globl gFingerWagAnims
gFingerWagAnims: @ 0x0856ECE8
	semantic_anim_table_entry gFingerWagAnim_Left
	semantic_anim_table_entry gFingerWagAnim_LeftNoFlip
	semantic_anim_table_entry gFingerWagAnim_Right
	semantic_anim_table_entry gFingerWagAnim_RightNoFlip
	@ pret/pokeemerald-jp direct xref for 0x0856ECF8: battle_anim_effects_3.s: sub_0815AF90
	.globl gBattleAnimSpriteTemplate_FingerWag
gBattleAnimSpriteTemplate_FingerWag: @ 0x0856ECF8
	rodata_sprite_template 0x27E1, 0x27E1, gOamData_AffineOff_ObjNormal_32x32, gFingerWagAnims, 0, gDummySpriteAffineAnimTable, sub_081039B4
	.globl gMetronomeHandAffineAnim_Grow
gMetronomeHandAffineAnim_Grow: @ 0x0856ED10
	semantic_affine_animcmd_frame 16, 16, 0, 0
	semantic_affine_animcmd_frame 30, 30, 0, 8
	rodata_affine_anim_end
	.globl gMetronomeHandAffineAnim_Pulse
gMetronomeHandAffineAnim_Pulse: @ 0x0856ED28
	semantic_affine_animcmd_frame 0, 0, 4, 0x0B
	semantic_affine_animcmd_frame 0, 0, 0xFC, 0x0B
	semantic_affine_animcmd_loop 2
	semantic_affine_animcmd_frame -30, -30, 0, 8
	rodata_affine_anim_end
	.globl gMetronomeFingerAffineAnimCmds2_2
gMetronomeFingerAffineAnimCmds2_2: @ 0x0856ED50
	@ Canonical unused alternate Metronome finger affine animation.
	semantic_affine_animcmd_frame 16, 16, 0, 0
	semantic_affine_animcmd_frame 30, 30, 0, 8
	semantic_affine_animcmd_frame 0, 0, 0, 16
	semantic_affine_animcmd_loop 0
	semantic_affine_animcmd_frame 0, 0, 4, 0x0B
	semantic_affine_animcmd_frame 0, 0, -4, 0x0B
	semantic_affine_animcmd_loop 2
	semantic_affine_animcmd_frame -30, -30, 0, 8
	rodata_affine_anim_end
	.globl gMetronomeHandAffineAnims
gMetronomeHandAffineAnims: @ 0x0856ED98
	semantic_affine_anim_table_entry gMetronomeHandAffineAnim_Grow
	semantic_affine_anim_table_entry gMetronomeHandAffineAnim_Pulse
	.globl gMetronomeHandSpriteTemplate
gMetronomeHandSpriteTemplate: @ 0x0856EDA0
	rodata_sprite_template 0x2750, 0x2750, gOamData_AffineDouble_ObjNormal_32x32, gDummySpriteAnimTable, 0, gMetronomeHandAffineAnims, sub_08103A58
	.globl gFollowMeHandSpriteTemplate
gFollowMeHandSpriteTemplate: @ 0x0856EDB8
	rodata_sprite_template 0x2750, 0x2750, gOamData_AffineNormal_ObjNormal_32x32, gDummySpriteAnimTable, 0, gMetronomeHandAffineAnims, sub_08103AD4
	.globl gTauntHandAnim_LeftStill
gTauntHandAnim_LeftStill: @ 0x0856EDD0
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gTauntHandAnim_RightStill
gTauntHandAnim_RightStill: @ 0x0856EDD8
	rodata_anim_frame 0, 1, 1
	rodata_anim_end
	.globl gTauntHandAnim_LeftWag
gTauntHandAnim_LeftWag: @ 0x0856EDE0
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_end
	.globl gTauntHandAnim_RightWag
gTauntHandAnim_RightWag: @ 0x0856EE00
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_end
	.globl gTauntHandAnims
gTauntHandAnims: @ 0x0856EE20
	semantic_anim_table_entry gTauntHandAnim_LeftStill
	semantic_anim_table_entry gTauntHandAnim_RightStill
	semantic_anim_table_entry gTauntHandAnim_LeftWag
	semantic_anim_table_entry gTauntHandAnim_RightWag
	.globl gTauntHandSpriteTemplate
gTauntHandSpriteTemplate: @ 0x0856EE30
	rodata_sprite_template 0x27E6, 0x27E6, gOamData_AffineOff_ObjNormal_32x32, gTauntHandAnims, 0, gDummySpriteAffineAnimTable, sub_08103BE0
	.globl gFollowMeHandSpriteTemplate_Static
gFollowMeHandSpriteTemplate_Static: @ 0x0856EE48
	rodata_sprite_template 0x2750, 0x2750, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103C98
	.globl sAnim_BouncingMusicNote
sAnim_BouncingMusicNote: @ 0x0856EE60
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl sAnims_BouncingMusicNote
sAnims_BouncingMusicNote: @ 0x0856EE68
	semantic_anim_table_entry sAnim_BouncingMusicNote
	.globl sBouncingMusicNoteSpriteTemplate
sBouncingMusicNoteSpriteTemplate: @ 0x0856EE6C
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103CE8
	.globl sVibrateBattlerBackSpriteTemplate
sVibrateBattlerBackSpriteTemplate: @ 0x0856EE84
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103DDC
	.globl sMovingClampSpriteTemplate
sMovingClampSpriteTemplate: @ 0x0856EE9C
	rodata_sprite_template 0x27A1, 0x27A1, gOamData_AffineNormal_ObjBlend_64x64, gDummySpriteAnimTable, 0, 0x08572C44, sub_08103E70
	.globl sAnim_SmallExplosion
sAnim_SmallExplosion: @ 0x0856EEB4
	rodata_anim_frame 0, 9
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 3
	rodata_anim_frame 48, 3
	rodata_anim_end
	.globl sAnims_SmallExplosion
sAnims_SmallExplosion: @ 0x0856EEC8
	semantic_anim_table_entry sAnim_SmallExplosion
	.globl sAffineAnim_SmallExplosion
sAffineAnim_SmallExplosion: @ 0x0856EECC
	semantic_affine_animcmd_frame 0x50, 0x50, 0, 0
	semantic_affine_animcmd_frame 9, 9, 0, 0x12
	rodata_affine_anim_end
	.globl sAffineAnims_SmallExplosion
sAffineAnims_SmallExplosion: @ 0x0856EEE4
	semantic_affine_anim_table_entry sAffineAnim_SmallExplosion
	.globl sSmallExplosionSpriteTemplate
sSmallExplosionSpriteTemplate: @ 0x0856EEE8
	rodata_sprite_template 0x2717, 0x2717, gOamData_AffineNormal_ObjNormal_32x32, sAnims_SmallExplosion, 0, sAffineAnims_SmallExplosion, sub_080A7090
	.globl gKinesisZapEnergyAnim
gKinesisZapEnergyAnim: @ 0x0856EF00
	rodata_anim_frame 0, 3, 1
	rodata_anim_frame 8, 3, 1
	rodata_anim_frame 16, 3, 1
	rodata_anim_frame 24, 3, 1
	rodata_anim_frame 32, 3, 1
	rodata_anim_frame 40, 3, 1
	rodata_anim_frame 48, 3, 1
	.2byte 0xFFFD, 1
	rodata_anim_end
	.globl gKinesisZapEnergyAnims
gKinesisZapEnergyAnims: @ 0x0856EF24
	semantic_anim_table_entry gKinesisZapEnergyAnim
	.globl gKinesisZapEnergySpriteTemplate
gKinesisZapEnergySpriteTemplate: @ 0x0856EF28
	rodata_sprite_template 0x275B, 0x275B, gOamData_AffineOff_ObjNormal_32x16, gKinesisZapEnergyAnims, 0, gDummySpriteAffineAnimTable, Anim_KinesisZapEnergy
	.globl gSwordsDanceBladeAffineAnim
gSwordsDanceBladeAffineAnim: @ 0x0856EF40
	semantic_affine_animcmd_frame 0x10, 0x100, 0, 0
	semantic_affine_animcmd_frame 0x14, 0, 0, 0x0C
	semantic_affine_animcmd_frame 0, 0, 0, 0x20
	rodata_affine_anim_end
	.globl gSwordsDanceBladeAffineAnims
gSwordsDanceBladeAffineAnims: @ 0x0856EF60
	semantic_affine_anim_table_entry gSwordsDanceBladeAffineAnim
	.globl gSwordsDanceBladeSpriteTemplate
gSwordsDanceBladeSpriteTemplate: @ 0x0856EF64
	rodata_sprite_template 0x2715, 0x2715, gOamData_AffineNormal_ObjBlend_32x64, gDummySpriteAnimTable, 0, gSwordsDanceBladeAffineAnims, Anim_SwordsDanceBlade
	.globl gSonicBoomProjectileSpriteTemplate
gSonicBoomProjectileSpriteTemplate: @ 0x0856EF7C
	rodata_sprite_template 0x2713, 0x2713, gOamData_AffineDouble_ObjBlend_32x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, AnimSonicBoomProjectile
	@ pret/pokeemerald-jp direct xref for 0x0856EF94: battle_anim_effects_2.s: sub_0810445C
	.globl gAirCutterProjectileSpriteTemplate
gAirCutterProjectileSpriteTemplate: @ 0x0856EF94
	rodata_sprite_template 0x2713, 0x2713, gOamData_AffineOff_ObjBlend_32x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081042F4
	.globl gSoundWaveAffineAnim_Wide
gSoundWaveAffineAnim_Wide: @ 0x0856EFAC
	semantic_affine_animcmd_frame 0x20, 0x20, 0, 0
	semantic_affine_animcmd_frame 7, 7, 0, 0xC8
	rodata_affine_anim_end
	.globl gSoundWaveAffineAnim_Pulse
gSoundWaveAffineAnim_Pulse: @ 0x0856EFC4
	semantic_affine_animcmd_frame 5, 5, 0, 0x0A
	semantic_affine_animcmd_frame -10, -10, 0, 0x0A
	semantic_affine_animcmd_frame 10, 10, 0, 0x0A
	semantic_affine_animcmd_frame -10, -10, 0, 0x0A
	semantic_affine_animcmd_frame 10, 10, 0, 0x0A
	semantic_affine_animcmd_frame -10, -10, 0, 0x0A
	semantic_affine_animcmd_frame 10, 10, 0, 0x0A
	rodata_affine_anim_end
	.globl gSoundWaveAffineAnims
gSoundWaveAffineAnims: @ 0x0856F004
	semantic_affine_anim_table_entry gSoundWaveAffineAnim_Wide
	.globl gSoundWaveAffineAnims_PulseOnly
gSoundWaveAffineAnims_PulseOnly: @ 0x0856F008
	semantic_affine_anim_table_entry gSoundWaveAffineAnim_Pulse
	.globl gSupersonicWaveSpriteTemplate
gSupersonicWaveSpriteTemplate: @ 0x0856F00C
	rodata_sprite_template 0x27B3, 0x27B3, gOamData_AffineDouble_ObjNormal_16x32, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims, TranslateAnimSpriteToTargetMonLocation
	.globl gScreechWaveSpriteTemplate
gScreechWaveSpriteTemplate: @ 0x0856F024
	rodata_sprite_template 0x27B4, 0x27B4, gOamData_AffineDouble_ObjNormal_16x32, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims, TranslateAnimSpriteToTargetMonLocation
	.globl gMetalSoundWaveSpriteTemplate
gMetalSoundWaveSpriteTemplate: @ 0x0856F03C
	rodata_sprite_template 0x2814, 0x2814, gOamData_AffineDouble_ObjNormal_32x64, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims, TranslateAnimSpriteToTargetMonLocation
	.globl gWaterPulseRingSpriteTemplate
gWaterPulseRingSpriteTemplate: @ 0x0856F054
	rodata_sprite_template 0x2830, 0x2830, gOamData_AffineDouble_ObjNormal_16x32, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims_PulseOnly, sub_081094E4
	.globl gEggBombProjectileSpriteTemplate
gEggBombProjectileSpriteTemplate: @ 0x0856F06C
	rodata_sprite_template 0x27BF, 0x27BF, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_080A7174
	@ pret/pokeemerald-jp direct xref for 0x0856F084: battle_anim_effects_2.s: sub_08104838
	.globl sVoidLinesSpriteTemplate
sVoidLinesSpriteTemplate: @ 0x0856F084
	rodata_sprite_template 0x27C2, 0x27C2, gOamData_AffineOff_ObjBlend_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08104838
	.globl gCoinAnimCmds
gCoinAnimCmds: @ 0x0856F09C
	rodata_anim_frame 8, 1
	rodata_anim_end
	.globl gCoinAnimTable
gCoinAnimTable: @ 0x0856F0A4
	semantic_anim_table_entry gCoinAnimCmds
	.globl gFallingCoinAffineAnimCmds
gFallingCoinAffineAnimCmds: @ 0x0856F0A8
	rodata_affine_anim_frame 0, 0, 0x010A, 0
	semantic_affine_animcmd_jump 0
	.globl gFallingCoinAffineAnimTable
gFallingCoinAffineAnimTable: @ 0x0856F0B8
	semantic_affine_anim_table_entry gFallingCoinAffineAnimCmds
	.globl gCoinThrowSpriteTemplate
gCoinThrowSpriteTemplate: @ 0x0856F0BC
	rodata_sprite_template 0x2774, 0x2774, gOamData_AffineNormal_ObjNormal_16x16, gCoinAnimTable, 0, gDummySpriteAffineAnimTable, sub_081048D8
	.globl gFallingCoinSpriteTemplate
gFallingCoinSpriteTemplate: @ 0x0856F0D4
	rodata_sprite_template 0x2774, 0x2774, gOamData_AffineNormal_ObjNormal_16x16, gCoinAnimTable, 0, gFallingCoinAffineAnimTable, sub_0810498C
	.globl gBulletSeedAffineAnim
gBulletSeedAffineAnim: @ 0x0856F0EC
	rodata_affine_anim_frame 0, 0, 0x0114, 0
	semantic_affine_animcmd_jump 0
	.globl gBulletSeedAffineAnims
gBulletSeedAffineAnims: @ 0x0856F0FC
	semantic_affine_anim_table_entry gBulletSeedAffineAnim
	.globl gBulletSeedSpriteTemplate
gBulletSeedSpriteTemplate: @ 0x0856F100
	rodata_sprite_template 0x2716, 0x2716, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gBulletSeedAffineAnims, sub_08104A14
	.globl gRazorWindTornadoAffineAnim
gRazorWindTornadoAffineAnim: @ 0x0856F118
	semantic_affine_animcmd_frame 0x10, 0x100, 0, 0
	semantic_affine_animcmd_frame 4, 0, 0, 0x28
	rodata_affine_anim_end
	.globl gRazorWindTornadoAffineAnims
gRazorWindTornadoAffineAnims: @ 0x0856F130
	semantic_affine_anim_table_entry gRazorWindTornadoAffineAnim
	.globl gRazorWindTornadoSpriteTemplate
gRazorWindTornadoSpriteTemplate: @ 0x0856F134
	rodata_sprite_template 0x2719, 0x2719, gOamData_AffineNormal_ObjNormal_32x64, gDummySpriteAnimTable, 0, gRazorWindTornadoAffineAnims, Anim_RazorWindTornado
	.globl gViceGripPincerAnim_Left
gViceGripPincerAnim_Left: @ 0x0856F14C
	rodata_anim_frame 0, 3
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 20
	rodata_anim_end
	.globl gViceGripPincerAnim_Right
gViceGripPincerAnim_Right: @ 0x0856F15C
	rodata_anim_frame 0, 3, 1, 1
	rodata_anim_frame 16, 3, 1, 1
	rodata_anim_frame 32, 20, 1, 1
	rodata_anim_end
	.globl gViceGripPincerAnims
gViceGripPincerAnims: @ 0x0856F16C
	semantic_anim_table_entry gViceGripPincerAnim_Left
	semantic_anim_table_entry gViceGripPincerAnim_Right
	.globl gViceGripPincerSpriteTemplate
gViceGripPincerSpriteTemplate: @ 0x0856F174
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gViceGripPincerAnims, 0, gDummySpriteAffineAnimTable, Anim_ViceGripPincer
	.globl gGuillotinePincerAnim_Left
gGuillotinePincerAnim_Left: @ 0x0856F18C
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 1
	rodata_anim_end
	.globl gGuillotinePincerAnim_Right
gGuillotinePincerAnim_Right: @ 0x0856F19C
	rodata_anim_frame 0, 2, 1, 1
	rodata_anim_frame 16, 2, 1, 1
	rodata_anim_frame 32, 1, 1, 1
	rodata_anim_end
	.globl gGuillotinePincerAnims
gGuillotinePincerAnims: @ 0x0856F1AC
	semantic_anim_table_entry gGuillotinePincerAnim_Left
	semantic_anim_table_entry gGuillotinePincerAnim_Right
	.globl gGuillotinePincerSpriteTemplate
gGuillotinePincerSpriteTemplate: @ 0x0856F1B4
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gGuillotinePincerAnims, 0, gDummySpriteAffineAnimTable, Anim_GuillotinePincer
	@ pret/pokeemerald-jp direct xref for 0x0856F1CC: battle_anim_effects_2.s: AnimTask_Splash, AnimTask_SplashStep
	.globl gSplashAffineAnim
gSplashAffineAnim: @ 0x0856F1CC
	rodata_affine_anim_frame -6, 4, 0x0800, 0
	rodata_affine_anim_frame 10, -10, 0x0800, 0
	rodata_affine_anim_frame -4, 6, 0x0800, 0
	rodata_affine_anim_end
	@ pret/pokeemerald-jp direct xref for 0x0856F1EC: battle_anim_effects_2.s: sub_08105304
	.globl gSwaggerBulkUpAffineAnim
gSwaggerBulkUpAffineAnim: @ 0x0856F1EC
	rodata_affine_anim_frame -4, -5, 0x0C00, 0
	rodata_affine_anim_frame 0, 0, 0x1800, 0
	rodata_affine_anim_frame 4, 5, 0x0C00, 0
	rodata_affine_anim_end
	.globl gBreathPuffAnim_Left
gBreathPuffAnim_Left: @ 0x0856F20C
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 4, 40, 1
	rodata_anim_frame 8, 4, 1
	rodata_anim_frame 12, 4, 1
	rodata_anim_end
	.globl gBreathPuffAnim_Right
gBreathPuffAnim_Right: @ 0x0856F220
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 40
	rodata_anim_frame 8, 4
	rodata_anim_frame 12, 4
	rodata_anim_end
	.globl gBreathPuffAnims
gBreathPuffAnims: @ 0x0856F234
	semantic_anim_table_entry gBreathPuffAnim_Left
	semantic_anim_table_entry gBreathPuffAnim_Right
	.globl gBreathPuffSpriteTemplate
gBreathPuffSpriteTemplate: @ 0x0856F23C
	rodata_sprite_template 0x2766, 0x2766, gOamData_AffineOff_ObjNormal_16x16, gBreathPuffAnims, 0, gDummySpriteAffineAnimTable, Anim_BreathPuff
	.globl gAngerMarkAffineAnim
gAngerMarkAffineAnim: @ 0x0856F254
	rodata_affine_anim_frame 11, 11, 0x0800, 0
	rodata_affine_anim_frame -11, -11, 0x0800, 0
	rodata_affine_anim_end
	.globl gAngerMarkAffineAnims
gAngerMarkAffineAnims: @ 0x0856F26C
	semantic_affine_anim_table_entry gAngerMarkAffineAnim
	.globl gAngerMarkSpriteTemplate
gAngerMarkSpriteTemplate: @ 0x0856F270
	rodata_sprite_template 0x2767, 0x2767, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gAngerMarkAffineAnims, Anim_AngerMark
	@ pret/pokeemerald-jp direct xref for 0x0856F288: battle_anim_effects_2.s: sub_08105488
	.globl gGrowAndShrinkAffineAnim
gGrowAndShrinkAffineAnim: @ 0x0856F288
	rodata_affine_anim_frame -10, 9, 0x0700, 0
	rodata_affine_anim_frame 20, -20, 0x0700, 0
	rodata_affine_anim_frame -20, 20, 0x0700, 0
	rodata_affine_anim_frame 10, -9, 0x0700, 0
	semantic_affine_animcmd_loop 2
	rodata_affine_anim_end
	.globl gSketchSpriteTemplate
gSketchSpriteTemplate: @ 0x0856F2B8
	rodata_sprite_template 0x2712, 0x2712, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810586C
	.globl gSnoreZSpriteTemplate
gSnoreZSpriteTemplate: @ 0x0856F2D0
	rodata_sprite_template 0x27D5, 0x27D5, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_080A7200
	.globl gExplosionAnimCmds
gExplosionAnimCmds: @ 0x0856F2E8
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 48, 5
	rodata_anim_end
	.globl gExplosionAnimTable
gExplosionAnimTable: @ 0x0856F2FC
	semantic_anim_table_entry gExplosionAnimCmds
	.globl gExplosionSpriteTemplate
gExplosionSpriteTemplate: @ 0x0856F300
	rodata_sprite_template 0x27D6, 0x27D6, gOamData_AffineOff_ObjNormal_32x32, gExplosionAnimTable, 0, gDummySpriteAffineAnimTable, sub_080A7090
	.globl gSoftBoiledEggAffineAnimCmds1
gSoftBoiledEggAffineAnimCmds1: @ 0x0856F318
	rodata_affine_anim_frame 0, 0, 0x02F8, 0
	rodata_affine_anim_frame 0, 0, 0x0408, 0
	rodata_affine_anim_frame 0, 0, 0x02F8, 0
	semantic_affine_animcmd_jump 0
	.globl gSoftBoiledEggAffineAnimCmds2
gSoftBoiledEggAffineAnimCmds2: @ 0x0856F338
	rodata_affine_anim_frame 0x100, 0x100, 0, 0
	rodata_affine_anim_end
	.globl gSoftBoiledEggAffineAnimCmds3
gSoftBoiledEggAffineAnimCmds3: @ 0x0856F348
	rodata_affine_anim_frame -8, 4, 0x0800, 0
	semantic_affine_animcmd_loop 0
	rodata_affine_anim_frame 16, -8, 0x0800, 0
	rodata_affine_anim_frame -16, 8, 0x0800, 0
	semantic_affine_animcmd_loop 1
	rodata_affine_anim_frame 0x100, 0x100, 0, 0
	rodata_affine_anim_frame 0, 0, 0x0F00, 0
	rodata_affine_anim_end
	.globl gSoftBoiledEggAffineAnims
gSoftBoiledEggAffineAnims: @ 0x0856F388
	semantic_affine_anim_table_entry gSoftBoiledEggAffineAnimCmds1
	semantic_affine_anim_table_entry gSoftBoiledEggAffineAnimCmds2
	semantic_affine_anim_table_entry gSoftBoiledEggAffineAnimCmds3
	.globl gSoftBoiledEggSpriteTemplate
gSoftBoiledEggSpriteTemplate: @ 0x0856F394
	rodata_sprite_template 0x27DA, 0x27DA, gOamData_AffineDouble_ObjBlend_32x32, gDummySpriteAnimTable, 0, gSoftBoiledEggAffineAnims, sub_08105D88
	.globl gThinRingExpandingAffineAnimCmds1
gThinRingExpandingAffineAnimCmds1: @ 0x0856F3AC
	rodata_affine_anim_frame 0x10, 0x10, 0, 0
	rodata_affine_anim_frame 0x10, 0x10, 0x1E00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gThinRingExpandingAffineAnimCmds2
gThinRingExpandingAffineAnimCmds2: @ 0x0856F3C4
	rodata_affine_anim_frame 0x10, 0x10, 0, 0
	rodata_affine_anim_frame 0x20, 0x20, 0x0F00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gHyperVoiceRingAffineAnimCmds
gHyperVoiceRingAffineAnimCmds: @ 0x0856F3DC
	rodata_affine_anim_frame 0x10, 0x10, 0, 0
	rodata_affine_anim_frame 11, 11, 0x2D00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gThinRingExpandingAffineAnimTable
gThinRingExpandingAffineAnimTable: @ 0x0856F3F4
	semantic_affine_anim_table_entry gThinRingExpandingAffineAnimCmds1
	semantic_affine_anim_table_entry gThinRingExpandingAffineAnimCmds2
	.globl gHyperVoiceRingAffineAnimTable
gHyperVoiceRingAffineAnimTable: @ 0x0856F3FC
	semantic_affine_anim_table_entry gHyperVoiceRingAffineAnimCmds
	.globl gThinRingExpandingSpriteTemplate
gThinRingExpandingSpriteTemplate: @ 0x0856F400
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjNormal_64x64, gDummySpriteAnimTable, 0, gThinRingExpandingAffineAnimTable, sub_080A7090
	.globl gThinRingShrinkingAffineAnimCmds
gThinRingShrinkingAffineAnimCmds: @ 0x0856F418
	rodata_affine_anim_frame 0x200, 0x200, 0, 0
	rodata_affine_anim_frame -16, -16, 0x1E00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gThinRingShrinkingAffineAnimTable
gThinRingShrinkingAffineAnimTable: @ 0x0856F430
	semantic_affine_anim_table_entry gThinRingShrinkingAffineAnimCmds
	.globl gThinRingShrinkingSpriteTemplate
gThinRingShrinkingSpriteTemplate: @ 0x0856F434
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gThinRingShrinkingAffineAnimTable, sub_080A7090
	.globl gBlendThinRingExpandingSpriteTemplate
gBlendThinRingExpandingSpriteTemplate: @ 0x0856F44C
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gThinRingExpandingAffineAnimTable, sub_08105A14
	.globl gHyperVoiceRingSpriteTemplate
gHyperVoiceRingSpriteTemplate: @ 0x0856F464
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gHyperVoiceRingAffineAnimTable, sub_08105AF4
	.globl gUproarRingSpriteTemplate
gUproarRingSpriteTemplate: @ 0x0856F47C
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gThinRingExpandingAffineAnimTable, sub_08105D38
	@ pret/pokeemerald-jp direct xref for 0x0856F494: battle_anim_effects_2.s: sub_08105FCC
	.globl gExtremeSpeedTaskAffineAnim
gExtremeSpeedTaskAffineAnim: @ 0x0856F494
	rodata_affine_anim_frame 0x60, -13, 0x0800, 0
	rodata_affine_anim_end
	.globl gExtremeSpeedAfterimageAnim
gExtremeSpeedAfterimageAnim: @ 0x0856F4A4
	rodata_anim_frame 0, 3
	rodata_anim_frame 4, 3
	rodata_anim_frame 8, 3
	rodata_anim_frame 4, 3
	rodata_anim_frame 0, 3
	rodata_anim_end
	.globl gExtremeSpeedAfterimageAnims
gExtremeSpeedAfterimageAnims: @ 0x0856F4BC
	semantic_anim_table_entry gExtremeSpeedAfterimageAnim
	@ pret/pokeemerald-jp direct xref for 0x0856F4C0: battle_anim_effects_2.s: sub_08106358
	.globl gExtremeSpeedAfterimageSpriteTemplate
gExtremeSpeedAfterimageSpriteTemplate: @ 0x0856F4C0
	rodata_sprite_template 0x27DF, 0x27DF, gOamData_AffineOff_ObjNormal_16x16, gExtremeSpeedAfterimageAnims, 0, gDummySpriteAffineAnimTable, sub_08106498
	@ pret/pokeemerald-jp direct xref for 0x0856F4D8: battle_anim_effects_2.s: sub_08106358
	.globl gExtremeSpeedAfterimageOffsets
gExtremeSpeedAfterimageOffsets: @ 0x0856F4D8
	.byte 30, 28, -20, 24, 16, 26, -10, 28
	.globl gHealBellRingAnim
gHealBellRingAnim: @ 0x0856F4E0
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 15
	rodata_anim_frame 16, 6
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6, 1
	rodata_anim_frame 32, 15, 1
	rodata_anim_frame 16, 6, 1
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 15
	rodata_anim_frame 16, 6
	rodata_anim_frame 0, 6
	rodata_anim_end
	.globl gHealBellRingAnims
gHealBellRingAnims: @ 0x0856F518
	semantic_anim_table_entry gHealBellRingAnim
	.globl gHealBellRingSpriteTemplate
gHealBellRingSpriteTemplate: @ 0x0856F51C
	rodata_sprite_template 0x27DD, 0x27DD, gOamData_AffineOff_ObjNormal_32x32, gHealBellRingAnims, 0, gDummySpriteAffineAnimTable, sub_080A7090
	@ pret/pokeemerald-jp direct xref for 0x0856F534: battle_anim_effects_2.s: sub_081065B0, sub_081065D8
	.globl gHealBellPaletteTags
gHealBellPaletteTags: @ 0x0856F534
	.2byte 0x27DE, 0x270F, 0x270E, 0
	.globl gHealBellParticleSpriteTemplate
gHealBellParticleSpriteTemplate: @ 0x0856F53C
	rodata_sprite_template 0x27DE, 0x27DE, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106638
	.globl gCharmHeartSpriteTemplate
gCharmHeartSpriteTemplate: @ 0x0856F554
	rodata_sprite_template 0x27E2, 0x27E2, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081066B0
	@ pret/pokeemerald-jp direct xref for 0x0856F56C: battle_anim_effects_2.s: sub_08106870, sub_08106900
	.globl gTrickTaskAffineAnim
gTrickTaskAffineAnim: @ 0x0856F56C
	rodata_affine_anim_frame 10, -13, 0x0A00, 0
	rodata_affine_anim_frame -10, 13, 0x0A00, 0
	rodata_affine_anim_end
	.globl gAttractHeartSpriteTemplate
gAttractHeartSpriteTemplate: @ 0x0856F584
	rodata_sprite_template 0x27E8, 0x27E8, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106990
	.globl gFloatingHeartSpriteTemplate
gFloatingHeartSpriteTemplate: @ 0x0856F59C
	rodata_sprite_template 0x27E8, 0x27E8, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106A14
	.globl gAttractBackgroundHeartSpriteTemplate
gAttractBackgroundHeartSpriteTemplate: @ 0x0856F5B4
	rodata_sprite_template 0x27E8, 0x27E8, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106A9C
	.globl gHiddenPowerOrbAffineAnim
gHiddenPowerOrbAffineAnim: @ 0x0856F5CC
	rodata_affine_anim_frame 0x80, 0x80, 0, 0
	rodata_affine_anim_frame 8, 8, 0x0100, 0
	semantic_affine_animcmd_jump 1
	.globl gHiddenPowerOrbAffineAnims
gHiddenPowerOrbAffineAnims: @ 0x0856F5E4
	semantic_affine_anim_table_entry gHiddenPowerOrbAffineAnim
	.globl gHiddenPowerOrbAttackerSpriteTemplate
gHiddenPowerOrbAttackerSpriteTemplate: @ 0x0856F5E8
	rodata_sprite_template 0x27E9, 0x27E9, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gHiddenPowerOrbAffineAnims, AnimOrbitFast
	.globl gHiddenPowerOrbTargetSpriteTemplate
gHiddenPowerOrbTargetSpriteTemplate: @ 0x0856F600
	rodata_sprite_template 0x27E9, 0x27E9, gOamData_AffineDouble_ObjNormal_16x16, gDummySpriteAnimTable, 0, gHiddenPowerOrbAffineAnims, AnimOrbitScatter
	.globl gSpitUpParticleAffineAnim
gSpitUpParticleAffineAnim: @ 0x0856F618
	rodata_affine_anim_frame 0x80, 0x80, 0, 0
	rodata_affine_anim_frame 8, 8, 0x0100, 0
	semantic_affine_animcmd_jump 1
	.globl gSpitUpParticleAffineAnims
gSpitUpParticleAffineAnims: @ 0x0856F630
	semantic_affine_anim_table_entry gSpitUpParticleAffineAnim
	.globl gSpitUpParticleSpriteTemplate
gSpitUpParticleSpriteTemplate: @ 0x0856F634
	rodata_sprite_template 0x27FD, 0x27FD, gOamData_AffineDouble_ObjNormal_8x8, gDummySpriteAnimTable, 0, gSpitUpParticleAffineAnims, sub_08107194
	.globl gGlareEyeAnim
gGlareEyeAnim: @ 0x0856F64C
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 8, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 0, 4
	rodata_anim_end
	.globl gGlareEyeAnims
gGlareEyeAnims: @ 0x0856F664
	semantic_anim_table_entry gGlareEyeAnim
	.globl gGlareEyeSpriteTemplate
gGlareEyeSpriteTemplate: @ 0x0856F668
	rodata_sprite_template 0x27EA, 0x27EA, gOamData_AffineOff_ObjNormal_16x16, gGlareEyeAnims, 0, gDummySpriteAffineAnimTable, sub_08107208
	.globl gSweetKissAnim
gSweetKissAnim: @ 0x0856F680
	rodata_anim_frame 0, 24
	rodata_anim_end
	.globl gSweetKissAnims
gSweetKissAnims: @ 0x0856F688
	semantic_anim_table_entry gSweetKissAnim
	.globl gSweetKissSpriteTemplate
gSweetKissSpriteTemplate: @ 0x0856F68C
	rodata_sprite_template 0x27EC, 0x27EC, gOamData_AffineOff_ObjNormal_32x32, gSweetKissAnims, 0, gDummySpriteAffineAnimTable, sub_08107220
	.globl gLovelyKissHeartSpriteTemplate
gLovelyKissHeartSpriteTemplate: @ 0x0856F6A4
	rodata_sprite_template 0x27EB, 0x27EB, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08107320
	.globl gLovelyKissAnim_0
gLovelyKissAnim_0: @ 0x0856F6BC
	rodata_anim_frame 0, 3
	rodata_anim_jump 0
	.globl gLovelyKissAnim_1
gLovelyKissAnim_1: @ 0x0856F6C4
	rodata_anim_frame 16, 3
	rodata_anim_jump 0
	.globl gLovelyKissAnims
gLovelyKissAnims: @ 0x0856F6CC
	semantic_anim_table_entry gLovelyKissAnim_0
	semantic_anim_table_entry gLovelyKissAnim_1
	.globl gLovelyKissSpriteTemplate
gLovelyKissSpriteTemplate: @ 0x0856F6D4
	rodata_sprite_template 0x27ED, 0x27ED, gOamData_AffineOff_ObjNormal_32x32, gLovelyKissAnims, 0, gDummySpriteAffineAnimTable, sub_081073A4
	.globl gFurySwipesAnim_0
gFurySwipesAnim_0: @ 0x0856F6EC
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 48, 4
	rodata_anim_end
	.globl gFurySwipesAnim_1
gFurySwipesAnim_1: @ 0x0856F700
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_frame 48, 4, 1
	rodata_anim_end
	.globl gFurySwipesAnims
gFurySwipesAnims: @ 0x0856F714
	semantic_anim_table_entry gFurySwipesAnim_0
	semantic_anim_table_entry gFurySwipesAnim_1
	.globl gFurySwipesSpriteTemplate
gFurySwipesSpriteTemplate: @ 0x0856F71C
	rodata_sprite_template 0x27EE, 0x27EE, gOamData_AffineOff_ObjNormal_32x32, gFurySwipesAnims, 0, gDummySpriteAffineAnimTable, sub_081074D0
	.globl gStruggleAnim_0
gStruggleAnim_0: @ 0x0856F734
	rodata_anim_frame 0, 8
	rodata_anim_frame 16, 8
	rodata_anim_frame 32, 8
	rodata_anim_frame 16, 8
	rodata_anim_end
	.globl gStruggleAnim_1
gStruggleAnim_1: @ 0x0856F748
	rodata_anim_frame 16, 8, 1
	rodata_anim_frame 32, 8, 1
	rodata_anim_frame 16, 8, 1
	rodata_anim_frame 0, 8, 1
	rodata_anim_end
	.globl gStruggleAnims
gStruggleAnims: @ 0x0856F75C
	semantic_anim_table_entry gStruggleAnim_0
	semantic_anim_table_entry gStruggleAnim_1
	.globl gStruggleSpriteTemplate
gStruggleSpriteTemplate: @ 0x0856F764
	rodata_sprite_template 0x27E7, 0x27E7, gOamData_AffineOff_ObjNormal_32x32, gStruggleAnims, 0, gDummySpriteAffineAnimTable, sub_08107520
	@ pret/pokeemerald-jp direct xref for 0x0856F77C: battle_anim_effects_2.s: sub_081075E0
	.globl gUproarTaskAffineAnim
gUproarTaskAffineAnim: @ 0x0856F77C
	rodata_affine_anim_frame -12, 8, 0x0400, 0
	rodata_affine_anim_frame 20, -20, 0x0400, 0
	rodata_affine_anim_frame -8, 12, 0x0400, 0
	rodata_affine_anim_end
	.globl gJaggedMusicNoteSpriteTemplate
gJaggedMusicNoteSpriteTemplate: @ 0x0856F79C
	rodata_sprite_template 0x27F1, 0x27F1, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08107650
	.globl gPerishSongNoteAffineAnim_0
gPerishSongNoteAffineAnim_0: @ 0x0856F7B4
	rodata_affine_anim_frame 0, 0, 0x0500, 0
	rodata_affine_anim_end
	.globl gPerishSongNoteAffineAnim_1
gPerishSongNoteAffineAnim_1: @ 0x0856F7C4
	rodata_affine_anim_frame 0, 0, 0x10F8, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gPerishSongNoteAffineAnim_2
gPerishSongNoteAffineAnim_2: @ 0x0856F7D4
	rodata_affine_anim_frame 0, 0, 0x1008, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gPerishSongNoteAffineAnims
gPerishSongNoteAffineAnims: @ 0x0856F7E4
	semantic_affine_anim_table_entry gPerishSongNoteAffineAnim_0
	semantic_affine_anim_table_entry gPerishSongNoteAffineAnim_1
	semantic_affine_anim_table_entry gPerishSongNoteAffineAnim_2
	.globl gPerishSongMusicNoteSpriteTemplate
gPerishSongMusicNoteSpriteTemplate: @ 0x0856F7F0
	rodata_sprite_template 0x27DE, 0x27DE, gOamData_AffineNormal_ObjNormal_16x16, gSingMusicNoteAnims, 0, gPerishSongNoteAffineAnims, sub_081077B0
	.globl gPerishSongMusicNoteSpriteTemplate_2
gPerishSongMusicNoteSpriteTemplate_2: @ 0x0856F808
	rodata_sprite_template 0x27DE, 0x27DE, gOamData_AffineNormal_ObjNormal_16x16, gSingMusicNoteAnims, 0, gPerishSongNoteAffineAnims, sub_08107750
	.globl gSafeguardAffineAnim_0
gSafeguardAffineAnim_0: @ 0x0856F820
	rodata_affine_anim_frame 0x100, 0x100, 0, 0
	rodata_affine_anim_end
	.globl gSafeguardAffineAnim_1
gSafeguardAffineAnim_1: @ 0x0856F830
	rodata_affine_anim_frame 0x200, 0x100, 0, 0
	rodata_affine_anim_end
	.globl gSafeguardAffineAnims
gSafeguardAffineAnims: @ 0x0856F840
	semantic_affine_anim_table_entry gSafeguardAffineAnim_0
	semantic_affine_anim_table_entry gSafeguardAffineAnim_1
	.globl gSafeguardSpriteTemplate
gSafeguardSpriteTemplate: @ 0x0856F848
	rodata_sprite_template 0x2804, 0x2804, gOamData_AffineDouble_ObjBlend_64x32, gDummySpriteAnimTable, 0, gSafeguardAffineAnims, sub_081078FC
	.globl sUnusedWater_Gfx
sUnusedWater_Gfx: @ 0x0856F860
	@ Canonical unused battle-animation water graphics.
	.incbin "build/graphics/battle_anims/unused/water_gfx.4bpp"

	.globl sUnusedWater
sUnusedWater: @ 0x0856FBE0
	@ Canonical unused battle-animation water text-BG tilemap.
	.include "build/graphics/battle_anims/unused/water.tilemap.inc"

	.globl sAnim_RainDrop
sAnim_RainDrop: @ 0x08570BE0
	rodata_anim_frame 0, 2
	rodata_anim_frame 8, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 24, 6
	rodata_anim_frame 32, 2
	rodata_anim_frame 40, 2
	rodata_anim_frame 48, 2
	rodata_anim_end

	.globl sAnims_RainDrop
sAnims_RainDrop: @ 0x08570C00
	semantic_anim_table_entry sAnim_RainDrop
