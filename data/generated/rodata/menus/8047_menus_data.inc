	@ pret/pokeemerald-jp direct xref for 0x085FB96C: trainer_hill.s: sub_081D56F0
	@ Priority B: Trainer Hill runtime template, next-floor map numbers, and party slots.
	@ The former B984 values were accidental constant-name collisions, not abilities/gender/CPSR.
	.set TRAINER_HILL_TEMPLATE_GFX_RIVAL_BRENDAN_NORMAL, 0x64 @ OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	.set TRAINER_HILL_TEMPLATE_ELEVATION_DEFAULT, 3 @ ELEVATION_DEFAULT
	.set TRAINER_HILL_TEMPLATE_MOVEMENT_LOOK_AROUND, 1 @ MOVEMENT_TYPE_LOOK_AROUND
	.set TRAINER_HILL_TEMPLATE_TRAINER_TYPE_NORMAL, 1 @ TRAINER_TYPE_NORMAL
	.set TRAINER_HILL_NEXT_MAP_2F, 0x3E @ MAP_NUM(MAP_TRAINER_HILL_2F)
	.set TRAINER_HILL_NEXT_MAP_3F, 0x3F @ MAP_NUM(MAP_TRAINER_HILL_3F)
	.set TRAINER_HILL_NEXT_MAP_4F, 0x40 @ MAP_NUM(MAP_TRAINER_HILL_4F)
	.set TRAINER_HILL_NEXT_MAP_ROOF, 0x41 @ MAP_NUM(MAP_TRAINER_HILL_ROOF)
	.globl gTrainerHillTrainerObjectEventTemplate
gTrainerHillTrainerObjectEventTemplate: @ 0x085FB96C
	.byte 0                                      @ localId, set at runtime
	.byte TRAINER_HILL_TEMPLATE_GFX_RIVAL_BRENDAN_NORMAL @ graphicsId, set at runtime
	.byte 0                                      @ OBJ_KIND_NORMAL
	.byte 0                                      @ padding
	.2byte 0, 0                                  @ x, y, set at runtime
	.byte TRAINER_HILL_TEMPLATE_ELEVATION_DEFAULT
	.byte TRAINER_HILL_TEMPLATE_MOVEMENT_LOOK_AROUND
	.byte (1 << 4) | 1                           @ movementRangeY=1, movementRangeX=1
	.byte 0                                      @ padding
	.2byte TRAINER_HILL_TEMPLATE_TRAINER_TYPE_NORMAL
	.2byte 0                                     @ trainer range, set at runtime
	.4byte 0                                     @ script, set at runtime
	.2byte 0                                     @ flagId
	.2byte 0                                     @ padding

	.globl gTrainerHillNextFloorMapNums
gTrainerHillNextFloorMapNums: @ 0x085FB984
	.4byte TRAINER_HILL_NEXT_MAP_2F
	.4byte TRAINER_HILL_NEXT_MAP_3F
	.4byte TRAINER_HILL_NEXT_MAP_4F
	.4byte TRAINER_HILL_NEXT_MAP_ROOF

	.globl gTrainerHillTrainerPartySlots
