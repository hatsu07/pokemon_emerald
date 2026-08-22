	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4CF8AB
gText_Rom_4CF8AB: @ 0x084CF8AB
	.string "z    {EOS}"
	.if (. - gText_Rom_4CF8AB) > 0x6
	.error "gText_Rom_4CF8AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4CF8AB) < 0x6
	.space 0x6 - (. - gText_Rom_4CF8AB)
	.endif
	@ analyzed canonical ROM range 0x084CF8B1-0x084DD88B
	@ Canonical field-effect graphics/palettes, byte-proven against the JP ROM.
	@ The Arrow asset begins at 0x084CF80C in the preceding source module;
	@ gText_Rom_4CF8AB aliases six bytes inside that graphic, so this module
	@ consumes only the exact suffix beginning at 0x084CF8B1.

	.globl gFieldEffectObjectPic_ArrowSuffix_JP
gFieldEffectObjectPic_ArrowSuffix_JP: @ 0x084CF8B1
	.incbin "build/graphics/field_effects/pics/arrow.4bpp", 0xA5, 0x35B

	.globl gFieldEffectObjectPalette0
gFieldEffectObjectPalette0: @ 0x084CFC0C
	.incbin "build/graphics/field_effects/palettes/general_0.gbapal"

	.globl gFieldEffectObjectPalette1
gFieldEffectObjectPalette1: @ 0x084CFC2C
	.incbin "build/graphics/field_effects/palettes/general_1.gbapal"

	.globl gFieldEffectObjectPic_GroundImpactDust
gFieldEffectObjectPic_GroundImpactDust: @ 0x084CFC4C
	.incbin "build/graphics/field_effects/pics/ground_impact_dust.4bpp"

	.globl gFieldEffectObjectPic_JumpTallGrass
gFieldEffectObjectPic_JumpTallGrass: @ 0x084CFD0C
	.incbin "build/graphics/field_effects/pics/jump_tall_grass.4bpp"

	.globl gUnusedGrass3
gUnusedGrass3: @ 0x084CFE0C
	.incbin "build/graphics/field_effects/pics/unused_grass_3.4bpp"

	.globl gFieldEffectObjectPic_JumpLongGrass
gFieldEffectObjectPic_JumpLongGrass: @ 0x084D000C
	.incbin "build/graphics/field_effects/pics/jump_long_grass.4bpp"

	.globl gFieldEffectObjectPic_UnusedGrassFrames1To8
gFieldEffectObjectPic_UnusedGrassFrames1To8: @ 0x084D038C
	@ Upstream calls this gFieldEffectObjectPic_Unknown17; gFieldEffectObjectTemplate_UnusedGrass proves these are frames 1-8.
	.incbin "build/graphics/field_effects/pics/unused_grass_frames_1_to_8.4bpp"

	.globl gFieldEffectObjectPic_UnusedGrass2
gFieldEffectObjectPic_UnusedGrass2: @ 0x084D078C
	.incbin "build/graphics/field_effects/pics/unused_grass_2.4bpp"

	.globl gFieldEffectObjectPic_LongGrass
gFieldEffectObjectPic_LongGrass: @ 0x084D098C
	.incbin "build/graphics/field_effects/pics/long_grass.4bpp"

	.globl gFieldEffectObjectPic_TallGrass
gFieldEffectObjectPic_TallGrass: @ 0x084D0B8C
	.incbin "build/graphics/field_effects/pics/tall_grass.4bpp"

	.globl gFieldEffectObjectPic_ShortGrass
gFieldEffectObjectPic_ShortGrass: @ 0x084D0E0C
	.incbin "build/graphics/field_effects/pics/short_grass.4bpp"

	.globl gFieldEffectObjectPic_SandFootprints
gFieldEffectObjectPic_SandFootprints: @ 0x084D0F0C
	.incbin "build/graphics/field_effects/pics/sand_footprints.4bpp"

	.globl gFieldEffectObjectPic_DeepSandFootprints
