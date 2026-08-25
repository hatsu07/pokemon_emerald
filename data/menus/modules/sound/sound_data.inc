	.globl sFanfares
sFanfares: @ 0x084FCFC8
	@ ANALYSIS: SEMANTIC_NUMERIC_FANFARE_TABLE
	.2byte 0x016F, 80 @ MUS_LEVEL_UP
	.2byte 0x0172, 160 @ MUS_OBTAIN_ITEM
	.2byte 0x0173, 220 @ MUS_EVOLVED
	.2byte 0x0174, 220 @ MUS_OBTAIN_TMHM
	.2byte 0x0170, 160 @ MUS_HEAL
	.2byte 0x0171, 340 @ MUS_OBTAIN_BADGE
	.2byte 0x017A, 180 @ MUS_MOVE_DELETED
	.2byte 0x0183, 120 @ MUS_OBTAIN_BERRY
	.2byte 0x0184, 710 @ MUS_AWAKEN_LEGEND
	.2byte 0x0185, 250 @ MUS_SLOTS_JACKPOT
	.2byte 0x0186, 150 @ MUS_SLOTS_WIN
	.2byte 0x0187, 160 @ MUS_TOO_BAD
	.2byte 0x0226, 450 @ MUS_RG_POKE_FLUTE
	.2byte 0x0212, 170 @ MUS_RG_OBTAIN_KEY_ITEM
	.2byte 0x0211, 196 @ MUS_RG_DEX_RATING
	.2byte 0x01CB, 313 @ MUS_OBTAIN_B_POINTS
	.2byte 0x01D2, 318 @ MUS_OBTAIN_SYMBOL
	.2byte 0x01CC, 135 @ MUS_REGISTER_MATCH_CALL

	@ Common 4bpp OAM presets: priority 2, palette 0, tile 0.
	.macro jp_common_oam_preset name:req, attr0:req, attr1:req
	.globl \name