gTrainerHillTrainerPartySlots: @ 0x085FB994
	.byte 0, 1, 2
	.byte 3, 4, 5
	.2byte 0 @ alignment
	@ Priority A external graphics/palette targets identified from pret rayquaza_scene.c.
	@ Local aliases emit no bytes and avoid depending on C static symbol visibility.
	.set gPriorityARayDuoFightGroudonGfx, 0x08DA2120 @ gRaySceneDuoFight_Groudon_Gfx
	.set gPriorityARayDuoFightGroudonPal, 0x08DA3618 @ gRaySceneDuoFight_Groudon_Pal
	.set gPriorityARayDuoFightGroudonShoulderGfx, 0x08DA2D04 @ gRaySceneDuoFight_GroudonShoulder_Gfx
	.set gPriorityARayDuoFightGroudonClawGfx, 0x08DA2DD0 @ gRaySceneDuoFight_GroudonClaw_Gfx
	.set gPriorityARayDuoFightKyogreGfx, 0x08DA2FC4 @ gRaySceneDuoFight_Kyogre_Gfx
	.set gPriorityARayDuoFightKyogrePal, 0x08DA3640 @ gRaySceneDuoFight_Kyogre_Pal
	.set gPriorityARayDuoFightKyogrePectoralFinGfx, 0x08DA34F8 @ gRaySceneDuoFight_KyogrePectoralFin_Gfx
	.set gPriorityARayDuoFightKyogreDorsalFinGfx, 0x08DA354C @ gRaySceneDuoFight_KyogreDorsalFin_Gfx
	.set gPriorityARayTakesFlightSmokeGfx, 0x08DA3E68 @ gRaySceneTakesFlight_Smoke_Gfx
	.set gPriorityARayTakesFlightSmokePal, 0x08DA3F24 @ gRaySceneTakesFlight_Smoke_Pal
	.set gPriorityARayDescendsRayquazaGfx, 0x08DA66E8 @ gRaySceneDescends_Rayquaza_Gfx
	.set gPriorityARayDescendsRayquazaTailGfx, 0x08DA6B54 @ gRaySceneDescends_RayquazaTail_Gfx
	.set gPriorityARayTakesFlightRayquazaPal, 0x08DA5050 @ gRaySceneTakesFlight_Rayquaza_Pal
	.set gPriorityARayChasesAwayGroudonGfx, 0x08DA9180 @ gRaySceneChasesAway_Groudon_Gfx
	.set gPriorityARayChasesAwayGroudonTailGfx, 0x08DA9918 @ gRaySceneChasesAway_GroudonTail_Gfx
	.set gPriorityARayChasesAwayKyogreGfx, 0x08DA995C @ gRaySceneChasesAway_Kyogre_Gfx
	.set gPriorityARayChasesAwayRayquazaGfx, 0x08DA9BA4 @ gRaySceneChasesAway_Rayquaza_Gfx
	.set gPriorityARayChasesAwayRayquazaTailGfx, 0x08DAA84C @ gRaySceneChasesAway_RayquazaTail_Gfx
	.set gPriorityARayChasesAwayKyogreSplashGfx, 0x08DAAA3C @ gRaySceneChasesAway_KyogreSplash_Gfx
	.set gPriorityARayChasesAwayGroudonPal, 0x08DAAAD4 @ gRaySceneChasesAway_Groudon_Pal
	.set gPriorityARayChasesAwayKyogrePal, 0x08DAAAFC @ gRaySceneChasesAway_Kyogre_Pal
	.set gPriorityARayChasesAwayRayquazaPal, 0x08DAAB24 @ gRaySceneChasesAway_Rayquaza_Pal
	.set gPriorityARayChasesAwayKyogreSplashPal, 0x08DAAB4C @ gRaySceneChasesAway_KyogreSplash_Pal

	.globl gRayquazaSceneTasksForAnimations
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
gRayquazaSceneAnim_ChasesAway_KyogreSplash: @ 0x085FBF04
	rodata_anim_frame 0x0, 0x8, 0, 0
	rodata_anim_frame 0x4, 0x8, 0, 0
	rodata_anim_frame 0x8, 0x8, 0, 0
	rodata_anim_frame 0xC, 0x8, 0, 0
	rodata_anim_frame 0x10, 0x8, 0, 0
	rodata_anim_frame 0x14, 0x8, 0, 0
	rodata_anim_jump 0x0
	.globl gRayquazaSceneAnims_ChasesAway_KyogreSplash
gRayquazaSceneAnims_ChasesAway_KyogreSplash: @ 0x085FBF20
	.4byte gRayquazaSceneAnim_ChasesAway_KyogreSplash
	.globl gRayquazaSceneSpriteSheet_ChasesAway_Groudon