gFieldEffectObjectPic_DeepSandFootprints: @ 0x084D100C
	.incbin "build/graphics/field_effects/pics/deep_sand_footprints.4bpp"

	.globl gFieldEffectObjectPic_BikeTireTracks
gFieldEffectObjectPic_BikeTireTracks: @ 0x084D110C
	.incbin "build/graphics/field_effects/pics/bike_tire_tracks.4bpp"

	.globl gFieldEffectObjectPic_UnusedSand
gFieldEffectObjectPic_UnusedSand: @ 0x084D130C
	.incbin "build/graphics/field_effects/pics/unused_sand.4bpp"

	.globl gFieldEffectObjectPic_SandPile
gFieldEffectObjectPic_SandPile: @ 0x084D150C
	.incbin "build/graphics/field_effects/pics/sand_pile.4bpp"

	.globl gFieldEffectObjectPic_JumpBigSplash
gFieldEffectObjectPic_JumpBigSplash: @ 0x084D15CC
	.incbin "build/graphics/field_effects/pics/jump_big_splash.4bpp"

	.globl gFieldEffectObjectPic_Splash
gFieldEffectObjectPic_Splash: @ 0x084D17CC
	.incbin "build/graphics/field_effects/pics/splash.4bpp"

	.globl gFieldEffectObjectPic_JumpSmallSplash
gFieldEffectObjectPic_JumpSmallSplash: @ 0x084D184C
	.incbin "build/graphics/field_effects/pics/jump_small_splash.4bpp"

	.globl gFieldEffectObjectPic_WaterSurfacing
gFieldEffectObjectPic_WaterSurfacing: @ 0x084D190C
	.incbin "build/graphics/field_effects/pics/water_surfacing.4bpp"

	.globl gFieldEffectObjectPic_TreeDisguise
gFieldEffectObjectPic_TreeDisguise: @ 0x084D1B8C
	.incbin "build/graphics/field_effects/pics/tree_disguise.4bpp"

	.globl gFieldEffectObjectPic_MountainDisguise
gFieldEffectObjectPic_MountainDisguise: @ 0x084D228C
	.incbin "build/graphics/field_effects/pics/mountain_disguise.4bpp"

	.globl gFieldEffectObjectPic_SandDisguisePlaceholder
gFieldEffectObjectPic_SandDisguisePlaceholder: @ 0x084D298C
	.incbin "build/graphics/field_effects/pics/sand_disguise_placeholder.4bpp"

	.globl gFieldEffectObjectPic_HotSpringsWater
gFieldEffectObjectPic_HotSpringsWater: @ 0x084D308C
	.incbin "build/graphics/field_effects/pics/hot_springs_water.4bpp"

	.globl gFieldEffectPal_Ash
gFieldEffectPal_Ash: @ 0x084D310C
	.incbin "build/graphics/field_effects/palettes/ash.gbapal"

	.globl gFieldEffectObjectPic_AshPuff
gFieldEffectObjectPic_AshPuff: @ 0x084D312C
	.incbin "build/graphics/field_effects/pics/ash_puff.4bpp"

	.globl gFieldEffectObjectPic_AshLaunch
gFieldEffectObjectPic_AshLaunch: @ 0x084D33AC
	.incbin "build/graphics/field_effects/pics/ash_launch.4bpp"

	.globl gFieldEffectObjectPic_Bubbles
gFieldEffectObjectPic_Bubbles: @ 0x084D362C
	.incbin "build/graphics/field_effects/pics/bubbles.4bpp"

	.globl gFieldEffectObjectPic_SmallSparkle
gFieldEffectObjectPic_SmallSparkle: @ 0x084D3E2C
	.incbin "build/graphics/field_effects/pics/small_sparkle.4bpp"

	.globl gFieldEffectPal_SmallSparkle
gFieldEffectPal_SmallSparkle: @ 0x084D3F2C
	.incbin "build/graphics/field_effects/palettes/small_sparkle.gbapal"

	.globl gFieldEffectObjectPic_Bird
