@ Japanese Emerald field-effect script table and command stream.

	.globl gUnknown_8289F5C
gUnknown_8289F5C:
	.globl gFieldEffectScriptPointers
gFieldEffectScriptPointers: @ 0x08289F5C
	.4byte FieldEffectScript_ExclamationMarkIcon1 @ field effect 0: ExclamationMarkIcon1
	.4byte FieldEffectScript_UseCutOnTallGrass @ field effect 1: UseCutOnTallGrass
	.4byte FieldEffectScript_UseCutOnTree @ field effect 2: UseCutOnTree
	.4byte FieldEffectScript_Shadow @ field effect 3: Shadow
	.4byte FieldEffectScript_TallGrass @ field effect 4: TallGrass
	.4byte FieldEffectScript_Ripple @ field effect 5: Ripple
	.4byte FieldEffectScript_FieldMoveShowMon @ field effect 6: FieldMoveShowMon
	.4byte FieldEffectScript_Ash @ field effect 7: Ash
	.4byte FieldEffectScript_SurfBlob @ field effect 8: SurfBlob
	.4byte FieldEffectScript_UseSurf @ field effect 9: UseSurf
	.4byte FieldEffectScript_GroundImpactDust @ field effect 10: GroundImpactDust
	.4byte FieldEffectScript_UseSecretPowerCave @ field effect 11: UseSecretPowerCave
	.4byte FieldEffectScript_JumpTallGrass @ field effect 12: JumpTallGrass
	.4byte FieldEffectScript_SandFootprints @ field effect 13: SandFootprints
	.4byte FieldEffectScript_JumpBigSplash @ field effect 14: JumpBigSplash
	.4byte FieldEffectScript_Splash @ field effect 15: Splash
	.4byte FieldEffectScript_JumpSmallSplash @ field effect 16: JumpSmallSplash
	.4byte FieldEffectScript_LongGrass @ field effect 17: LongGrass
	.4byte FieldEffectScript_JumpLongGrass @ field effect 18: JumpLongGrass
	.4byte FieldEffectScript_UnusedGrass @ field effect 19: UnusedGrass
	.4byte FieldEffectScript_UnusedGrass2 @ field effect 20: UnusedGrass2
	.4byte FieldEffectScript_UnusedSand @ field effect 21: UnusedSand
	.4byte FieldEffectScript_WaterSurfacing @ field effect 22: WaterSurfacing
	.4byte FieldEffectScript_BerryTreeGrowthSparkle @ field effect 23: BerryTreeGrowthSparkle
	.4byte FieldEffectScript_DeepSandFootprints @ field effect 24: DeepSandFootprints
	.4byte FieldEffectScript_PokeCenterHeal @ field effect 25: PokeCenterHeal
	.4byte FieldEffectScript_UseSecretPowerTree @ field effect 26: UseSecretPowerTree
	.4byte FieldEffectScript_UseSecretPowerShrub @ field effect 27: UseSecretPowerShrub
	.4byte FieldEffectScript_TreeDisguise @ field effect 28: TreeDisguise
	.4byte FieldEffectScript_MountainDisguise @ field effect 29: MountainDisguise
	.4byte FieldEffectScript_NPCUseFly @ field effect 30: NPCUseFly
	.4byte FieldEffectScript_UseFly @ field effect 31: UseFly
	.4byte FieldEffectScript_FlyIn @ field effect 32: FlyIn
	.4byte FieldEffectScript_QuestionMarkIcon @ field effect 33: QuestionMarkIcon
	.4byte FieldEffectScript_FeetInFlowingWater @ field effect 34: FeetInFlowingWater
	.4byte FieldEffectScript_BikeTireTracks @ field effect 35: BikeTireTracks
	.4byte FieldEffectScript_SandDisguisePlaceholder @ field effect 36: SandDisguisePlaceholder
	.4byte FieldEffectScript_UseRockSmash @ field effect 37: UseRockSmash
	.4byte FieldEffectScript_UseDig @ field effect 38: UseDig
	.4byte FieldEffectScript_SandPile @ field effect 39: SandPile
	.4byte FieldEffectScript_UseStrength @ field effect 40: UseStrength
	.4byte FieldEffectScript_ShortGrass @ field effect 41: ShortGrass
	.4byte FieldEffectScript_HotSpringsWater @ field effect 42: HotSpringsWater
	.4byte FieldEffectScript_UseWaterfall @ field effect 43: UseWaterfall
	.4byte FieldEffectScript_UseDive @ field effect 44: UseDive
	.4byte FieldEffectScript_PokeballTrail @ field effect 45: PokeballTrail
	.4byte FieldEffectScript_HeartIcon @ field effect 46: HeartIcon
	.4byte FieldEffectScript_Nop47 @ field effect 47: Nop47
	.4byte FieldEffectScript_Nop48 @ field effect 48: Nop48
	.4byte FieldEffectScript_AshPuff @ field effect 49: AshPuff
	.4byte FieldEffectScript_AshLaunch @ field effect 50: AshLaunch
	.4byte FieldEffectScript_SweetScent @ field effect 51: SweetScent
	.4byte FieldEffectScript_SandPillar @ field effect 52: SandPillar
	.4byte FieldEffectScript_Bubbles @ field effect 53: Bubbles
	.4byte FieldEffectScript_Sparkle @ field effect 54: Sparkle
	.4byte FieldEffectScript_ShowSecretPowerCave @ field effect 55: ShowSecretPowerCave
	.4byte FieldEffectScript_ShowSecretPowerTree @ field effect 56: ShowSecretPowerTree
	.4byte FieldEffectScript_ShowSecretPowerShrub @ field effect 57: ShowSecretPowerShrub
	.4byte FieldEffectScript_ShowCutGrass @ field effect 58: ShowCutGrass
	.4byte FieldEffectScript_FieldMoveShowMonInit @ field effect 59: FieldMoveShowMonInit
	.4byte FieldEffectScript_UsePuzzleEffect @ field effect 60: UsePuzzleEffect
	.4byte FieldEffectScript_SecretBaseBootPC @ field effect 61: SecretBaseBootPC
	.4byte FieldEffectScript_HallOfFameRecord @ field effect 62: HallOfFameRecord
	.4byte FieldEffectScript_UseTeleport @ field effect 63: UseTeleport
	.4byte FieldEffectScript_RayquazaSpotlight @ field effect 64: RayquazaSpotlight
	.4byte FieldEffectScript_DestroyDeoxysRock @ field effect 65: DestroyDeoxysRock
	.4byte FieldEffectScript_MoveDeoxysRock @ field effect 66: MoveDeoxysRock