gRayquazaSceneSpriteSheet_ChasesAway_Groudon: @ 0x085FBF24
	rodata_compressed_sprite_sheet gPriorityARayChasesAwayGroudonGfx, 0x1800, 0x7765
	.globl gRayquazaSceneSpriteSheet_ChasesAway_GroudonTail
gRayquazaSceneSpriteSheet_ChasesAway_GroudonTail: @ 0x085FBF2C
	rodata_compressed_sprite_sheet gPriorityARayChasesAwayGroudonTailGfx, 0x0080, 0x7766
	.globl gRayquazaSceneSpriteSheet_ChasesAway_Kyogre
gRayquazaSceneSpriteSheet_ChasesAway_Kyogre: @ 0x085FBF34
	rodata_compressed_sprite_sheet gPriorityARayChasesAwayKyogreGfx, 0x0600, 0x7768
	.globl gRayquazaSceneSpriteSheet_ChasesAway_Rayquaza
gRayquazaSceneSpriteSheet_ChasesAway_Rayquaza: @ 0x085FBF3C
	rodata_compressed_sprite_sheet gPriorityARayChasesAwayRayquazaGfx, 0x2000, 0x7769
	.globl gRayquazaSceneSpriteSheet_ChasesAway_RayquazaTail
gRayquazaSceneSpriteSheet_ChasesAway_RayquazaTail: @ 0x085FBF44
	rodata_compressed_sprite_sheet gPriorityARayChasesAwayRayquazaTailGfx, 0x0800, 0x776A
	.globl gRayquazaSceneSpriteSheet_ChasesAway_KyogreSplash
gRayquazaSceneSpriteSheet_ChasesAway_KyogreSplash: @ 0x085FBF4C
	rodata_compressed_sprite_sheet gPriorityARayChasesAwayKyogreSplashGfx, 0x0300, 0x776B
	.globl gRayquazaSceneSpritePal_ChasesAway_Groudon
gRayquazaSceneSpritePal_ChasesAway_Groudon: @ 0x085FBF54
	rodata_sprite_palette gPriorityARayChasesAwayGroudonPal, 0x7765
	.globl gRayquazaSceneSpritePal_ChasesAway_Kyogre
gRayquazaSceneSpritePal_ChasesAway_Kyogre: @ 0x085FBF5C
	rodata_sprite_palette gPriorityARayChasesAwayKyogrePal, 0x7768
	.globl gRayquazaSceneSpritePal_ChasesAway_Rayquaza
gRayquazaSceneSpritePal_ChasesAway_Rayquaza: @ 0x085FBF64
	rodata_sprite_palette gPriorityARayChasesAwayRayquazaPal, 0x7769
	.globl gRayquazaSceneSpritePal_ChasesAway_KyogreSplash
gRayquazaSceneSpritePal_ChasesAway_KyogreSplash: @ 0x085FBF6C
	rodata_sprite_palette gPriorityARayChasesAwayKyogreSplashPal, 0x776B
	.globl gRayquazaSceneSpriteTemplate_ChasesAway_Groudon
gRayquazaSceneSpriteTemplate_ChasesAway_Groudon: @ 0x085FBF74
	rodata_sprite_template 0x7765, 0x7765, gRayquazaSceneOam_64x64, gRayquazaSceneAnims_ChasesAway_Groudon, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteTemplate_ChasesAway_GroudonTail
gRayquazaSceneSpriteTemplate_ChasesAway_GroudonTail: @ 0x085FBF8C
	rodata_sprite_template 0x7766, 0x7765, gRayquazaSceneOam_16x16, gRayquazaSceneAnims_ChasesAway_GroudonTail, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteTemplate_ChasesAway_Kyogre
gRayquazaSceneSpriteTemplate_ChasesAway_Kyogre: @ 0x085FBFA4
	rodata_sprite_template 0x7768, 0x7768, gRayquazaSceneOam_32x32, gRayquazaSceneAnims_ChasesAway_Kyogre, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteTemplate_ChasesAway_Rayquaza