gFieldEffectObjectPic_Bird: @ 0x084D3F4C
	.incbin "build/graphics/field_effects/pics/bird.4bpp"
gObjectEventFrameGfx_JP_084D414C: @ 0x084D414C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x0, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D424C
gObjectEventFrameGfx_JP_084D424C: @ 0x084D424C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x100, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D434C
gObjectEventFrameGfx_JP_084D434C: @ 0x084D434C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x200, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D444C
gObjectEventFrameGfx_JP_084D444C: @ 0x084D444C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x300, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D454C
gObjectEventFrameGfx_JP_084D454C: @ 0x084D454C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x400, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D464C
gObjectEventFrameGfx_JP_084D464C: @ 0x084D464C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x500, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D474C
gObjectEventFrameGfx_JP_084D474C: @ 0x084D474C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x600, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D484C
gObjectEventFrameGfx_JP_084D484C: @ 0x084D484C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x700, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D494C
gObjectEventFrameGfx_JP_084D494C: @ 0x084D494C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/gym_leaders/juan.4bpp", 0x800, 0x100 @ gObjectEventPic_Juan frame slice
	.globl gObjectEventFrameGfx_JP_084D4A4C
gObjectEventFrameGfx_JP_084D4A4C: @ 0x084D4A4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x0, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D4B4C
gObjectEventFrameGfx_JP_084D4B4C: @ 0x084D4B4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x100, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D4C4C
gObjectEventFrameGfx_JP_084D4C4C: @ 0x084D4C4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x200, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D4D4C
gObjectEventFrameGfx_JP_084D4D4C: @ 0x084D4D4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x300, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D4E4C
gObjectEventFrameGfx_JP_084D4E4C: @ 0x084D4E4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x400, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D4F4C
gObjectEventFrameGfx_JP_084D4F4C: @ 0x084D4F4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x500, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D504C
gObjectEventFrameGfx_JP_084D504C: @ 0x084D504C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x600, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D514C
gObjectEventFrameGfx_JP_084D514C: @ 0x084D514C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x700, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D524C
gObjectEventFrameGfx_JP_084D524C: @ 0x084D524C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/scott.4bpp", 0x800, 0x100 @ gObjectEventPic_Scott frame slice
	.globl gObjectEventFrameGfx_JP_084D534C
gObjectEventFrameGfx_JP_084D534C: @ 0x084D534C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/misc/statue.4bpp", 0x0, 0x100 @ gObjectEventPic_Statue frame slice
	.globl gObjectEventFrameGfx_JP_084D544C
gObjectEventFrameGfx_JP_084D544C: @ 0x084D544C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x0, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D554C
gObjectEventFrameGfx_JP_084D554C: @ 0x084D554C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x100, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D564C
gObjectEventFrameGfx_JP_084D564C: @ 0x084D564C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x200, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D574C
gObjectEventFrameGfx_JP_084D574C: @ 0x084D574C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x300, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D584C
gObjectEventFrameGfx_JP_084D584C: @ 0x084D584C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x400, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D594C
gObjectEventFrameGfx_JP_084D594C: @ 0x084D594C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x500, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D5A4C
gObjectEventFrameGfx_JP_084D5A4C: @ 0x084D5A4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x600, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D5B4C
gObjectEventFrameGfx_JP_084D5B4C: @ 0x084D5B4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x700, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D5C4C
gObjectEventFrameGfx_JP_084D5C4C: @ 0x084D5C4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/kirlia.4bpp", 0x800, 0x100 @ gObjectEventPic_Kirlia frame slice
	.globl gObjectEventFrameGfx_JP_084D5D4C