FieldEffectScript_ExclamationMarkIcon1: @ 0x0828A068
	fe_field_eff_callnative 0x080B3D79
	fe_field_eff_end

FieldEffectScript_UseCutOnTallGrass: @ 0x0828A06E
	fe_field_eff_callnative 0x080D330D
	fe_field_eff_end

FieldEffectScript_UseCutOnTree: @ 0x0828A074
	fe_field_eff_callnative 0x080D335D
	fe_field_eff_end

FieldEffectScript_Shadow: @ 0x0828A07A
	fe_field_eff_callnative 0x0815427D
	fe_field_eff_end

FieldEffectScript_TallGrass: @ 0x0828A080
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x081543E9
	fe_field_eff_end

FieldEffectScript_Ripple: @ 0x0828A08A
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08154F91
	fe_field_eff_end

FieldEffectScript_FieldMoveShowMon: @ 0x0828A094
	fe_field_eff_callnative 0x080B7BF5
	fe_field_eff_end

FieldEffectScript_Ash: @ 0x0828A09A
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08155311
	fe_field_eff_end

FieldEffectScript_SurfBlob: @ 0x0828A0A4
	fe_field_eff_callnative 0x08155471
	fe_field_eff_end

FieldEffectScript_UseSurf: @ 0x0828A0AA
	fe_field_eff_callnative 0x080B849D
	fe_field_eff_end

FieldEffectScript_GroundImpactDust: @ 0x0828A0B0
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x081557CD
	fe_field_eff_end

FieldEffectScript_UseSecretPowerCave: @ 0x0828A0BA
	fe_field_eff_callnative 0x080FA96D
	fe_field_eff_end