gRayquazaSceneSpriteTemplate_ChasesAway_Rayquaza: @ 0x085FBFBC
	rodata_sprite_template 0x7769, 0x7769, gRayquazaSceneOam_64x64, gRayquazaSceneAnims_ChasesAway_Rayquaza, 0, gDummySpriteAffineAnimTable, sub_081D8F58
	.globl gRayquazaSceneSpriteTemplate_ChasesAway_RayquazaTail
gRayquazaSceneSpriteTemplate_ChasesAway_RayquazaTail: @ 0x085FBFD4
	rodata_sprite_template 0x776A, 0x7769, gRayquazaSceneOam_32x32, gRayquazaSceneAnims_ChasesAway_RayquazaTail, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneSpriteTemplate_ChasesAway_KyogreSplash
gRayquazaSceneSpriteTemplate_ChasesAway_KyogreSplash: @ 0x085FBFEC
	rodata_sprite_template 0x776B, 0x776B, gRayquazaSceneOam_32x8, gRayquazaSceneAnims_ChasesAway_KyogreSplash, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gRayquazaSceneBgTemplates_ChasesAway
gRayquazaSceneBgTemplates_ChasesAway: @ 0x085FC004
	bg_template 0x0, 0x1, 0x1F, 0x0, 0x0, 0x1, 0x0
	bg_template 0x1, 0x1, 0x1E, 0x0, 0x0, 0x2, 0x0
	bg_template 0x2, 0x0, 0x1D, 0x0, 0x0, 0x0, 0x0
	@ pret/pokeemerald-jp direct xref for 0x085FC010: walda_phrase.s: CB2_HandleGivenWaldaPhrase
	@ Priority B: localized default Walda phrase (pret gText_Peekaboo equivalent).
	.globl gWaldaDefaultPhrase
gWaldaDefaultPhrase: @ 0x085FC010
	.byte 0x02, 0x15, 0x02, 0x02, 0x15, 0x02, 0x46, 0x01, 0xAE, 0xFF
	.2byte 0 @ alignment
	@ Priority B: gym leader rematch table indices.
	.set GYM_REMATCH_ROXANNE, 0x0041 @ REMATCH_ROXANNE
	.set GYM_REMATCH_BRAWLY, 0x0042 @ REMATCH_BRAWLY
	.set GYM_REMATCH_WATTSON, 0x0043 @ REMATCH_WATTSON
	.set GYM_REMATCH_FLANNERY, 0x0044 @ REMATCH_FLANNERY
	.set GYM_REMATCH_NORMAN, 0x0045 @ REMATCH_NORMAN
	.set GYM_REMATCH_WINONA, 0x0046 @ REMATCH_WINONA
	.set GYM_REMATCH_TATE_AND_LIZA, 0x0047 @ REMATCH_TATE_AND_LIZA
	.set GYM_REMATCH_JUAN, 0x0048 @ REMATCH_JUAN
	.globl gGymLeaderRematches_AfterNewMauville
gGymLeaderRematches_AfterNewMauville: @ 0x085FC01C
	.2byte GYM_REMATCH_ROXANNE
	.2byte GYM_REMATCH_BRAWLY
	.2byte GYM_REMATCH_WATTSON
	.2byte GYM_REMATCH_FLANNERY
	.2byte GYM_REMATCH_NORMAN
	.2byte GYM_REMATCH_WINONA
	.2byte GYM_REMATCH_TATE_AND_LIZA
	.2byte GYM_REMATCH_JUAN

	.globl gGymLeaderRematches_BeforeNewMauville
gGymLeaderRematches_BeforeNewMauville: @ 0x085FC02C
	.2byte GYM_REMATCH_ROXANNE
	.2byte GYM_REMATCH_BRAWLY
	.2byte GYM_REMATCH_FLANNERY
	.2byte GYM_REMATCH_NORMAN
	.2byte GYM_REMATCH_WINONA
	.2byte GYM_REMATCH_TATE_AND_LIZA
	.2byte GYM_REMATCH_JUAN
	.2byte 0 @ alignment
	@ Priority B: Battle Frontier logo-circles transition module.
	.globl gBattleTransitionFrontierLogoCenter_Gfx
