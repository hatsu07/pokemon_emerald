@ ROM配置順のポケモン・汎用圧縮グラフィックデータ
@ 意味が確定したassetは意味名付きpath/symbolで直接管理する

  .globl gMonBackPic_None
gMonBackPic_None:
  .incbin "build/graphics/pokemon/none/back.4bpp.lz"

  .globl gMonPalette_None
gMonPalette_None:
  .incbin "build/graphics/pokemon/none/normal_palette.gbapal.lz"
  .balign 4, 0

  .globl gMonShinyPalette_None
gMonShinyPalette_None:
  .incbin "build/graphics/pokemon/none/shiny_palette.gbapal.lz"
  .balign 4, 0

  .globl gFontTiles
gFontTiles:
  .incbin "build/graphics/fonts/font_tiles.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/00_C013F0.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/00_C01624.gbapal.lz"
  .balign 4, 0

  .globl gSmokescreenImpactTiles
gSmokescreenImpactTiles:
  .incbin "build/graphics/battle_anims/sprites/smokescreen_impact.4bpp.lz"
  .balign 4, 0

  .globl gSmokescreenImpactPalette
gSmokescreenImpactPalette:
  .incbin "build/graphics/battle_anims/sprites/smokescreen_impact_palette.gbapal.lz"
  .balign 4, 0
  .include "data/graphics/pokeballs.inc"
  .incbin "build/graphics/unknown/1A_16x16.4bpp.lz"
  .balign 4, 0

  .globl gBlankGfxCompressed
gBlankGfxCompressed:
  .incbin "build/graphics/interface/blank_compressed.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Bubble
gBattleAnimSpriteGfx_Bubble:
  .incbin "build/graphics/battle_anims/sprites/bubble.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Bone
gBattleAnimSpriteGfx_Bone:
  .incbin "build/graphics/battle_anims/sprites/bone.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_AirWave
gBattleAnimSpriteGfx_AirWave:
  .incbin "build/graphics/battle_anims/sprites/air_wave.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Orb
gBattleAnimSpriteGfx_Orb:
  .incbin "build/graphics/battle_anims/sprites/orb.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Sword
gBattleAnimSpriteGfx_Sword:
  .incbin "build/graphics/battle_anims/sprites/sword.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Seed
gBattleAnimSpriteGfx_Seed:
  .incbin "build/graphics/battle_anims/sprites/seed.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/22_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/23_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/24_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Orb
gBattleAnimSpritePal_Orb:
  .incbin "build/graphics/battle_anims/sprites/orb_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Sword
gBattleAnimSpritePal_Sword:
  .incbin "build/graphics/battle_anims/sprites/sword_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Seed
gBattleAnimSpritePal_Seed:
  .incbin "build/graphics/battle_anims/sprites/seed_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Needle
gBattleAnimSpriteGfx_Needle:
  .incbin "build/graphics/battle_anims/sprites/needle.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Needle
gBattleAnimSpritePal_Needle:
  .incbin "build/graphics/battle_anims/sprites/needle_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Explosion6
gBattleAnimSpriteGfx_Explosion6:
  .incbin "build/graphics/battle_anims/sprites/explosion_6.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/2B_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_PinkOrb
gBattleAnimSpriteGfx_PinkOrb:
  .incbin "build/graphics/battle_anims/sprites/pink_orb.4bpp.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_PinkOrb
gBattleAnimSpritePal_PinkOrb:
  .incbin "build/graphics/battle_anims/sprites/pink_orb_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/2E_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_IceCube
gBattleAnimSpriteGfx_IceCube:
  .incbin "build/graphics/battle_anims/sprites/ice_cube.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Gust
gBattleAnimSpriteGfx_Gust:
  .incbin "build/graphics/battle_anims/sprites/gust.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/31_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Spark2
gBattleAnimSpriteGfx_Spark2:
  .incbin "build/graphics/battle_anims/sprites/spark_2.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/33_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Orange
gBattleAnimSpriteGfx_Orange:
  .incbin "build/graphics/battle_anims/sprites/orange.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Orange
gBattleAnimSpritePal_Orange:
  .incbin "build/graphics/battle_anims/sprites/orange_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Spikes
