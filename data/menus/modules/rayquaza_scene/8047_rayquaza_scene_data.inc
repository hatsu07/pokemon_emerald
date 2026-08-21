gRayquazaSceneTasksForAnimations: @ 0x085FB99C
	.4byte Task_DuoFightAnim
	.4byte Task_DuoFightAnim
	.4byte Task_RayTakesFlightAnim
	.4byte Task_RayDescendsAnim
	.4byte Task_RayChargesAnim
	.4byte Task_RayChasesAwayAnim
	.4byte Task_EndAfterFadeScreen
	.globl gRayquazaSceneOam_64x64
gRayquazaSceneOam_64x64: @ 0x085FB9B8
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_32x32
gRayquazaSceneOam_32x32: @ 0x085FB9C0
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_64x32
gRayquazaSceneOam_64x32: @ 0x085FB9C8
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x3, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_32x16
gRayquazaSceneOam_32x16: @ 0x085FB9D0
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x2, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_16x8
gRayquazaSceneOam_16x8: @ 0x085FB9D8
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_16x32
gRayquazaSceneOam_16x32: @ 0x085FB9E0
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x2, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_16x16
gRayquazaSceneOam_16x16: @ 0x085FB9E8
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneOam_32x8
gRayquazaSceneOam_32x8: @ 0x085FB9F0
	rodata_sprite_oam_data 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x1, 0x0, 0x2, 0x0, 0x0
	.globl gRayquazaSceneAnim_DuoFightPre_Groudon_Head
gRayquazaSceneAnim_DuoFightPre_Groudon_Head: @ 0x085FB9F8
	rodata_anim_frame 0x0, 0x1E, 0, 0
	rodata_anim_frame 0x40, 0x1E, 0, 0
	rodata_anim_frame 0x80, 0x1E, 0, 0
	rodata_anim_frame 0x40, 0x1E, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnim_DuoFightPre_Groudon_Body
gRayquazaSceneAnim_DuoFightPre_Groudon_Body: @ 0x085FBA0C
	rodata_anim_frame 0xC0, 0x1E, 0, 0
	rodata_anim_frame 0x100, 0x1E, 0, 0
	rodata_anim_frame 0x140, 0x1E, 0, 0
	rodata_anim_frame 0x100, 0x1E, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_DuoFightPre_Groudon
gRayquazaSceneAnims_DuoFightPre_Groudon: @ 0x085FBA20
	.4byte gRayquazaSceneAnim_DuoFightPre_Groudon_Head
	.4byte gRayquazaSceneAnim_DuoFightPre_Groudon_Body
	.globl gRayquazaSceneSpriteTemplate_DuoFightPre_Groudon
gRayquazaSceneSpriteTemplate_DuoFightPre_Groudon: @ 0x085FBA28
	rodata_sprite_template 0x7729, 0x7729, gRayquazaSceneOam_64x64, gRayquazaSceneAnims_DuoFightPre_Groudon, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFightPre_GroudonShoulderKyogreDorsalFin
gRayquazaSceneAnim_DuoFightPre_GroudonShoulderKyogreDorsalFin: @ 0x085FBA40
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_DuoFightPre_GroudonShoulderKyogreDorsalFin
gRayquazaSceneAnims_DuoFightPre_GroudonShoulderKyogreDorsalFin: @ 0x085FBA48
	.4byte gRayquazaSceneAnim_DuoFightPre_GroudonShoulderKyogreDorsalFin
	.globl gRayquazaSceneSpriteTemplate_DuoFightPre_GroudonShoulder
gRayquazaSceneSpriteTemplate_DuoFightPre_GroudonShoulder: @ 0x085FBA4C
	rodata_sprite_template 0x772A, 0x7729, gRayquazaSceneOam_32x32, gRayquazaSceneAnims_DuoFightPre_GroudonShoulderKyogreDorsalFin, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFightPre_GroudonClaw