gBattleTransitionFrontierLogoCenter_Gfx: @ 0x085FC03C
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_center.4bpp.lz"
	.if (. - gBattleTransitionFrontierLogoCenter_Gfx) != 0x1DC
	.error "frontier logo center gfx exact slot size mismatch"
	.endif

	.globl gBattleTransitionFrontierLogoCenter_Tilemap
gBattleTransitionFrontierLogoCenter_Tilemap: @ 0x085FC218
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_center.bin.lz"
	.if (. - gBattleTransitionFrontierLogoCenter_Tilemap) != 0x1AC
	.error "frontier logo center tilemap exact slot size mismatch"
	.endif

	.globl gBattleTransitionFrontierLogoCircles_Gfx
gBattleTransitionFrontierLogoCircles_Gfx: @ 0x085FC3C4
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_circles.4bpp.lz"
	.if (. - gBattleTransitionFrontierLogoCircles_Gfx) != 0x460
	.error "frontier logo circles gfx exact slot size mismatch"
	.endif

	.globl gBattleTransitionFrontierLogoCircles_Pal
gBattleTransitionFrontierLogoCircles_Pal: @ 0x085FC824
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_circles.gbapal"
	.if (. - gBattleTransitionFrontierLogoCircles_Pal) != 0x20
	.error "frontier logo circles palette size mismatch"
	.endif

	.globl gBattleTransitionFrontierCirclesFiller
gBattleTransitionFrontierCirclesFiller: @ 0x085FC844
	.fill 0x1C0, 1, 0

	.globl gBattleTransitionFrontierLogoCirclesOam
gBattleTransitionFrontierLogoCirclesOam: @ 0x085FCA04
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

	.globl gBattleTransitionFrontierLogoCirclesSpriteSheet
gBattleTransitionFrontierLogoCirclesSpriteSheet: @ 0x085FCA0C
	rodata_compressed_sprite_sheet gBattleTransitionFrontierLogoCircles_Gfx, 0x1800, 0x2E90

	.globl gBattleTransitionFrontierLogoCirclesSpritePalette
gBattleTransitionFrontierLogoCirclesSpritePalette: @ 0x085FCA14
	rodata_sprite_palette gBattleTransitionFrontierLogoCircles_Pal, 0x2E90

	.globl gBattleTransitionFrontierAnim_LogoCircle_Top
gBattleTransitionFrontierAnim_LogoCircle_Top: @ 0x085FCA1C
	rodata_anim_frame 0, 1, 0, 0
	rodata_anim_end
	.globl gBattleTransitionFrontierAnim_LogoCircle_Left
gBattleTransitionFrontierAnim_LogoCircle_Left: @ 0x085FCA24
	rodata_anim_frame 64, 1, 0, 0
	rodata_anim_end
	.globl gBattleTransitionFrontierAnim_LogoCircle_Right
gBattleTransitionFrontierAnim_LogoCircle_Right: @ 0x085FCA2C
	rodata_anim_frame 128, 1, 0, 0
	rodata_anim_end

	.globl gBattleTransitionFrontierAnims_LogoCircles
gBattleTransitionFrontierAnims_LogoCircles: @ 0x085FCA34
	.4byte gBattleTransitionFrontierAnim_LogoCircle_Top
	.4byte gBattleTransitionFrontierAnim_LogoCircle_Left
	.4byte gBattleTransitionFrontierAnim_LogoCircle_Right

	.globl gBattleTransitionFrontierLogoCirclesSpriteTemplate
gBattleTransitionFrontierLogoCirclesSpriteTemplate: @ 0x085FCA40
	rodata_sprite_template 0x2E90, 0x2E90, gBattleTransitionFrontierLogoCirclesOam, gBattleTransitionFrontierAnims_LogoCircles, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gBattleTransitionFrontierCirclesMeet_Funcs
