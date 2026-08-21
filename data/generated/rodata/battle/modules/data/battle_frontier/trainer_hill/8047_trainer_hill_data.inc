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
