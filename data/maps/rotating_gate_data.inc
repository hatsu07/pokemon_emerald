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
	@ ANALYSIS: SEMANTIC_NUMERIC_ROTATING_GATE_LAYOUT_TABLE
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