gObjectEventFrameGfx_JP_084D5D4C: @ 0x084D5D4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x0, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D5E4C
gObjectEventFrameGfx_JP_084D5E4C: @ 0x084D5E4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x100, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D5F4C
gObjectEventFrameGfx_JP_084D5F4C: @ 0x084D5F4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x200, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D604C
gObjectEventFrameGfx_JP_084D604C: @ 0x084D604C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x300, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D614C
gObjectEventFrameGfx_JP_084D614C: @ 0x084D614C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x400, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D624C
gObjectEventFrameGfx_JP_084D624C: @ 0x084D624C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x500, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D634C
gObjectEventFrameGfx_JP_084D634C: @ 0x084D634C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x600, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D644C
gObjectEventFrameGfx_JP_084D644C: @ 0x084D644C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x700, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D654C
gObjectEventFrameGfx_JP_084D654C: @ 0x084D654C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/dusclops.4bpp", 0x800, 0x100 @ gObjectEventPic_Dusclops frame slice
	.globl gObjectEventFrameGfx_JP_084D664C
gObjectEventFrameGfx_JP_084D664C: @ 0x084D664C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/mystery_event_deliveryman.4bpp", 0x0, 0x100 @ gObjectEventPic_MysteryEventDeliveryman frame slice
	.globl gObjectEventFrameGfx_JP_084D674C
gObjectEventFrameGfx_JP_084D674C: @ 0x084D674C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/mystery_event_deliveryman.4bpp", 0x100, 0x100 @ gObjectEventPic_MysteryEventDeliveryman frame slice
	.globl gObjectEventFrameGfx_JP_084D684C
gObjectEventFrameGfx_JP_084D684C: @ 0x084D684C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/mystery_event_deliveryman.4bpp", 0x200, 0x100 @ gObjectEventPic_MysteryEventDeliveryman frame slice
	.globl gObjectEventFrameGfx_JP_084D694C
gObjectEventFrameGfx_JP_084D694C: @ 0x084D694C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/union_room_attendant.4bpp", 0x0, 0x100 @ gObjectEventPic_UnionRoomAttendant frame slice
	.globl gObjectEventFrameGfx_JP_084D6A4C
gObjectEventFrameGfx_JP_084D6A4C: @ 0x084D6A4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/union_room_attendant.4bpp", 0x100, 0x100 @ gObjectEventPic_UnionRoomAttendant frame slice
	.globl gObjectEventFrameGfx_JP_084D6B4C
gObjectEventFrameGfx_JP_084D6B4C: @ 0x084D6B4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/union_room_attendant.4bpp", 0x200, 0x100 @ gObjectEventPic_UnionRoomAttendant frame slice
	.globl gObjectEventFrameGfx_JP_084D6C4C
gObjectEventFrameGfx_JP_084D6C4C: @ 0x084D6C4C
	@ 4bpp frame payload; byte size = 0x80 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/misc/moving_box.4bpp", 0x0, 0x80 @ gObjectEventPic_MovingBox frame slice
	.globl gObjectEventPal_JP_084D6CCC
gObjectEventPal_JP_084D6CCC: @ 0x084D6CCC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	@ unreferenced payload gap: 0x084D6CCC-0x084D6CEB
	.byte 0x0E, 0x53, 0x10, 0x4A, 0xCE, 0x41, 0x8C, 0x41, 0xFF, 0x7F, 0x1F, 0x7C, 0xE7, 0x18, 0x28, 0x35
	.byte 0xC5, 0x2C, 0x7B, 0x77, 0xF7, 0x6A, 0x73, 0x56, 0x57, 0x46, 0xD3, 0x39, 0x8C, 0x35, 0x00, 0x00
	.globl gObjectEventFrameGfx_JP_084D6CEC
gObjectEventFrameGfx_JP_084D6CEC: @ 0x084D6CEC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/sudowoodo.4bpp", 0x0, 0x100 @ gObjectEventPic_Sudowoodo frame slice
	.globl gObjectEventFrameGfx_JP_084D6DEC
gObjectEventFrameGfx_JP_084D6DEC: @ 0x084D6DEC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/sudowoodo.4bpp", 0x100, 0x100 @ gObjectEventPic_Sudowoodo frame slice
	.globl gObjectEventFrameGfx_JP_084D6EEC
gObjectEventFrameGfx_JP_084D6EEC: @ 0x084D6EEC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/sudowoodo.4bpp", 0x200, 0x100 @ gObjectEventPic_Sudowoodo frame slice
	.globl gObjectEventFrameGfx_JP_084D6FEC