\name:
	.2byte \attr0, \attr1, 0x0800, 0
	.endm

	@ AffineOff / ObjNormal
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_8x8, 0x0000, 0x0000 @ 0x084FD010
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_16x16, 0x0000, 0x4000 @ 0x084FD018
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x32, 0x0000, 0x8000 @ 0x084FD020
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_64x64, 0x0000, 0xC000 @ 0x084FD028
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_16x8, 0x4000, 0x0000 @ 0x084FD030
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x8, 0x4000, 0x4000 @ 0x084FD038
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x16, 0x4000, 0x8000 @ 0x084FD040
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_64x32, 0x4000, 0xC000 @ 0x084FD048
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_8x16, 0x8000, 0x0000 @ 0x084FD050
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_8x32, 0x8000, 0x4000 @ 0x084FD058
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_16x32, 0x8000, 0x8000 @ 0x084FD060
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x64, 0x8000, 0xC000 @ 0x084FD068
	@ AffineNormal / ObjNormal
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_8x8, 0x0100, 0x0000 @ 0x084FD070
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_16x16, 0x0100, 0x4000 @ 0x084FD078
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x32, 0x0100, 0x8000 @ 0x084FD080
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_64x64, 0x0100, 0xC000 @ 0x084FD088
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_16x8, 0x4100, 0x0000 @ 0x084FD090
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x8, 0x4100, 0x4000 @ 0x084FD098
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x16, 0x4100, 0x8000 @ 0x084FD0A0
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_64x32, 0x4100, 0xC000 @ 0x084FD0A8
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_8x16, 0x8100, 0x0000 @ 0x084FD0B0
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_8x32, 0x8100, 0x4000 @ 0x084FD0B8
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_16x32, 0x8100, 0x8000 @ 0x084FD0C0
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x64, 0x8100, 0xC000 @ 0x084FD0C8
	@ AffineDouble / ObjNormal
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_8x8, 0x0300, 0x0000 @ 0x084FD0D0
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_16x16, 0x0300, 0x4000 @ 0x084FD0D8
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x32, 0x0300, 0x8000 @ 0x084FD0E0
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_64x64, 0x0300, 0xC000 @ 0x084FD0E8
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_16x8, 0x4300, 0x0000 @ 0x084FD0F0
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x8, 0x4300, 0x4000 @ 0x084FD0F8
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x16, 0x4300, 0x8000 @ 0x084FD100
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_64x32, 0x4300, 0xC000 @ 0x084FD108
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_8x16, 0x8300, 0x0000 @ 0x084FD110
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_8x32, 0x8300, 0x4000 @ 0x084FD118
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_16x32, 0x8300, 0x8000 @ 0x084FD120
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x64, 0x8300, 0xC000 @ 0x084FD128
	@ AffineOff / ObjBlend
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_8x8, 0x0400, 0x0000 @ 0x084FD130
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_16x16, 0x0400, 0x4000 @ 0x084FD138
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x32, 0x0400, 0x8000 @ 0x084FD140
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_64x64, 0x0400, 0xC000 @ 0x084FD148
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_16x8, 0x4400, 0x0000 @ 0x084FD150
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x8, 0x4400, 0x4000 @ 0x084FD158
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x16, 0x4400, 0x8000 @ 0x084FD160
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_64x32, 0x4400, 0xC000 @ 0x084FD168
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_8x16, 0x8400, 0x0000 @ 0x084FD170
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_8x32, 0x8400, 0x4000 @ 0x084FD178
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_16x32, 0x8400, 0x8000 @ 0x084FD180
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x64, 0x8400, 0xC000 @ 0x084FD188
	@ AffineNormal / ObjBlend
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_8x8, 0x0500, 0x0000 @ 0x084FD190
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_16x16, 0x0500, 0x4000 @ 0x084FD198
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x32, 0x0500, 0x8000 @ 0x084FD1A0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_64x64, 0x0500, 0xC000 @ 0x084FD1A8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_16x8, 0x4500, 0x0000 @ 0x084FD1B0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x8, 0x4500, 0x4000 @ 0x084FD1B8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x16, 0x4500, 0x8000 @ 0x084FD1C0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_64x32, 0x4500, 0xC000 @ 0x084FD1C8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_8x16, 0x8500, 0x0000 @ 0x084FD1D0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_8x32, 0x8500, 0x4000 @ 0x084FD1D8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_16x32, 0x8500, 0x8000 @ 0x084FD1E0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x64, 0x8500, 0xC000 @ 0x084FD1E8
	@ AffineDouble / ObjBlend
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_8x8, 0x0700, 0x0000 @ 0x084FD1F0
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_16x16, 0x0700, 0x4000 @ 0x084FD1F8
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x32, 0x0700, 0x8000 @ 0x084FD200
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_64x64, 0x0700, 0xC000 @ 0x084FD208
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_16x8, 0x4700, 0x0000 @ 0x084FD210
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x8, 0x4700, 0x4000 @ 0x084FD218
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x16, 0x4700, 0x8000 @ 0x084FD220
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_64x32, 0x4700, 0xC000 @ 0x084FD228
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_8x16, 0x8700, 0x0000 @ 0x084FD230
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_8x32, 0x8700, 0x4000 @ 0x084FD238
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_16x32, 0x8700, 0x8000 @ 0x084FD240
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x64, 0x8700, 0xC000 @ 0x084FD248
	.purgem jp_common_oam_preset

	@ ------------------------------------------------------------------
	@ Battle animation compressed asset symbols
	@ Pinned semantic names from pret/pokeemerald; absolute aliases only.
	@ The underlying compressed assets remain in their existing ROM region.
	@ ------------------------------------------------------------------
	.globl gBattleAnimSpriteGfx_Bubble
	.globl gBattleAnimSpriteGfx_Bone
	.globl gBattleAnimSpriteGfx_AirWave
	.globl gBattleAnimSpriteGfx_Orb
	.globl gBattleAnimSpriteGfx_Sword
	.globl gBattleAnimSpriteGfx_Seed
	.globl gBattleAnimSpritePal_Orb
	.globl gBattleAnimSpritePal_Sword
	.globl gBattleAnimSpritePal_Seed
	.globl gBattleAnimSpriteGfx_Needle
	.globl gBattleAnimSpritePal_Needle
	.globl gBattleAnimSpriteGfx_Explosion6
	.globl gBattleAnimSpriteGfx_PinkOrb
	.globl gBattleAnimSpritePal_PinkOrb
	.globl gBattleAnimSpriteGfx_IceCube
	.globl gBattleAnimSpriteGfx_Gust
	.globl gBattleAnimSpriteGfx_Spark2
	.globl gBattleAnimSpriteGfx_Orange
	.globl gBattleAnimSpritePal_Orange
	.globl gBattleAnimSpriteGfx_Spikes
	.globl gBattleAnimSpriteGfx_YellowBall
	.globl gBattleAnimSpritePal_YellowBall
	.globl gBattleAnimSpriteGfx_TiedBag
	.globl gBattleAnimSpriteGfx_BlackSmoke
	.globl gBattleAnimSpritePal_BlackSmoke
	.globl gBattleAnimSpriteGfx_BlackBall
	.globl gBattleAnimSpritePal_Glass
	.globl gBattleAnimSpriteGfx_Glass
	.globl gBattleAnimSpriteGfx_HornHit
	.globl gBattleAnimSpritePal_HornHit
	.globl gBattleAnimSpriteGfx_BlueShards
	.globl gBattleAnimSpritePal_WavingHand
	.globl gBattleAnimSpriteGfx_WavingHand
	.globl gBattleAnimSpriteGfx_ClosingEye
	.globl gBattleAnimSpritePal_ClosingEye
	.globl gBattleAnimSpriteGfx_BlueStar
	.globl gBattleAnimSpritePal_BlueStar
	.globl gBattleAnimSpritePal_BubbleBurst
	.globl gBattleAnimSpriteGfx_BubbleBurst
	.globl gBattleAnimSpriteGfx_Leer
	.globl gBattleAnimSpritePal_BlueBurst
	.globl gBattleAnimSpriteGfx_BlueBurst
	.globl gBattleAnimSpriteGfx_SmallEmber
	.globl gBattleAnimSpriteGfx_GraySmoke
	.globl gBattleAnimSpritePal_Fire
	.globl gBattleAnimSpriteGfx_Fire
	.globl gBattleAnimSpriteGfx_SpinningFire
	.globl gBattleAnimSpriteGfx_FirePlume
	.globl gBattleAnimSpriteGfx_Lightning2
	.globl gBattleAnimSpriteGfx_Lightning
	.globl gBattleAnimSpritePal_ClawSlash2
	.globl gBattleAnimSpritePal_ClawSlash
	.globl gBattleAnimSpriteGfx_ClawSlash2
	.globl gBattleAnimSpriteGfx_ClawSlash
	.globl gBattleAnimSpriteGfx_Scratch3
	.globl gBattleAnimSpriteGfx_Scratch2
	.globl gBattleAnimSpriteGfx_BubbleBurst2
	.globl gBattleAnimSpritePal_BubbleBurst2
	.globl gBattleAnimSpriteGfx_IceChunk
	.globl gBattleAnimSpriteGfx_Glass2
	.globl gBattleAnimSpritePal_PinkHeart2
	.globl gBattleAnimSpriteGfx_PinkHeart2
	.globl gBattleAnimSpriteGfx_SapDrip
	.globl gBattleAnimSpritePal_SapDrip
	.globl gBattleAnimSpritePal_SapDrip2
	.globl gBattleAnimSpriteGfx_Sparkle1
	.globl gBattleAnimSpritePal_Sparkle1
	.globl gBattleAnimSpritePal_Sparkle2
	.globl gBattleAnimSpritePal_HumanoidFoot
	.globl gBattleAnimSpriteGfx_HumanoidFoot
	.globl gBattleAnimSpriteGfx_MonsterFoot
	.globl gBattleAnimSpriteGfx_HumanoidHand
	.globl gBattleAnimSpriteGfx_YellowUnk
	.globl gBattleAnimSpritePal_YellowUnk
	.globl gBattleAnimSpriteGfx_SlamHit
	.globl gBattleAnimSpritePal_SlamHit
	.globl gBattleAnimSpriteGfx_RedFist
	.globl gBattleAnimSpriteGfx_Ring
	.globl gBattleAnimSpritePal_Ring
	.globl gBattleAnimSpriteGfx_Rocks
	.globl gBattleAnimSpritePal_Rocks
	.globl gBattleAnimSpriteGfx_Z
	.globl gBattleAnimSpritePal_Z
	.globl gBattleAnimSpriteGfx_YellowUnk2
	.globl gBattleAnimSpritePal_YellowUnk2
	.globl gBattleAnimSpriteGfx_AirSlash
	.globl gBattleAnimSpritePal_AirSlash
	.globl gBattleAnimSpriteGfx_SpinningGreenOrbs
	.globl gBattleAnimSpritePal_SpinningGreenOrbs
	.globl gBattleAnimSpriteGfx_Leaf
	.globl gBattleAnimSpritePal_Leaf
	.globl gBattleAnimSpriteGfx_PoisonPowder
	.globl gBattleAnimSpritePal_PoisonPowder
	.globl gBattleAnimSpriteGfx_BrownTriangle
	.globl gBattleAnimSpritePal_BrownTriangle
	.globl gBattleAnimSpriteGfx_Sparkle3
	.globl gBattleAnimSpritePal_Sparkle3
	.globl gBattleAnimSpriteGfx_Sparkle4
	.globl gBattleAnimSpriteGfx_MusicNotes
	.globl gBattleAnimSpritePal_MusicNotes
	.globl gBattleAnimSpriteGfx_Duck
	.globl gBattleAnimSpritePal_Duck
	.globl gBattleAnimSpriteGfx_Alert
	.globl gBattleAnimSpritePal_Alert
	.globl gBattleAnimSpriteGfx_Shock4
	.globl gBattleAnimSpriteGfx_Shock
	.globl gBattleAnimSpriteGfx_Bell2
	.globl gBattleAnimSpritePal_Bell2
	.globl gBattleAnimSpriteGfx_PinkGlove
	.globl gBattleAnimSpriteGfx_BlueLines
	.globl gBattleAnimSpritePal_BlueLines
	.globl gBattleAnimSpritePal_Impact3
	.globl gBattleAnimSpritePal_Impact2
	.globl gBattleAnimSpritePal_Reticle
	.globl gBattleAnimSpritePal_Breath
	.globl gBattleAnimSpritePal_Snowball
	.globl gBattleAnimSpritePal_Vine
	.globl gBattleAnimSpritePal_Sword2
	.globl gBattleAnimSpritePal_RedTube
	.globl gBattleAnimSpritePal_Amnesia
	.globl gBattleAnimSpritePal_String2
	.globl gBattleAnimSpritePal_Pencil2
	.globl gBattleAnimSpritePal_Petal
	.globl gBattleAnimSpritePal_BentSpoon
	.globl gBattleAnimSpritePal_Coin
	.globl gBattleAnimSpritePal_CrackedEgg
	.globl gBattleAnimSpritePal_FreshEgg
	.globl gBattleAnimSpriteGfx_Impact3
	.globl gBattleAnimSpriteGfx_Impact2
	.globl gBattleAnimSpriteGfx_Reticle
	.globl gBattleAnimSpriteGfx_Breath
	.globl gBattleAnimSpriteGfx_Snowball
	.globl gBattleAnimSpriteGfx_Vine
	.globl gBattleAnimSpriteGfx_Sword2
	.globl gBattleAnimSpriteGfx_Clapping
	.globl gBattleAnimSpriteGfx_RedTube
	.globl gBattleAnimSpriteGfx_Amnesia
	.globl gBattleAnimSpriteGfx_String2
	.globl gBattleAnimSpriteGfx_Pencil2
	.globl gBattleAnimSpriteGfx_Petal
	.globl gBattleAnimSpriteGfx_BentSpoon
	.globl gBattleAnimSpriteGfx_Web
	.globl gBattleAnimSpriteGfx_Coin
	.globl gBattleAnimSpriteGfx_CrackedEgg
	.globl gBattleAnimSpriteGfx_HatchedEgg
	.globl gBattleAnimSpriteGfx_FreshEgg
	.globl gBattleAnimSpriteGfx_Fangs
	.globl gBattleAnimSpriteGfx_Explosion2
	.globl gBattleAnimSpriteGfx_Explosion3
	.globl gBattleAnimSpriteGfx_WaterDroplet
	.globl gBattleAnimSpriteGfx_WaterDroplet2
	.globl gBattleAnimSpriteGfx_Seed2
	.globl gBattleAnimSpritePal_Seed2
	.globl gBattleAnimSpriteGfx_Sprout
	.globl gBattleAnimSpriteGfx_RedWand
	.globl gBattleAnimSpritePal_RedWand
	.globl gBattleAnimSpriteGfx_PurpleGreenUnk
	.globl gBattleAnimSpriteGfx_WaterColumn
	.globl gBattleAnimSpriteGfx_MudUnk
	.globl gBattleAnimSpritePal_MudUnk
	.globl gBattleAnimSpriteGfx_RainDrops