FieldEffectScript_JumpTallGrass: @ 0x0828A0C0
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08154595
	fe_field_eff_end

FieldEffectScript_SandFootprints: @ 0x0828A0CA
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154A41
	fe_field_eff_end

FieldEffectScript_JumpBigSplash: @ 0x0828A0D4
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154DC9
	fe_field_eff_end

FieldEffectScript_Splash: @ 0x0828A0DE
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154C29
	fe_field_eff_end

FieldEffectScript_JumpSmallSplash: @ 0x0828A0E8
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154D59
	fe_field_eff_end

FieldEffectScript_LongGrass: @ 0x0828A0F2
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08154695
	fe_field_eff_end

FieldEffectScript_JumpLongGrass: @ 0x0828A0FC
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08154839
	fe_field_eff_end

FieldEffectScript_UnusedGrass: @ 0x0828A106
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x0815512D
	fe_field_eff_end

FieldEffectScript_UnusedGrass2: @ 0x0828A110
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08155199
	fe_field_eff_end

FieldEffectScript_UnusedSand: @ 0x0828A11A
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08155205
	fe_field_eff_end

FieldEffectScript_WaterSurfacing: @ 0x0828A124
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08155271
	fe_field_eff_end

FieldEffectScript_BerryTreeGrowthSparkle: @ 0x0828A12E
	fe_field_eff_callnative 0x08155A69
	fe_field_eff_end

FieldEffectScript_DeepSandFootprints: @ 0x0828A134
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154AB5
	fe_field_eff_end

FieldEffectScript_PokeCenterHeal: @ 0x0828A13E
	fe_field_eff_loadfadedpal 0x08536F08
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x080B58F9
	fe_field_eff_end

FieldEffectScript_UseSecretPowerTree: @ 0x0828A14D
	fe_field_eff_callnative 0x080FAA79
	fe_field_eff_end

FieldEffectScript_UseSecretPowerShrub: @ 0x0828A153
	fe_field_eff_callnative 0x080FABDD
	fe_field_eff_end

FieldEffectScript_TreeDisguise: @ 0x0828A159
	fe_field_eff_callnative 0x08155ADD
	fe_field_eff_end

FieldEffectScript_MountainDisguise: @ 0x0828A15F
	fe_field_eff_callnative 0x08155AED
	fe_field_eff_end

FieldEffectScript_NPCUseFly: @ 0x0828A165
	fe_field_eff_callnative 0x080B8825
	fe_field_eff_end

FieldEffectScript_UseFly: @ 0x0828A16B
	fe_field_eff_callnative 0x080B88FD
	fe_field_eff_end

FieldEffectScript_FlyIn: @ 0x0828A171
	fe_field_eff_callnative 0x080B8F19
	fe_field_eff_end

FieldEffectScript_QuestionMarkIcon: @ 0x0828A177
	fe_field_eff_callnative 0x080B3DB1
	fe_field_eff_end

FieldEffectScript_FeetInFlowingWater: @ 0x0828A17D
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154E39
	fe_field_eff_end

FieldEffectScript_BikeTireTracks: @ 0x0828A187
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x08154B29
	fe_field_eff_end

FieldEffectScript_SandDisguisePlaceholder: @ 0x0828A191
	fe_field_eff_callnative 0x08155AFD
	fe_field_eff_end

FieldEffectScript_UseRockSmash: @ 0x0828A197
	fe_field_eff_callnative 0x08135739
	fe_field_eff_end

FieldEffectScript_UseStrength: @ 0x0828A19D
	fe_field_eff_callnative 0x08145EED
	fe_field_eff_end

FieldEffectScript_UseDig: @ 0x0828A1A3
	fe_field_eff_callnative 0x081357D5
	fe_field_eff_end

FieldEffectScript_SandPile: @ 0x0828A1A9
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x0815583D
	fe_field_eff_end

FieldEffectScript_ShortGrass: @ 0x0828A1B3
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x081548A9
	fe_field_eff_end

FieldEffectScript_HotSpringsWater: @ 0x0828A1BD
	fe_field_eff_loadfadedpal_callnative 0x084E4E1C, 0x08154FF1
	fe_field_eff_end