gBattleAnimSpriteGfx_Spikes:
  .incbin "build/graphics/battle_anims/sprites/spikes.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/37_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_YellowBall
gBattleAnimSpriteGfx_YellowBall:
  .incbin "build/graphics/battle_anims/sprites/yellow_ball.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_YellowBall
gBattleAnimSpritePal_YellowBall:
  .incbin "build/graphics/battle_anims/sprites/yellow_ball_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_TiedBag
gBattleAnimSpriteGfx_TiedBag:
  .incbin "build/graphics/battle_anims/sprites/tied_bag.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/3B_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BlackSmoke
gBattleAnimSpriteGfx_BlackSmoke:
  .incbin "build/graphics/battle_anims/sprites/black_smoke.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_BlackSmoke
gBattleAnimSpritePal_BlackSmoke:
  .incbin "build/graphics/battle_anims/sprites/black_smoke_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BlackBall
gBattleAnimSpriteGfx_BlackBall:
  .incbin "build/graphics/battle_anims/sprites/black_ball.4bpp.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/3F_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Glass
gBattleAnimSpritePal_Glass:
  .incbin "build/graphics/battle_anims/sprites/glass_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Glass
gBattleAnimSpriteGfx_Glass:
  .incbin "build/graphics/battle_anims/sprites/glass.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_HornHit
gBattleAnimSpriteGfx_HornHit:
  .incbin "build/graphics/battle_anims/sprites/horn_hit.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_HornHit
gBattleAnimSpritePal_HornHit:
  .incbin "build/graphics/battle_anims/sprites/horn_hit_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/44_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BlueShards
gBattleAnimSpriteGfx_BlueShards:
  .incbin "build/graphics/battle_anims/sprites/blue_shards.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/46_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/47_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/48_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/49_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/4A_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_WavingHand
gBattleAnimSpritePal_WavingHand:
  .incbin "build/graphics/battle_anims/sprites/waving_hand_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_WavingHand
gBattleAnimSpriteGfx_WavingHand:
  .incbin "build/graphics/battle_anims/sprites/waving_hand.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_ClosingEye
gBattleAnimSpriteGfx_ClosingEye:
  .incbin "build/graphics/battle_anims/sprites/closing_eye.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_ClosingEye
gBattleAnimSpritePal_ClosingEye:
  .incbin "build/graphics/battle_anims/sprites/closing_eye_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BlueStar
gBattleAnimSpriteGfx_BlueStar:
  .incbin "build/graphics/battle_anims/sprites/blue_star.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_BlueStar
gBattleAnimSpritePal_BlueStar:
  .incbin "build/graphics/battle_anims/sprites/blue_star_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_BubbleBurst
gBattleAnimSpritePal_BubbleBurst:
  .incbin "build/graphics/battle_anims/sprites/bubble_burst_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BubbleBurst
gBattleAnimSpriteGfx_BubbleBurst:
  .incbin "build/graphics/battle_anims/sprites/bubble_burst.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/53_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/54_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/55_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Leer
gBattleAnimSpriteGfx_Leer:
  .incbin "build/graphics/battle_anims/sprites/leer.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_BlueBurst
gBattleAnimSpritePal_BlueBurst:
  .incbin "build/graphics/battle_anims/sprites/blue_burst_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BlueBurst
gBattleAnimSpriteGfx_BlueBurst:
  .incbin "build/graphics/battle_anims/sprites/blue_burst.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_SmallEmber
gBattleAnimSpriteGfx_SmallEmber:
  .incbin "build/graphics/battle_anims/sprites/small_ember.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/5A_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_GraySmoke
gBattleAnimSpriteGfx_GraySmoke:
  .incbin "build/graphics/battle_anims/sprites/gray_smoke.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/5C_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Fire
gBattleAnimSpritePal_Fire:
  .incbin "build/graphics/battle_anims/sprites/fire_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Fire
gBattleAnimSpriteGfx_Fire:
  .incbin "build/graphics/battle_anims/sprites/fire.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_SpinningFire
gBattleAnimSpriteGfx_SpinningFire:
  .incbin "build/graphics/battle_anims/sprites/spinning_fire.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_FirePlume
gBattleAnimSpriteGfx_FirePlume:
  .incbin "build/graphics/battle_anims/sprites/fire_plume.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/61_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Lightning2