gRayquazaSceneAnim_DuoFightPre_GroudonClaw: @ 0x085FBA64
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_DuoFightPre_GroudonClaw
gRayquazaSceneAnims_DuoFightPre_GroudonClaw: @ 0x085FBA6C
	.4byte gRayquazaSceneAnim_DuoFightPre_GroudonClaw
	.globl gRayquazaSceneSpriteTemplate_DuoFightPre_GroudonClaw
gRayquazaSceneSpriteTemplate_DuoFightPre_GroudonClaw: @ 0x085FBA70
	rodata_sprite_template 0x772B, 0x7729, gRayquazaSceneOam_64x32, gRayquazaSceneAnims_DuoFightPre_GroudonClaw, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_TopLeft
gRayquazaSceneAnim_DuoFightPre_Kyogre_TopLeft: @ 0x085FBA88
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_TopRight
gRayquazaSceneAnim_DuoFightPre_Kyogre_TopRight: @ 0x085FBA90
	rodata_anim_frame 0x8, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_FaceLeft
gRayquazaSceneAnim_DuoFightPre_Kyogre_FaceLeft: @ 0x085FBA98
	rodata_anim_frame 0x10, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_FaceRight
gRayquazaSceneAnim_DuoFightPre_Kyogre_FaceRight: @ 0x085FBAA0
	rodata_anim_frame 0x18, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_ChinLeft
gRayquazaSceneAnim_DuoFightPre_Kyogre_ChinLeft: @ 0x085FBAA8
	rodata_anim_frame 0x20, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_ChinRight
gRayquazaSceneAnim_DuoFightPre_Kyogre_ChinRight: @ 0x085FBAB0
	rodata_anim_frame 0x28, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_LeftPectoralFin
gRayquazaSceneAnim_DuoFightPre_Kyogre_LeftPectoralFin: @ 0x085FBAB8
	rodata_anim_frame 0x30, 0x24, 0, 0
	rodata_anim_frame 0x40, 0x24, 0, 0
	rodata_anim_frame 0x50, 0x24, 0, 0
	rodata_anim_frame 0x40, 0x24, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_LeftShoulder
gRayquazaSceneAnim_DuoFightPre_Kyogre_LeftShoulder: @ 0x085FBACC
	rodata_anim_frame 0x38, 0x24, 0, 0
	rodata_anim_frame 0x48, 0x24, 0, 0
	rodata_anim_frame 0x58, 0x24, 0, 0
	rodata_anim_frame 0x48, 0x24, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnim_DuoFightPre_Kyogre_RightShoulder
gRayquazaSceneAnim_DuoFightPre_Kyogre_RightShoulder: @ 0x085FBAE0
	rodata_anim_frame 0x60, 0x24, 0, 0
	rodata_anim_frame 0x68, 0x24, 0, 0
	rodata_anim_frame 0x70, 0x24, 0, 0
	rodata_anim_frame 0x68, 0x24, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_DuoFightPre_Kyogre
gRayquazaSceneAnims_DuoFightPre_Kyogre: @ 0x085FBAF4
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_TopLeft
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_TopRight
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_FaceLeft
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_FaceRight
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_ChinLeft
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_ChinRight
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_LeftPectoralFin
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_LeftShoulder
	.4byte gRayquazaSceneAnim_DuoFightPre_Kyogre_RightShoulder
	.globl gRayquazaSceneSpriteTemplate_DuoFightPre_Kyogre
gRayquazaSceneSpriteTemplate_DuoFightPre_Kyogre: @ 0x085FBB18
	rodata_sprite_template 0x772C, 0x772C, gRayquazaSceneOam_32x16, gRayquazaSceneAnims_DuoFightPre_Kyogre, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFightPre_KyogrePectoralFin