FieldEffectScript_UseWaterfall: @ 0x0828A1C7
	fe_field_eff_callnative 0x080B6AA5
	fe_field_eff_end

FieldEffectScript_UseDive: @ 0x0828A1CD
	fe_field_eff_callnative 0x080B6C29
	fe_field_eff_end

FieldEffectScript_PokeballTrail: @ 0x0828A1D3
	fe_field_eff_loadpal 0x085A89A4
	fe_field_eff_callnative 0x08147191
	fe_field_eff_end

FieldEffectScript_HeartIcon: @ 0x0828A1DE
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x080B3DE9
	fe_field_eff_end

FieldEffectScript_Nop47: @ 0x0828A1E8
	fe_field_eff_callnative 0x080FAF6D
	fe_field_eff_end

FieldEffectScript_Nop48: @ 0x0828A1EE
	fe_field_eff_callnative 0x080FAF71
	fe_field_eff_end

FieldEffectScript_AshPuff: @ 0x0828A1F4
	fe_field_eff_loadfadedpal_callnative 0x084E59D4, 0x080B73A1
	fe_field_eff_end

FieldEffectScript_AshLaunch: @ 0x0828A1FE
	fe_field_eff_loadfadedpal_callnative 0x084E59D4, 0x080B714D
	fe_field_eff_end

FieldEffectScript_SweetScent: @ 0x0828A208
	fe_field_eff_callnative 0x08159E69
	fe_field_eff_end

FieldEffectScript_SandPillar: @ 0x0828A20E
	fe_field_eff_loadfadedpal_callnative 0x0856A288, 0x080FB2ED
	fe_field_eff_end

FieldEffectScript_Bubbles: @ 0x0828A218
	fe_field_eff_loadfadedpal_callnative 0x084E4E14, 0x081559C5
	fe_field_eff_end

FieldEffectScript_Sparkle: @ 0x0828A222
	fe_field_eff_loadfadedpal_callnative 0x084E5AF4, 0x08155D19
	fe_field_eff_end

FieldEffectScript_ShowSecretPowerCave: @ 0x0828A22C
	fe_field_eff_loadfadedpal_callnative 0x0856A22C, 0x080FA9AD
	fe_field_eff_end

FieldEffectScript_ShowSecretPowerTree: @ 0x0828A236
	fe_field_eff_loadfadedpal_callnative 0x0856A234, 0x080FAAB9
	fe_field_eff_end

FieldEffectScript_ShowSecretPowerShrub: @ 0x0828A240
	fe_field_eff_loadfadedpal_callnative 0x0856A234, 0x080FAC1D
	fe_field_eff_end

FieldEffectScript_ShowCutGrass: @ 0x0828A24A
	fe_field_eff_loadfadedpal_callnative 0x085571C0, 0x080D33A1
	fe_field_eff_end

FieldEffectScript_FieldMoveShowMonInit: @ 0x0828A254
	fe_field_eff_callnative 0x080B7C51
	fe_field_eff_end

FieldEffectScript_UsePuzzleEffect: @ 0x0828A25A
	fe_field_eff_callnative 0x08179871
	fe_field_eff_end

FieldEffectScript_SecretBaseBootPC: @ 0x0828A260
	fe_field_eff_callnative 0x080FACC9
	fe_field_eff_end

FieldEffectScript_HallOfFameRecord: @ 0x0828A266
	fe_field_eff_loadfadedpal 0x08536F08
	fe_field_eff_loadfadedpal_callnative 0x08536F10, 0x080B5A4D
	fe_field_eff_end

FieldEffectScript_UseTeleport: @ 0x0828A275
	fe_field_eff_callnative 0x0817C7C9
	fe_field_eff_end

FieldEffectScript_RayquazaSpotlight: @ 0x0828A27B
	fe_field_eff_callnative 0x080B86F1
	fe_field_eff_end

FieldEffectScript_DestroyDeoxysRock: @ 0x0828A281
	fe_field_eff_callnative 0x080B9235
	fe_field_eff_end

FieldEffectScript_MoveDeoxysRock: @ 0x0828A287
	fe_field_eff_callnative 0x080B9581
	fe_field_eff_end

	.byte 0x00, 0x00, 0x00 @ alignment padding at 0x0828A28D