gBattleAnimSpriteGfx_Lightning2:
  .incbin "build/graphics/battle_anims/sprites/lightning_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Lightning
gBattleAnimSpriteGfx_Lightning:
  .incbin "build/graphics/battle_anims/sprites/lightning.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/64_40x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/65_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/66_16x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/67_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/68_24x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/69_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/6A_24x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/6B_128x80.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/6C_64x64.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_ClawSlash2
gBattleAnimSpritePal_ClawSlash2:
  .incbin "build/graphics/battle_anims/sprites/claw_slash_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_ClawSlash
gBattleAnimSpritePal_ClawSlash:
  .incbin "build/graphics/battle_anims/sprites/claw_slash_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_ClawSlash2
gBattleAnimSpriteGfx_ClawSlash2:
  .incbin "build/graphics/battle_anims/sprites/claw_slash_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_ClawSlash
gBattleAnimSpriteGfx_ClawSlash:
  .incbin "build/graphics/battle_anims/sprites/claw_slash.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Scratch3
gBattleAnimSpriteGfx_Scratch3:
  .incbin "build/graphics/battle_anims/sprites/scratch_3.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Scratch2
gBattleAnimSpriteGfx_Scratch2:
  .incbin "build/graphics/battle_anims/sprites/scratch_2.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/73_32x24.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_BubbleBurst2
gBattleAnimSpriteGfx_BubbleBurst2:
  .incbin "build/graphics/battle_anims/sprites/bubble_burst_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_BubbleBurst2
gBattleAnimSpritePal_BubbleBurst2:
  .incbin "build/graphics/battle_anims/sprites/bubble_burst_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_IceChunk
gBattleAnimSpriteGfx_IceChunk:
  .incbin "build/graphics/battle_anims/sprites/ice_chunk.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/77_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/78_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Glass2
gBattleAnimSpriteGfx_Glass2:
  .incbin "build/graphics/battle_anims/sprites/glass_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_PinkHeart2
gBattleAnimSpritePal_PinkHeart2:
  .incbin "build/graphics/battle_anims/sprites/pink_heart_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_PinkHeart2
gBattleAnimSpriteGfx_PinkHeart2:
  .incbin "build/graphics/battle_anims/sprites/pink_heart_2.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/7C_128x128.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/7D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/7E_328x8.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_SapDrip
gBattleAnimSpriteGfx_SapDrip:
  .incbin "build/graphics/battle_anims/sprites/sap_drip.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_SapDrip
gBattleAnimSpritePal_SapDrip:
  .incbin "build/graphics/battle_anims/sprites/sap_drip_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_SapDrip2
gBattleAnimSpritePal_SapDrip2:
  .incbin "build/graphics/battle_anims/sprites/sap_drip_2_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/82_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/83_40x8.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Sparkle1
gBattleAnimSpriteGfx_Sparkle1:
  .incbin "build/graphics/battle_anims/sprites/sparkle_1.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Sparkle1
gBattleAnimSpritePal_Sparkle1:
  .incbin "build/graphics/battle_anims/sprites/sparkle_1_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Sparkle2
gBattleAnimSpritePal_Sparkle2:
  .incbin "build/graphics/battle_anims/sprites/sparkle_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_HumanoidFoot
gBattleAnimSpritePal_HumanoidFoot:
  .incbin "build/graphics/battle_anims/sprites/humanoid_foot_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_HumanoidFoot
gBattleAnimSpriteGfx_HumanoidFoot:
  .incbin "build/graphics/battle_anims/sprites/humanoid_foot.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_MonsterFoot
gBattleAnimSpriteGfx_MonsterFoot:
  .incbin "build/graphics/battle_anims/sprites/monster_foot.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_HumanoidHand
gBattleAnimSpriteGfx_HumanoidHand:
  .incbin "build/graphics/battle_anims/sprites/humanoid_hand.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/8B_64x48.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/8C_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_YellowUnk
gBattleAnimSpriteGfx_YellowUnk:
  .incbin "build/graphics/battle_anims/sprites/yellow_unk.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_YellowUnk
gBattleAnimSpritePal_YellowUnk:
  .incbin "build/graphics/battle_anims/sprites/yellow_unk_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_SlamHit