gObjectEventFrameGfx_JP_084D6FEC: @ 0x084D6FEC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x0, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D70EC
gObjectEventFrameGfx_JP_084D70EC: @ 0x084D70EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x100, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D71EC
gObjectEventFrameGfx_JP_084D71EC: @ 0x084D71EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x200, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D72EC
gObjectEventFrameGfx_JP_084D72EC: @ 0x084D72EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x300, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D73EC
gObjectEventFrameGfx_JP_084D73EC: @ 0x084D73EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x400, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D74EC
gObjectEventFrameGfx_JP_084D74EC: @ 0x084D74EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x500, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D75EC
gObjectEventFrameGfx_JP_084D75EC: @ 0x084D75EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x600, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D76EC
gObjectEventFrameGfx_JP_084D76EC: @ 0x084D76EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x700, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventFrameGfx_JP_084D77EC
gObjectEventFrameGfx_JP_084D77EC: @ 0x084D77EC
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/mew.4bpp", 0x800, 0x100 @ gObjectEventPic_Mew frame slice
	.globl gObjectEventPal_JP_084D78EC
gObjectEventPal_JP_084D78EC: @ 0x084D78EC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	@ unreferenced payload gap: 0x084D78EC-0x084D790B
	.byte 0x0E, 0x53, 0x5F, 0x63, 0x1F, 0x4B, 0x5B, 0x3A, 0xB5, 0x2D, 0xBF, 0x25, 0xF8, 0x1C, 0x10, 0x21
	.byte 0x8E, 0x62, 0xE7, 0x3C, 0x7F, 0x2F, 0x77, 0x1E, 0x5A, 0x73, 0xD6, 0x6A, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventFrameGfx_JP_084D790C
gObjectEventFrameGfx_JP_084D790C: @ 0x084D790C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x0, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D7A0C
gObjectEventFrameGfx_JP_084D7A0C: @ 0x084D7A0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x100, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D7B0C
gObjectEventFrameGfx_JP_084D7B0C: @ 0x084D7B0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x200, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D7C0C
gObjectEventFrameGfx_JP_084D7C0C: @ 0x084D7C0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x300, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D7D0C
gObjectEventFrameGfx_JP_084D7D0C: @ 0x084D7D0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x400, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D7E0C
gObjectEventFrameGfx_JP_084D7E0C: @ 0x084D7E0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x500, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D7F0C
gObjectEventFrameGfx_JP_084D7F0C: @ 0x084D7F0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x600, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D800C
gObjectEventFrameGfx_JP_084D800C: @ 0x084D800C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x700, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D810C
gObjectEventFrameGfx_JP_084D810C: @ 0x084D810C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/red.4bpp", 0x800, 0x100 @ gObjectEventPic_Red frame slice
	.globl gObjectEventFrameGfx_JP_084D820C
gObjectEventFrameGfx_JP_084D820C: @ 0x084D820C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x0, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D830C
gObjectEventFrameGfx_JP_084D830C: @ 0x084D830C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x100, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D840C
gObjectEventFrameGfx_JP_084D840C: @ 0x084D840C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x200, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D850C
gObjectEventFrameGfx_JP_084D850C: @ 0x084D850C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x300, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D860C
gObjectEventFrameGfx_JP_084D860C: @ 0x084D860C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x400, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D870C
gObjectEventFrameGfx_JP_084D870C: @ 0x084D870C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x500, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D880C
gObjectEventFrameGfx_JP_084D880C: @ 0x084D880C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x600, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D890C
gObjectEventFrameGfx_JP_084D890C: @ 0x084D890C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x700, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventFrameGfx_JP_084D8A0C
gObjectEventFrameGfx_JP_084D8A0C: @ 0x084D8A0C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/leaf.4bpp", 0x800, 0x100 @ gObjectEventPic_Leaf frame slice
	.globl gObjectEventPal_JP_084D8B0C