gRayquazaSceneAnim_DuoFightPre_KyogrePectoralFin: @ 0x085FBB30
	rodata_anim_frame 0x0, 0x24, 0, 0
	rodata_anim_frame 0x2, 0x24, 0, 0
	rodata_anim_frame 0x4, 0x24, 0, 0
	rodata_anim_frame 0x2, 0x24, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_DuoFightPre_KyogrePectoralFin
gRayquazaSceneAnims_DuoFightPre_KyogrePectoralFin: @ 0x085FBB44
	.4byte gRayquazaSceneAnim_DuoFightPre_KyogrePectoralFin
	.globl gRayquazaSceneSpriteTemplate_DuoFightPre_KyogrePectoralFin
gRayquazaSceneSpriteTemplate_DuoFightPre_KyogrePectoralFin: @ 0x085FBB48
	rodata_sprite_template 0x772D, 0x772C, gRayquazaSceneOam_16x8, gRayquazaSceneAnims_DuoFightPre_KyogrePectoralFin, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteTemplate_DuoFightPre_KyogreDorsalFin
gRayquazaSceneSpriteTemplate_DuoFightPre_KyogreDorsalFin: @ 0x085FBB60
	rodata_sprite_template 0x772E, 0x772C, gRayquazaSceneOam_32x32, gRayquazaSceneAnims_DuoFightPre_GroudonShoulderKyogreDorsalFin, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneScanlineParams_DuoFight_Clouds
gRayquazaSceneScanlineParams_DuoFight_Clouds: @ 0x085FBB78
	rayquaza_scanline_params 0x04000014, 0xA2600001, 0x01
	.globl gRayquazaSceneBgTemplates_DuoFight
gRayquazaSceneBgTemplates_DuoFight: @ 0x085FBB84
	bg_template 0x0, 0x0, 0x1F, 0x0, 0x0, 0x0, 0x0
	bg_template 0x1, 0x0, 0x1E, 0x0, 0x0, 0x2, 0x0
	bg_template 0x2, 0x0, 0x1D, 0x0, 0x0, 0x1, 0x0
	.globl gRayquazaSceneAnim_DuoFight_Groudon_Head
gRayquazaSceneAnim_DuoFight_Groudon_Head: @ 0x085FBB90
	rodata_anim_frame 0x0, 0x14, 0, 0
	rodata_anim_frame 0x40, 0x14, 0, 0
	rodata_anim_frame 0x80, 0x14, 0, 0
	rodata_anim_frame 0x40, 0x14, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnim_DuoFight_Groudon_Body
gRayquazaSceneAnim_DuoFight_Groudon_Body: @ 0x085FBBA4
	rodata_anim_frame 0xC0, 0x14, 0, 0
	rodata_anim_frame 0x100, 0x14, 0, 0
	rodata_anim_frame 0x140, 0x14, 0, 0
	rodata_anim_frame 0x100, 0x14, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_DuoFight_Groudon
gRayquazaSceneAnims_DuoFight_Groudon: @ 0x085FBBB8
	.4byte gRayquazaSceneAnim_DuoFight_Groudon_Head
	.4byte gRayquazaSceneAnim_DuoFight_Groudon_Body
	.globl gRayquazaSceneSpriteSheet_DuoFight_Groudon
gRayquazaSceneSpriteSheet_DuoFight_Groudon: @ 0x085FBBC0
	rodata_compressed_sprite_sheet gPriorityARayDuoFightGroudonGfx, 0x3000, 0x7729
	.globl gRayquazaSceneSpritePal_DuoFight_Groudon
gRayquazaSceneSpritePal_DuoFight_Groudon: @ 0x085FBBC8
	rodata_sprite_palette gPriorityARayDuoFightGroudonPal, 0x7729
	.globl gRayquazaSceneSpriteTemplate_DuoFight_Groudon
gRayquazaSceneSpriteTemplate_DuoFight_Groudon: @ 0x085FBBD0
	rodata_sprite_template 0x7729, 0x7729, gRayquazaSceneOam_64x64, gRayquazaSceneAnims_DuoFight_Groudon, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFight_GroudonShoulderKyogreDorsalFin