gBattleAnimSpriteGfx_SlamHit:
  .incbin "build/graphics/battle_anims/sprites/slam_hit.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_SlamHit
gBattleAnimSpritePal_SlamHit:
  .incbin "build/graphics/battle_anims/sprites/slam_hit_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_RedFist
gBattleAnimSpriteGfx_RedFist:
  .incbin "build/graphics/battle_anims/sprites/red_fist.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Ring
gBattleAnimSpriteGfx_Ring:
  .incbin "build/graphics/battle_anims/sprites/ring.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Ring
gBattleAnimSpritePal_Ring:
  .incbin "build/graphics/battle_anims/sprites/ring_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Rocks
gBattleAnimSpriteGfx_Rocks:
  .incbin "build/graphics/battle_anims/sprites/rocks.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Rocks
gBattleAnimSpritePal_Rocks:
  .incbin "build/graphics/battle_anims/sprites/rocks_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Z
gBattleAnimSpriteGfx_Z:
  .incbin "build/graphics/battle_anims/sprites/z.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Z
gBattleAnimSpritePal_Z:
  .incbin "build/graphics/battle_anims/sprites/z_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_YellowUnk2
gBattleAnimSpriteGfx_YellowUnk2:
  .incbin "build/graphics/battle_anims/sprites/yellow_unk_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_YellowUnk2
gBattleAnimSpritePal_YellowUnk2:
  .incbin "build/graphics/battle_anims/sprites/yellow_unk_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_AirSlash
gBattleAnimSpriteGfx_AirSlash:
  .incbin "build/graphics/battle_anims/sprites/air_slash.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_AirSlash
gBattleAnimSpritePal_AirSlash:
  .incbin "build/graphics/battle_anims/sprites/air_slash_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_SpinningGreenOrbs
gBattleAnimSpriteGfx_SpinningGreenOrbs:
  .incbin "build/graphics/battle_anims/sprites/spinning_green_orbs.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_SpinningGreenOrbs
gBattleAnimSpritePal_SpinningGreenOrbs:
  .incbin "build/graphics/battle_anims/sprites/spinning_green_orbs_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Leaf
gBattleAnimSpriteGfx_Leaf:
  .incbin "build/graphics/battle_anims/sprites/leaf.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Leaf
gBattleAnimSpritePal_Leaf:
  .incbin "build/graphics/battle_anims/sprites/leaf_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/A0_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/A1_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_PoisonPowder
gBattleAnimSpriteGfx_PoisonPowder:
  .incbin "build/graphics/battle_anims/sprites/poison_powder.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_PoisonPowder
gBattleAnimSpritePal_PoisonPowder:
  .incbin "build/graphics/battle_anims/sprites/poison_powder_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_BrownTriangle
gBattleAnimSpriteGfx_BrownTriangle:
  .incbin "build/graphics/battle_anims/sprites/brown_triangle.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_BrownTriangle
gBattleAnimSpritePal_BrownTriangle:
  .incbin "build/graphics/battle_anims/sprites/brown_triangle_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Sparkle3
gBattleAnimSpriteGfx_Sparkle3:
  .incbin "build/graphics/battle_anims/sprites/sparkle_3.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Sparkle3
gBattleAnimSpritePal_Sparkle3:
  .incbin "build/graphics/battle_anims/sprites/sparkle_3_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Sparkle4
gBattleAnimSpriteGfx_Sparkle4:
  .incbin "build/graphics/battle_anims/sprites/sparkle_4.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_MusicNotes
gBattleAnimSpriteGfx_MusicNotes:
  .incbin "build/graphics/battle_anims/sprites/music_notes.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_MusicNotes
gBattleAnimSpritePal_MusicNotes:
  .incbin "build/graphics/battle_anims/sprites/music_notes_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Duck
gBattleAnimSpriteGfx_Duck:
  .incbin "build/graphics/battle_anims/sprites/duck.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Duck
gBattleAnimSpritePal_Duck:
  .incbin "build/graphics/battle_anims/sprites/duck_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Alert
gBattleAnimSpriteGfx_Alert:
  .incbin "build/graphics/battle_anims/sprites/alert.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Alert