.globl gBattleAnimSpriteGfx_FlyingDirt
	.globl gBattleAnimSpritePal_FlyingDirt
	.globl gBattleAnimSpriteGfx_MetalSoundWaves
	.globl gBattleAnimSpritePal_MetalSoundWaves
	.globl gBattleAnimSpriteGfx_IcicleSpear
	.globl gBattleAnimSpritePal_IcicleSpear
	.globl gBattleAnimSpriteGfx_GlowyRedOrb
	.globl gBattleAnimSpritePal_GlowyRedOrb
	.globl gBattleAnimSpritePal_GlowyGreenOrb
	.globl gBattleAnimSpritePal_SleepPowder
	.globl gBattleAnimSpritePal_StunSpore
	.globl gBattleAnimSpriteGfx_Splash
	.globl gBattleAnimSpritePal_Splash
	.globl gBattleAnimSpriteGfx_SweatBead
	.globl gBattleAnimSpriteGfx_Pokeblock
	.globl gBattleAnimSpritePal_Pokeblock
	.globl gBattleAnimSpriteGfx_Gem1
	.globl gBattleAnimSpriteGfx_Gem2
	.globl gBattleAnimSpriteGfx_Gem3
	.globl gBattleAnimSpritePal_Gem1
	.globl gBattleAnimSpriteGfx_Protect
	.globl gBattleAnimSpritePal_Protect
	.globl gBattleAnimSpritePal_WhipHit
	.globl gBattleAnimSpritePal_SlamHit2
	.globl gBattleAnimSpriteGfx_SlamHit2
	.globl gBattleAnimSpritePal_WeatherBall
	.globl gBattleAnimSpriteGfx_WeatherBall
	.globl gBattleAnimSpriteGfx_Hail
	.globl gBattleAnimSpritePal_Hail
	.globl gBattleAnimSpriteGfx_GreenSpike
	.globl gBattleAnimSpritePal_GreenSpike
	.globl gBattleAnimSpritePal_WhiteCircleOfLight
	.globl gBattleAnimSpritePal_GlowyBlueOrb
	.globl gBattleAnimSpriteGfx_Recycle
	.globl gBattleAnimSpritePal_Recycle
	.globl gBattleAnimSpriteGfx_RedParticles
	.globl gBattleAnimSpritePal_RedParticles
	.globl gBattleAnimSpriteGfx_DirtMound
	.globl gBattleAnimSpritePal_DirtMound
	.globl gBattleAnimSpriteGfx_Bird
	.globl gBattleAnimSpritePal_Bird
	.globl gBattleAnimSpriteGfx_CrossImpact
	.globl gBattleAnimSpritePal_CrossImpact
	.globl gBattleAnimSpritePal_Slash2
	.globl gBattleAnimSpriteGfx_WhiteShadow
	.globl gBattleAnimSpritePal_WhiteShadow
	.globl gBattleAnimSpritePal_Shock3
	.set gBattleAnimSpritePal_Shock3, 0x08DBA3F4
	.globl gBattleAnimSpriteGfx_Shock3
	.set gBattleAnimSpriteGfx_Shock3, 0x08DBA41C
	.globl gBattleAnimSpritePal_WhiteFeather
	.set gBattleAnimSpritePal_WhiteFeather, 0x08DBA604
	.globl gBattleAnimSpriteGfx_WhiteFeather
	.set gBattleAnimSpriteGfx_WhiteFeather, 0x08DBA620
	.globl gBattleAnimSpritePal_Sparkle6
	.set gBattleAnimSpritePal_Sparkle6, 0x08DBA748
	.globl gBattleAnimSpriteGfx_Sparkle6
	.set gBattleAnimSpriteGfx_Sparkle6, 0x08DBA760

	@ struct CompressedSpriteSheet { const void *data; u16 size; u16 tag; }
	.macro battle_anim_pic_entry data:req, size:req, tag:req
	.4byte \data
	.2byte \size, \tag
	.endm