gObjectEventPal_JP_084D8B0C: @ 0x084D8B0C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	@ unreferenced payload gap: 0x084D8B0C-0x084D8B2B
	.byte 0x0E, 0x53, 0xD6, 0x5A, 0x52, 0x4A, 0x6B, 0x31, 0xE7, 0x24, 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C
	.byte 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0x7B, 0x6F, 0x00, 0x00
	.globl gObjectEventFrameGfx_JP_084D8B2C
gObjectEventFrameGfx_JP_084D8B2C: @ 0x084D8B2C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/misc/birth_island_stone.4bpp", 0x0, 0x200 @ gObjectEventPic_BirthIslandStone frame slice
	.globl gObjectEventPal_JP_084D8D2C
gObjectEventPal_JP_084D8D2C: @ 0x084D8D2C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	@ unreferenced payload gap: 0x084D8D2C-0x084D8D4B
	.byte 0x0E, 0x53, 0x3E, 0x3A, 0x99, 0x25, 0x56, 0x1D, 0xED, 0x00, 0x2F, 0x63, 0x0A, 0x3E, 0x04, 0x1D
	.byte 0x38, 0x76, 0x52, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x25, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventFrameGfx_JP_084D8D4C
gObjectEventFrameGfx_JP_084D8D4C: @ 0x084D8D4C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/deoxys.4bpp", 0x0, 0x200 @ gObjectEventPic_Deoxys frame slice
	.globl gObjectEventFrameGfx_JP_084D8F4C
gObjectEventFrameGfx_JP_084D8F4C: @ 0x084D8F4C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/deoxys.4bpp", 0x200, 0x200 @ gObjectEventPic_Deoxys frame slice
	.globl gObjectEventFrameGfx_JP_084D914C
gObjectEventFrameGfx_JP_084D914C: @ 0x084D914C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x0, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D924C
gObjectEventFrameGfx_JP_084D924C: @ 0x084D924C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x100, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D934C
gObjectEventFrameGfx_JP_084D934C: @ 0x084D934C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x200, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D944C
gObjectEventFrameGfx_JP_084D944C: @ 0x084D944C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x300, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D954C
gObjectEventFrameGfx_JP_084D954C: @ 0x084D954C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x400, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D964C
gObjectEventFrameGfx_JP_084D964C: @ 0x084D964C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x500, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D974C
gObjectEventFrameGfx_JP_084D974C: @ 0x084D974C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x600, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D984C
gObjectEventFrameGfx_JP_084D984C: @ 0x084D984C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x700, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D994C
gObjectEventFrameGfx_JP_084D994C: @ 0x084D994C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/anabel.4bpp", 0x800, 0x100 @ gObjectEventPic_Anabel frame slice
	.globl gObjectEventFrameGfx_JP_084D9A4C
gObjectEventFrameGfx_JP_084D9A4C: @ 0x084D9A4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x0, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084D9B4C
gObjectEventFrameGfx_JP_084D9B4C: @ 0x084D9B4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x100, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084D9C4C
gObjectEventFrameGfx_JP_084D9C4C: @ 0x084D9C4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x200, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084D9D4C
gObjectEventFrameGfx_JP_084D9D4C: @ 0x084D9D4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x300, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084D9E4C
gObjectEventFrameGfx_JP_084D9E4C: @ 0x084D9E4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x400, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084D9F4C
gObjectEventFrameGfx_JP_084D9F4C: @ 0x084D9F4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x500, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084DA04C
gObjectEventFrameGfx_JP_084DA04C: @ 0x084DA04C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x600, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084DA14C
gObjectEventFrameGfx_JP_084DA14C: @ 0x084DA14C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x700, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084DA24C
gObjectEventFrameGfx_JP_084DA24C: @ 0x084DA24C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/tucker.4bpp", 0x800, 0x100 @ gObjectEventPic_Tucker frame slice
	.globl gObjectEventFrameGfx_JP_084DA34C