gBattleAnimSpritePal_Alert:
  .incbin "build/graphics/battle_anims/sprites/alert_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Shock4
gBattleAnimSpriteGfx_Shock4:
  .incbin "build/graphics/battle_anims/sprites/shock_4.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/B0_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Shock
gBattleAnimSpriteGfx_Shock:
  .incbin "build/graphics/battle_anims/sprites/shock.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Bell2
gBattleAnimSpriteGfx_Bell2:
  .incbin "build/graphics/battle_anims/sprites/bell_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Bell2
gBattleAnimSpritePal_Bell2:
  .incbin "build/graphics/battle_anims/sprites/bell_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_PinkGlove
gBattleAnimSpriteGfx_PinkGlove:
  .incbin "build/graphics/battle_anims/sprites/pink_glove.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/B5_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B6_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B7_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B8_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B9_48x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/BA_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/BB_64x32.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_BlueLines
gBattleAnimSpriteGfx_BlueLines:
  .incbin "build/graphics/battle_anims/sprites/blue_lines.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_BlueLines
gBattleAnimSpritePal_BlueLines:
  .incbin "build/graphics/battle_anims/sprites/blue_lines_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Impact3
gBattleAnimSpritePal_Impact3:
  .incbin "build/graphics/battle_anims/sprites/impact_3_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Impact2
gBattleAnimSpritePal_Impact2:
  .incbin "build/graphics/battle_anims/sprites/impact_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Reticle
gBattleAnimSpritePal_Reticle:
  .incbin "build/graphics/battle_anims/sprites/reticle_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Breath
gBattleAnimSpritePal_Breath:
  .incbin "build/graphics/battle_anims/sprites/breath_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Snowball
gBattleAnimSpritePal_Snowball:
  .incbin "build/graphics/battle_anims/sprites/snowball_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Vine
gBattleAnimSpritePal_Vine:
  .incbin "build/graphics/battle_anims/sprites/vine_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Sword2
gBattleAnimSpritePal_Sword2:
  .incbin "build/graphics/battle_anims/sprites/sword_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_RedTube
gBattleAnimSpritePal_RedTube:
  .incbin "build/graphics/battle_anims/sprites/red_tube_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Amnesia
gBattleAnimSpritePal_Amnesia:
  .incbin "build/graphics/battle_anims/sprites/amnesia_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_String2
gBattleAnimSpritePal_String2:
  .incbin "build/graphics/battle_anims/sprites/string_2_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C8_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Pencil2
gBattleAnimSpritePal_Pencil2:
  .incbin "build/graphics/battle_anims/sprites/pencil_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Petal
gBattleAnimSpritePal_Petal:
  .incbin "build/graphics/battle_anims/sprites/petal_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_BentSpoon
gBattleAnimSpritePal_BentSpoon:
  .incbin "build/graphics/battle_anims/sprites/bent_spoon_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_Coin
gBattleAnimSpritePal_Coin:
  .incbin "build/graphics/battle_anims/sprites/coin_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_CrackedEgg
gBattleAnimSpritePal_CrackedEgg:
  .incbin "build/graphics/battle_anims/sprites/cracked_egg_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpritePal_FreshEgg
gBattleAnimSpritePal_FreshEgg:
  .incbin "build/graphics/battle_anims/sprites/fresh_egg_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Impact3
gBattleAnimSpriteGfx_Impact3:
  .incbin "build/graphics/battle_anims/sprites/impact_3.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Impact2
gBattleAnimSpriteGfx_Impact2:
  .incbin "build/graphics/battle_anims/sprites/impact_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Reticle
gBattleAnimSpriteGfx_Reticle:
  .incbin "build/graphics/battle_anims/sprites/reticle.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Breath
gBattleAnimSpriteGfx_Breath:
  .incbin "build/graphics/battle_anims/sprites/breath.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Snowball
gBattleAnimSpriteGfx_Snowball:
  .incbin "build/graphics/battle_anims/sprites/snowball.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Vine
gBattleAnimSpriteGfx_Vine:
  .incbin "build/graphics/battle_anims/sprites/vine.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Sword2
gBattleAnimSpriteGfx_Sword2:
  .incbin "build/graphics/battle_anims/sprites/sword_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Clapping