gRayquazaSceneAnim_DuoFight_GroudonShoulderKyogreDorsalFin: @ 0x085FBBE8
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_DuoFight_GroudonShoulderKyogreDorsalFin
gRayquazaSceneAnims_DuoFight_GroudonShoulderKyogreDorsalFin: @ 0x085FBBF0
	.4byte gRayquazaSceneAnim_DuoFight_GroudonShoulderKyogreDorsalFin
	.globl gRayquazaSceneSpriteSheet_DuoFight_GroudonShoulder
gRayquazaSceneSpriteSheet_DuoFight_GroudonShoulder: @ 0x085FBBF4
	rodata_compressed_sprite_sheet gPriorityARayDuoFightGroudonShoulderGfx, 0x0200, 0x772A
	.globl gRayquazaSceneSpriteTemplate_DuoFight_GroudonShoulder
gRayquazaSceneSpriteTemplate_DuoFight_GroudonShoulder: @ 0x085FBBFC
	rodata_sprite_template 0x772A, 0x7729, gRayquazaSceneOam_32x32, gRayquazaSceneAnims_DuoFight_GroudonShoulderKyogreDorsalFin, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFight_GroudonClaw
gRayquazaSceneAnim_DuoFight_GroudonClaw: @ 0x085FBC14
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_DuoFight_GroudonClaw
gRayquazaSceneAnims_DuoFight_GroudonClaw: @ 0x085FBC1C
	.4byte gRayquazaSceneAnim_DuoFight_GroudonClaw
	.globl gRayquazaSceneSpriteSheet_DuoFight_GroudonClaw
gRayquazaSceneSpriteSheet_DuoFight_GroudonClaw: @ 0x085FBC20
	rodata_compressed_sprite_sheet gPriorityARayDuoFightGroudonClawGfx, 0x0400, 0x772B
	.globl gRayquazaSceneSpriteTemplate_DuoFight_GroudonClaw
gRayquazaSceneSpriteTemplate_DuoFight_GroudonClaw: @ 0x085FBC28
	rodata_sprite_template 0x772B, 0x7729, gRayquazaSceneOam_64x32, gRayquazaSceneAnims_DuoFight_GroudonClaw, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_TopLeft
gRayquazaSceneAnim_DuoFight_Kyogre_TopLeft: @ 0x085FBC40
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_TopRight
gRayquazaSceneAnim_DuoFight_Kyogre_TopRight: @ 0x085FBC48
	rodata_anim_frame 0x8, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_FaceLeft
gRayquazaSceneAnim_DuoFight_Kyogre_FaceLeft: @ 0x085FBC50
	rodata_anim_frame 0x10, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_FaceRight
gRayquazaSceneAnim_DuoFight_Kyogre_FaceRight: @ 0x085FBC58
	rodata_anim_frame 0x18, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_ChinLeft
gRayquazaSceneAnim_DuoFight_Kyogre_ChinLeft: @ 0x085FBC60
	rodata_anim_frame 0x20, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_ChinRight
gRayquazaSceneAnim_DuoFight_Kyogre_ChinRight: @ 0x085FBC68
	rodata_anim_frame 0x28, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_LeftPectoralFin
gRayquazaSceneAnim_DuoFight_Kyogre_LeftPectoralFin: @ 0x085FBC70
	rodata_anim_frame 0x30, 0x18, 0, 0
	rodata_anim_frame 0x40, 0x18, 0, 0
	rodata_anim_frame 0x50, 0x18, 0, 0
	rodata_anim_frame 0x40, 0x18, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_LeftShoulder
gRayquazaSceneAnim_DuoFight_Kyogre_LeftShoulder: @ 0x085FBC84
	rodata_anim_frame 0x38, 0x18, 0, 0
	rodata_anim_frame 0x48, 0x18, 0, 0
	rodata_anim_frame 0x58, 0x18, 0, 0
	rodata_anim_frame 0x48, 0x18, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnim_DuoFight_Kyogre_RightShoulder