gObjectEventFrameGfx_JP_084DA34C: @ 0x084DA34C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x0, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DA44C
gObjectEventFrameGfx_JP_084DA44C: @ 0x084DA44C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x100, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DA54C
gObjectEventFrameGfx_JP_084DA54C: @ 0x084DA54C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x200, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DA64C
gObjectEventFrameGfx_JP_084DA64C: @ 0x084DA64C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x300, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DA74C
gObjectEventFrameGfx_JP_084DA74C: @ 0x084DA74C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x400, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DA84C
gObjectEventFrameGfx_JP_084DA84C: @ 0x084DA84C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x500, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DA94C
gObjectEventFrameGfx_JP_084DA94C: @ 0x084DA94C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x600, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DAA4C
gObjectEventFrameGfx_JP_084DAA4C: @ 0x084DAA4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x700, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DAB4C
gObjectEventFrameGfx_JP_084DAB4C: @ 0x084DAB4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/spenser.4bpp", 0x800, 0x100 @ gObjectEventPic_Spenser frame slice
	.globl gObjectEventFrameGfx_JP_084DAC4C
gObjectEventFrameGfx_JP_084DAC4C: @ 0x084DAC4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x0, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DAD4C
gObjectEventFrameGfx_JP_084DAD4C: @ 0x084DAD4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x100, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DAE4C
gObjectEventFrameGfx_JP_084DAE4C: @ 0x084DAE4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x200, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DAF4C
gObjectEventFrameGfx_JP_084DAF4C: @ 0x084DAF4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x300, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DB04C
gObjectEventFrameGfx_JP_084DB04C: @ 0x084DB04C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x400, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DB14C
gObjectEventFrameGfx_JP_084DB14C: @ 0x084DB14C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x500, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DB24C
gObjectEventFrameGfx_JP_084DB24C: @ 0x084DB24C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x600, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DB34C
gObjectEventFrameGfx_JP_084DB34C: @ 0x084DB34C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x700, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DB44C
gObjectEventFrameGfx_JP_084DB44C: @ 0x084DB44C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/greta.4bpp", 0x800, 0x100 @ gObjectEventPic_Greta frame slice
	.globl gObjectEventFrameGfx_JP_084DB54C
gObjectEventFrameGfx_JP_084DB54C: @ 0x084DB54C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x0, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DB64C
gObjectEventFrameGfx_JP_084DB64C: @ 0x084DB64C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x100, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DB74C
gObjectEventFrameGfx_JP_084DB74C: @ 0x084DB74C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x200, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DB84C
gObjectEventFrameGfx_JP_084DB84C: @ 0x084DB84C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x300, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DB94C
gObjectEventFrameGfx_JP_084DB94C: @ 0x084DB94C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x400, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DBA4C
gObjectEventFrameGfx_JP_084DBA4C: @ 0x084DBA4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x500, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DBB4C
gObjectEventFrameGfx_JP_084DBB4C: @ 0x084DBB4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x600, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DBC4C
gObjectEventFrameGfx_JP_084DBC4C: @ 0x084DBC4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x700, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DBD4C
gObjectEventFrameGfx_JP_084DBD4C: @ 0x084DBD4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/noland.4bpp", 0x800, 0x100 @ gObjectEventPic_Noland frame slice
	.globl gObjectEventFrameGfx_JP_084DBE4C
gObjectEventFrameGfx_JP_084DBE4C: @ 0x084DBE4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x0, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DBF4C
gObjectEventFrameGfx_JP_084DBF4C: @ 0x084DBF4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x100, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC04C
gObjectEventFrameGfx_JP_084DC04C: @ 0x084DC04C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x200, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC14C
gObjectEventFrameGfx_JP_084DC14C: @ 0x084DC14C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x300, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC24C
gObjectEventFrameGfx_JP_084DC24C: @ 0x084DC24C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x400, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC34C
gObjectEventFrameGfx_JP_084DC34C: @ 0x084DC34C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x500, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC44C
gObjectEventFrameGfx_JP_084DC44C: @ 0x084DC44C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x600, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC54C
gObjectEventFrameGfx_JP_084DC54C: @ 0x084DC54C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x700, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC64C
gObjectEventFrameGfx_JP_084DC64C: @ 0x084DC64C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/lucy.4bpp", 0x800, 0x100 @ gObjectEventPic_Lucy frame slice
	.globl gObjectEventFrameGfx_JP_084DC74C