gBattleAnimSpriteGfx_Clapping:
  .incbin "build/graphics/battle_anims/sprites/clapping.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_RedTube
gBattleAnimSpriteGfx_RedTube:
  .incbin "build/graphics/battle_anims/sprites/red_tube.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Amnesia
gBattleAnimSpriteGfx_Amnesia:
  .incbin "build/graphics/battle_anims/sprites/amnesia.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_String2
gBattleAnimSpriteGfx_String2:
  .incbin "build/graphics/battle_anims/sprites/string_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Pencil2
gBattleAnimSpriteGfx_Pencil2:
  .incbin "build/graphics/battle_anims/sprites/pencil_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Petal
gBattleAnimSpriteGfx_Petal:
  .incbin "build/graphics/battle_anims/sprites/petal.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_BentSpoon
gBattleAnimSpriteGfx_BentSpoon:
  .incbin "build/graphics/battle_anims/sprites/bent_spoon.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Web
gBattleAnimSpriteGfx_Web:
  .incbin "build/graphics/battle_anims/sprites/web.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Coin
gBattleAnimSpriteGfx_Coin:
  .incbin "build/graphics/battle_anims/sprites/coin.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_CrackedEgg
gBattleAnimSpriteGfx_CrackedEgg:
  .incbin "build/graphics/battle_anims/sprites/cracked_egg.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_HatchedEgg
gBattleAnimSpriteGfx_HatchedEgg:
  .incbin "build/graphics/battle_anims/sprites/hatched_egg.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_FreshEgg
gBattleAnimSpriteGfx_FreshEgg:
  .incbin "build/graphics/battle_anims/sprites/fresh_egg.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Fangs
gBattleAnimSpriteGfx_Fangs:
  .incbin "build/graphics/battle_anims/sprites/fangs.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E3_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Explosion2
gBattleAnimSpriteGfx_Explosion2:
  .incbin "build/graphics/battle_anims/sprites/explosion_2.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E5_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Explosion3
gBattleAnimSpriteGfx_Explosion3:
  .incbin "build/graphics/battle_anims/sprites/explosion_3.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_WaterDroplet
gBattleAnimSpriteGfx_WaterDroplet:
  .incbin "build/graphics/battle_anims/sprites/water_droplet.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E8_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_WaterDroplet2
gBattleAnimSpriteGfx_WaterDroplet2:
  .incbin "build/graphics/battle_anims/sprites/water_droplet_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_Seed2
gBattleAnimSpriteGfx_Seed2:
  .incbin "build/graphics/battle_anims/sprites/seed_2.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_Seed2
gBattleAnimSpritePal_Seed2:
  .incbin "build/graphics/battle_anims/sprites/seed_2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_Sprout
gBattleAnimSpriteGfx_Sprout:
  .incbin "build/graphics/battle_anims/sprites/sprout.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpriteGfx_RedWand
gBattleAnimSpriteGfx_RedWand:
  .incbin "build/graphics/battle_anims/sprites/red_wand.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_RedWand
gBattleAnimSpritePal_RedWand:
  .incbin "build/graphics/battle_anims/sprites/red_wand_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_PurpleGreenUnk
gBattleAnimSpriteGfx_PurpleGreenUnk:
  .incbin "build/graphics/battle_anims/sprites/purple_green_unk.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F0_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_WaterColumn
gBattleAnimSpriteGfx_WaterColumn:
  .incbin "build/graphics/battle_anims/sprites/water_column.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F2_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_MudUnk
gBattleAnimSpriteGfx_MudUnk:
  .incbin "build/graphics/battle_anims/sprites/mud_unk.4bpp.lz"
  .balign 4, 0

  .globl gBattleAnimSpritePal_MudUnk
gBattleAnimSpritePal_MudUnk:
  .incbin "build/graphics/battle_anims/sprites/mud_unk_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/F5_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F6_128x128.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F7_2824x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F8_palette.gbapal.lz"
  .balign 4, 0
  .globl gBattleAnimSpriteGfx_RainDrops
gBattleAnimSpriteGfx_RainDrops:
  .incbin "build/graphics/battle_anims/sprites/rain_drops.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FA_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FB_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FC_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FD_40x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FE_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/FF_64x64.4bpp.lz"
  .balign 4, 0