gBattleTransitionFrontierCirclesMeet_Funcs: @ 0x085FCA58
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA464 @ CirclesMeet_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA4D0 @ CirclesMeet_End

	.globl gBattleTransitionFrontierCirclesCross_Funcs
gBattleTransitionFrontierCirclesCross_Funcs: @ 0x085FCA6C
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA53C @ CirclesCross_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA5A8 @ CirclesCross_End

	.globl gBattleTransitionFrontierCirclesAsymmetricSpiral_Funcs
gBattleTransitionFrontierCirclesAsymmetricSpiral_Funcs: @ 0x085FCA80
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA614 @ CirclesAsymmetricSpiral_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA694 @ CirclesAsymmetricSpiral_End

	.globl gBattleTransitionFrontierCirclesSymmetricSpiral_Funcs
gBattleTransitionFrontierCirclesSymmetricSpiral_Funcs: @ 0x085FCA94
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA700 @ CirclesSymmetricSpiral_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA784 @ CirclesSymmetricSpiral_End

	.globl gBattleTransitionFrontierCirclesMeetInSeq_Funcs
gBattleTransitionFrontierCirclesMeetInSeq_Funcs: @ 0x085FCAA8
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA7F0 @ CirclesMeetInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA87C @ CirclesMeetInSeq_End

	.globl gBattleTransitionFrontierCirclesCrossInSeq_Funcs
gBattleTransitionFrontierCirclesCrossInSeq_Funcs: @ 0x085FCABC
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA8E8 @ CirclesCrossInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA974 @ CirclesCrossInSeq_End

	.globl gBattleTransitionFrontierCirclesAsymmetricSpiralInSeq_Funcs
gBattleTransitionFrontierCirclesAsymmetricSpiralInSeq_Funcs: @ 0x085FCAD0
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA9E0 @ CirclesAsymmetricSpiralInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DAA74 @ CirclesAsymmetricSpiralInSeq_End

	.globl gBattleTransitionFrontierCirclesSymmetricSpiralInSeq_Funcs
gBattleTransitionFrontierCirclesSymmetricSpiralInSeq_Funcs: @ 0x085FCAE4
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DAAE0 @ CirclesSymmetricSpiralInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DAB78 @ CirclesSymmetricSpiralInSeq_End

	@ Priority C: Mystery Event Enigma Berry result messages.
	@ These are normal localized strings consumed by MEScrCmd_setenigmaberry.

	.globl gMysteryEventScriptData_085FCAF8
gMysteryEventScriptData_085FCAF8:
	.globl gText_MysteryEventBerry
gText_MysteryEventBerry: @ 0x085FCAF8
	.string "{0xFD}{0x03}のみを　てに　いれた！\nトウカジムの　パパから　うけとろう！$"
	.if (. - gText_MysteryEventBerry) != 0x21
	.error "gText_MysteryEventBerry must retain its original 0x21-byte slot"
	.endif

	.globl gMysteryEventScriptData_085FCB19
gMysteryEventScriptData_085FCB19:
	.globl gText_MysteryEventBerryTransform
gText_MysteryEventBerryTransform: @ 0x085FCB19
	.string "{0xFD}{0x02}のみは\n{0xFD}{0x03}のみに　へんかした！$"
	.if (. - gText_MysteryEventBerryTransform) != 0x13
	.error "gText_MysteryEventBerryTransform must retain its original 0x13-byte slot"
	.endif

	.globl gMysteryEventScriptData_085FCB2C
gMysteryEventScriptData_085FCB2C:
	.globl gText_MysteryEventBerryObtained
gText_MysteryEventBerryObtained: @ 0x085FCB2C
	.string "{0xFD}{0x02}のみは　すでに\nはいっていた$"
	.if (. - gText_MysteryEventBerryObtained) != 0x11
	.error "gText_MysteryEventBerryObtained must retain its original 0x11-byte slot"
	.endif
	.globl gUnknown_85FCB3D
gUnknown_85FCB3D: @ 0x085FCB3D