gObjectEventFrameGfx_JP_084DC74C: @ 0x084DC74C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x0, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DC84C
gObjectEventFrameGfx_JP_084DC84C: @ 0x084DC84C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x100, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DC94C
gObjectEventFrameGfx_JP_084DC94C: @ 0x084DC94C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x200, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DCA4C
gObjectEventFrameGfx_JP_084DCA4C: @ 0x084DCA4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x300, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DCB4C
gObjectEventFrameGfx_JP_084DCB4C: @ 0x084DCB4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x400, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DCC4C
gObjectEventFrameGfx_JP_084DCC4C: @ 0x084DCC4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x500, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DCD4C
gObjectEventFrameGfx_JP_084DCD4C: @ 0x084DCD4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x600, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DCE4C
gObjectEventFrameGfx_JP_084DCE4C: @ 0x084DCE4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x700, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DCF4C
gObjectEventFrameGfx_JP_084DCF4C: @ 0x084DCF4C
	@ 4bpp frame payload; byte size = 0x100 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/people/frontier_brains/brandon.4bpp", 0x800, 0x100 @ gObjectEventPic_Brandon frame slice
	.globl gObjectEventFrameGfx_JP_084DD04C
gObjectEventFrameGfx_JP_084DD04C: @ 0x084DD04C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/lugia.4bpp", 0x0, 0x200 @ gObjectEventPic_Lugia frame slice
	.globl gObjectEventFrameGfx_JP_084DD24C
gObjectEventFrameGfx_JP_084DD24C: @ 0x084DD24C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/lugia.4bpp", 0x200, 0x200 @ gObjectEventPic_Lugia frame slice
	.globl gObjectEventPal_JP_084DD44C
gObjectEventPal_JP_084DD44C: @ 0x084DD44C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	@ unreferenced payload gap: 0x084DD44C-0x084DD46B
	.byte 0x0E, 0x53, 0x5F, 0x5B, 0xFE, 0x4A, 0x5B, 0x3A, 0x0F, 0x21, 0x9F, 0x5A, 0xBA, 0x3D, 0x11, 0x29
	.byte 0x12, 0x77, 0x0C, 0x66, 0xE7, 0x24, 0x18, 0x6B, 0x31, 0x4A, 0x29, 0x2D, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventFrameGfx_JP_084DD46C
gObjectEventFrameGfx_JP_084DD46C: @ 0x084DD46C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/ho_oh.4bpp", 0x0, 0x200 @ gObjectEventPic_HoOh frame slice
	.globl gObjectEventFrameGfx_JP_084DD66C
gObjectEventFrameGfx_JP_084DD66C: @ 0x084DD66C
	@ 4bpp frame payload; byte size = 0x200 from SpriteFrameImage
	.incbin "build/graphics/object_events/pics/pokemon/ho_oh.4bpp", 0x200, 0x200 @ gObjectEventPic_HoOh frame slice
	.globl gObjectEventPal_JP_084DD86C
gObjectEventPal_JP_084DD86C: @ 0x084DD86C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ Object-event sprite palette/tag data.
	@ 16-color object-event palette
	@ unreferenced payload gap: 0x084DD86C-0x084DD88B
	.byte 0x0E, 0x53, 0x5F, 0x5B, 0xFE, 0x4A, 0x5B, 0x3A, 0x0F, 0x21, 0x7F, 0x27, 0xBA, 0x12, 0x90, 0x01
	.byte 0x34, 0x76, 0x4D, 0x5D, 0xE8, 0x30, 0xDD, 0x21, 0x15, 0x1D, 0xC9, 0x18, 0xFF, 0x7F, 0x00, 0x00