gRayquazaSceneAnim_DuoFight_Kyogre_RightShoulder: @ 0x085FBC98
	rodata_anim_frame 0x60, 0x18, 0, 0
	rodata_anim_frame 0x68, 0x18, 0, 0
	rodata_anim_frame 0x70, 0x18, 0, 0
	rodata_anim_frame 0x68, 0x18, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_DuoFight_Kyogre
gRayquazaSceneAnims_DuoFight_Kyogre: @ 0x085FBCAC
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_TopLeft
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_TopRight
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_FaceLeft
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_FaceRight
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_ChinLeft
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_ChinRight
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_LeftPectoralFin
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_LeftShoulder
	.4byte gRayquazaSceneAnim_DuoFight_Kyogre_RightShoulder
	.globl gRayquazaSceneSpriteSheet_DuoFight_Kyogre
gRayquazaSceneSpriteSheet_DuoFight_Kyogre: @ 0x085FBCD0
	rodata_compressed_sprite_sheet gPriorityARayDuoFightKyogreGfx, 0x0F00, 0x772C
	.globl gRayquazaSceneSpritePal_DuoFight_Kyogre
gRayquazaSceneSpritePal_DuoFight_Kyogre: @ 0x085FBCD8
	rodata_sprite_palette gPriorityARayDuoFightKyogrePal, 0x772C
	.globl gRayquazaSceneSpriteTemplate_DuoFight_Kyogre
gRayquazaSceneSpriteTemplate_DuoFight_Kyogre: @ 0x085FBCE0
	rodata_sprite_template 0x772C, 0x772C, gRayquazaSceneOam_32x16, gRayquazaSceneAnims_DuoFight_Kyogre, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneAnim_DuoFight_KyogrePectoralFin
gRayquazaSceneAnim_DuoFight_KyogrePectoralFin: @ 0x085FBCF8
	rodata_anim_frame 0x0, 0x18, 0, 0
	rodata_anim_frame 0x2, 0x18, 0, 0
	rodata_anim_frame 0x4, 0x18, 0, 0
	rodata_anim_frame 0x2, 0x18, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_DuoFight_KyogrePectoralFin
gRayquazaSceneAnims_DuoFight_KyogrePectoralFin: @ 0x085FBD0C
	.4byte gRayquazaSceneAnim_DuoFight_KyogrePectoralFin
	.globl gRayquazaSceneSpriteSheet_DuoFight_KyogrePectoralFin
gRayquazaSceneSpriteSheet_DuoFight_KyogrePectoralFin: @ 0x085FBD10
	rodata_compressed_sprite_sheet gPriorityARayDuoFightKyogrePectoralFinGfx, 0x00C0, 0x772D
	.globl gRayquazaSceneSpriteTemplate_DuoFight_KyogrePectoralFin
gRayquazaSceneSpriteTemplate_DuoFight_KyogrePectoralFin: @ 0x085FBD18
	rodata_sprite_template 0x772D, 0x772C, gRayquazaSceneOam_16x8, gRayquazaSceneAnims_DuoFight_KyogrePectoralFin, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteSheet_DuoFight_KyogreDorsalFin
gRayquazaSceneSpriteSheet_DuoFight_KyogreDorsalFin: @ 0x085FBD30
	rodata_compressed_sprite_sheet gPriorityARayDuoFightKyogreDorsalFinGfx, 0x0200, 0x772E
	.globl gRayquazaSceneSpriteTemplate_DuoFight_KyogreDorsalFin
gRayquazaSceneSpriteTemplate_DuoFight_KyogreDorsalFin: @ 0x085FBD38
	rodata_sprite_template 0x772E, 0x772C, gRayquazaSceneOam_32x32, gRayquazaSceneAnims_DuoFight_GroudonShoulderKyogreDorsalFin, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneBgTemplates_TakesFlight
gRayquazaSceneBgTemplates_TakesFlight: @ 0x085FBD50
	bg_template 0x0, 0x2, 0x1F, 0x0, 0x0, 0x0, 0x0
	bg_template 0x1, 0x0, 0x1E, 0x0, 0x0, 0x2, 0x0
	bg_template 0x2, 0x1, 0x1D, 0x1, 0x0, 0x1, 0x0
	.globl gRayquazaSceneAnim_TakesFlight_Smoke
gRayquazaSceneAnim_TakesFlight_Smoke: @ 0x085FBD5C
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_TakesFlight_Smoke
gRayquazaSceneAnims_TakesFlight_Smoke: @ 0x085FBD64
	.4byte gRayquazaSceneAnim_TakesFlight_Smoke
	.globl gRayquazaSceneAffineAnim_TakesFlight_Smoke
gRayquazaSceneAffineAnim_TakesFlight_Smoke: @ 0x085FBD68
	rodata_affine_anim_frame 0xFFC0, 0xFFC0, 0x0100, 0x0000
	rodata_affine_anim_frame 0x0020, 0x0020, 0x0E00, 0x0000
	rodata_affine_anim_frame 0x0100, 0x0100, 0x0000, 0x0000
	rodata_affine_anim_frame 0x7FFE, 0x0000, 0x0000, 0x0000
	.globl gRayquazaSceneAffineAnims_TakesFlight_Smoke
gRayquazaSceneAffineAnims_TakesFlight_Smoke: @ 0x085FBD88
	.4byte gRayquazaSceneAffineAnim_TakesFlight_Smoke
	.globl gRayquazaSceneSpriteSheet_TakesFlight_Smoke
gRayquazaSceneSpriteSheet_TakesFlight_Smoke: @ 0x085FBD8C
	rodata_compressed_sprite_sheet gPriorityARayTakesFlightSmokeGfx, 0x0100, 0x775B
	.globl gRayquazaSceneSpritePal_TakesFlight_Smoke
gRayquazaSceneSpritePal_TakesFlight_Smoke: @ 0x085FBD94
	rodata_sprite_palette gPriorityARayTakesFlightSmokePal, 0x775B
	.globl gRayquazaSceneSpriteTemplate_TakesFlight_Smoke
gRayquazaSceneSpriteTemplate_TakesFlight_Smoke: @ 0x085FBD9C
	rodata_sprite_template 0x775B, 0x775B, gRayquazaSceneOam_32x16, gRayquazaSceneAnims_TakesFlight_Smoke, 0, gRayquazaSceneAffineAnims_TakesFlight_Smoke, sub_081D7B9C
	.globl gRayquazaSceneTakesFlight_SmokeCoords
gRayquazaSceneTakesFlight_SmokeCoords: @ 0x085FBDB4
	.byte -1, 5
	.byte -3, -4
	.byte 5, -3
	.byte -7, 2
	.byte -9, -1
	.byte 1, -5
	.byte 3, 4
	.byte -5, 3
	.byte 7, -2
	.byte 9, 1
	.globl gRayquazaSceneBgTemplates_Descends
gRayquazaSceneBgTemplates_Descends: @ 0x085FBDC8
	bg_template 0x0, 0x0, 0x1F, 0x0, 0x0, 0x0, 0x0
	bg_template 0x1, 0x1, 0x1E, 0x0, 0x0, 0x1, 0x0
	bg_template 0x2, 0x2, 0x1D, 0x0, 0x0, 0x2, 0x0
	bg_template 0x3, 0x1, 0x1C, 0x0, 0x0, 0x3, 0x0
	.globl gRayquazaSceneAnim_Descends_Rayquaza
gRayquazaSceneAnim_Descends_Rayquaza: @ 0x085FBDD8
	rodata_anim_frame 0x0, 0x20, 0, 0
	rodata_anim_frame 0x40, 0x20, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_Descends_Rayquaza
gRayquazaSceneAnims_Descends_Rayquaza: @ 0x085FBDE4
	.4byte gRayquazaSceneAnim_Descends_Rayquaza
	.globl gRayquazaSceneAnim_Descends_RayquazaTail
gRayquazaSceneAnim_Descends_RayquazaTail: @ 0x085FBDE8
	rodata_anim_frame 0x0, 0x20, 0, 0
	rodata_anim_frame 0x8, 0x20, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_Descends_RayquazaTail
gRayquazaSceneAnims_Descends_RayquazaTail: @ 0x085FBDF4
	.4byte gRayquazaSceneAnim_Descends_RayquazaTail
	.globl gRayquazaSceneSpriteSheet_Descends_Rayquaza
gRayquazaSceneSpriteSheet_Descends_Rayquaza: @ 0x085FBDF8
	rodata_compressed_sprite_sheet gPriorityARayDescendsRayquazaGfx, 0x1000, 0x775C
	.globl gRayquazaSceneSpriteSheet_Descends_RayquazaTail
gRayquazaSceneSpriteSheet_Descends_RayquazaTail: @ 0x085FBE00
	rodata_compressed_sprite_sheet gPriorityARayDescendsRayquazaTailGfx, 0x0200, 0x775D
	.globl gRayquazaSceneSpritePal_Descends_Rayquaza
gRayquazaSceneSpritePal_Descends_Rayquaza: @ 0x085FBE08
	rodata_sprite_palette gPriorityARayTakesFlightRayquazaPal, 0x775C
	.globl gRayquazaSceneSpriteTemplate_Descends_Rayquaza
gRayquazaSceneSpriteTemplate_Descends_Rayquaza: @ 0x085FBE10
	rodata_sprite_template 0x775C, 0x775C, gRayquazaSceneOam_64x64, gRayquazaSceneAnims_Descends_Rayquaza, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteTemplate_Descends_RayquazaTail
gRayquazaSceneSpriteTemplate_Descends_RayquazaTail: @ 0x085FBE28
	rodata_sprite_template 0x775D, 0x775C, gRayquazaSceneOam_16x32, gRayquazaSceneAnims_Descends_RayquazaTail, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneBgTemplates_Charges
gRayquazaSceneBgTemplates_Charges: @ 0x085FBE40
	bg_template 0x0, 0x2, 0x1F, 0x0, 0x0, 0x0, 0x0
	bg_template 0x1, 0x1, 0x1E, 0x0, 0x0, 0x1, 0x0
	bg_template 0x2, 0x2, 0x1D, 0x0, 0x0, 0x2, 0x0
	bg_template 0x3, 0x3, 0x1C, 0x0, 0x0, 0x3, 0x0
	.globl gRayquazaSceneAnim_ChasesAway_Groudon_Still
gRayquazaSceneAnim_ChasesAway_Groudon_Still: @ 0x085FBE50
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_Groudon_Moving
gRayquazaSceneAnim_ChasesAway_Groudon_Moving: @ 0x085FBE58
	rodata_anim_frame 0x0, 0x30, 0, 0
	rodata_anim_frame 0x40, 0x20, 0, 0
	rodata_anim_frame 0x0, 0x30, 0, 0
	rodata_anim_frame 0x80, 0x20, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_ChasesAway_Groudon
gRayquazaSceneAnims_ChasesAway_Groudon: @ 0x085FBE6C
	.4byte gRayquazaSceneAnim_ChasesAway_Groudon_Still
	.4byte gRayquazaSceneAnim_ChasesAway_Groudon_Moving
	.globl gRayquazaSceneAnim_ChasesAway_GroudonTail
gRayquazaSceneAnim_ChasesAway_GroudonTail: @ 0x085FBE74
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_ChasesAway_GroudonTail
gRayquazaSceneAnims_ChasesAway_GroudonTail: @ 0x085FBE7C
	.4byte gRayquazaSceneAnim_ChasesAway_GroudonTail
	.globl gRayquazaSceneAnim_ChasesAway_Kyogre_Front
gRayquazaSceneAnim_ChasesAway_Kyogre_Front: @ 0x085FBE80
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_Kyogre_Back
gRayquazaSceneAnim_ChasesAway_Kyogre_Back: @ 0x085FBE88
	rodata_anim_frame 0x10, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_Kyogre_Tail
gRayquazaSceneAnim_ChasesAway_Kyogre_Tail: @ 0x085FBE90
	rodata_anim_frame 0x20, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_ChasesAway_Kyogre
gRayquazaSceneAnims_ChasesAway_Kyogre: @ 0x085FBE98
	.4byte gRayquazaSceneAnim_ChasesAway_Kyogre_Front
	.4byte gRayquazaSceneAnim_ChasesAway_Kyogre_Back
	.4byte gRayquazaSceneAnim_ChasesAway_Kyogre_Tail
	.globl gRayquazaSceneAnim_ChasesAway_Rayquaza_FlyingDown
gRayquazaSceneAnim_ChasesAway_Rayquaza_FlyingDown: @ 0x085FBEA4
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_Rayquaza_Arriving
gRayquazaSceneAnim_ChasesAway_Rayquaza_Arriving: @ 0x085FBEAC
	rodata_anim_frame 0x40, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_Rayquaza_Floating
gRayquazaSceneAnim_ChasesAway_Rayquaza_Floating: @ 0x085FBEB4
	rodata_anim_frame 0x80, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_Rayquaza_Shouting
gRayquazaSceneAnim_ChasesAway_Rayquaza_Shouting: @ 0x085FBEBC
	rodata_anim_frame 0xC0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_ChasesAway_Rayquaza
gRayquazaSceneAnims_ChasesAway_Rayquaza: @ 0x085FBEC4
	.4byte gRayquazaSceneAnim_ChasesAway_Rayquaza_FlyingDown
	.4byte gRayquazaSceneAnim_ChasesAway_Rayquaza_Arriving
	.4byte gRayquazaSceneAnim_ChasesAway_Rayquaza_Floating
	.4byte gRayquazaSceneAnim_ChasesAway_Rayquaza_Shouting
	.globl gRayquazaSceneAnim_ChasesAway_RayquazaTail_FlyingDown
gRayquazaSceneAnim_ChasesAway_RayquazaTail_FlyingDown: @ 0x085FBED4
	rodata_anim_frame 0x0, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_RayquazaTail_Arriving
gRayquazaSceneAnim_ChasesAway_RayquazaTail_Arriving: @ 0x085FBEDC
	rodata_anim_frame 0x10, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_RayquazaTail_Floating
gRayquazaSceneAnim_ChasesAway_RayquazaTail_Floating: @ 0x085FBEE4
	rodata_anim_frame 0x20, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnim_ChasesAway_RayquazaTail_Shouting
gRayquazaSceneAnim_ChasesAway_RayquazaTail_Shouting: @ 0x085FBEEC
	rodata_anim_frame 0x30, 0x1, 0, 0
	rodata_anim_end
	.globl gRayquazaSceneAnims_ChasesAway_RayquazaTail
gRayquazaSceneAnims_ChasesAway_RayquazaTail: @ 0x085FBEF4
	.4byte gRayquazaSceneAnim_ChasesAway_RayquazaTail_FlyingDown
	.4byte gRayquazaSceneAnim_ChasesAway_RayquazaTail_Arriving
	.4byte gRayquazaSceneAnim_ChasesAway_RayquazaTail_Floating
	.4byte gRayquazaSceneAnim_ChasesAway_RayquazaTail_Shouting
	.globl gRayquazaSceneAnim_ChasesAway_KyogreSplash
