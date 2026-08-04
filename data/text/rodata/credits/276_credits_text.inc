	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1E2
gText_Rom_5CD1E2: @ 0x085CD1E2
	.string "でした$"
	.if (. - gText_Rom_5CD1E2) > 0x4
	.error "gText_Rom_5CD1E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1E2) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1E2)
	.endif

	.globl gText_MysteryEventSaveSucceeded
gText_MysteryEventSaveSucceeded: @ 0x085CD1E6
	.string "セーブできました$"
	.if (. - gText_MysteryEventSaveSucceeded) != 0x9
	.error "gText_MysteryEventSaveSucceeded must retain its original byte length"
	.endif

	@ The final "でした$" suffix is emitted at 0x085CD1F7 below.
	.globl gText_MysteryEventLoadFailed
gText_MysteryEventLoadFailed: @ 0x085CD1EF
	.string "ロードできません"
	.if (. - gText_MysteryEventLoadFailed) != 0x8
	.error "gText_MysteryEventLoadFailed prefix must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1F7
gText_Rom_5CD1F7: @ 0x085CD1F7
	.string "でした$"
	.if (. - gText_Rom_5CD1F7) > 0x4
	.error "gText_Rom_5CD1F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1F7)
	.endif

	.globl gText_MysteryEventLoadSucceeded
gText_MysteryEventLoadSucceeded: @ 0x085CD1FB
	.string "ロードできました$"
	.if (. - gText_MysteryEventLoadSucceeded) != 0x9
	.error "gText_MysteryEventLoadSucceeded must retain its original byte length"
	.endif

	.globl gMysteryEventBgTemplates
gMysteryEventBgTemplates: @ 0x085CD204
	bg_template 0, 2, 31, 0, 0, 0, 0
	.if (. - gMysteryEventBgTemplates) != 0x4
	.error "gMysteryEventBgTemplates must contain one 4-byte entry"
	.endif

	.globl gMysteryEventWindowTemplates
gMysteryEventWindowTemplates: @ 0x085CD208
	window_template 0, 4, 15, 22, 4, 14, 0x14
	window_template 0, 7, 6, 16, 4, 14, 0x6C
	null_window_template
	.if (. - gMysteryEventWindowTemplates) != 0x18
	.error "gMysteryEventWindowTemplates must contain two entries and a terminator"
	.endif

	.globl gSaveFailedClockOamData
gSaveFailedClockOamData: @ 0x085CD220
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0
	.if (. - gSaveFailedClockOamData) != 0x8
	.error "gSaveFailedClockOamData must contain one OAM entry"
	.endif

	.globl gSaveFailedBgTemplates
gSaveFailedBgTemplates: @ 0x085CD228
	bg_template 0, 2, 31, 0, 0, 0, 0
	bg_template 2, 0, 14, 0, 0, 2, 0
	bg_template 3, 0, 15, 0, 0, 3, 0
	.if (. - gSaveFailedBgTemplates) != 0xC
	.error "gSaveFailedBgTemplates must contain three entries"
	.endif

	.globl gSaveFailedWindowTemplates
gSaveFailedWindowTemplates: @ 0x085CD234
	null_window_template
	.if (. - gSaveFailedWindowTemplates) != 0x8
	.error "gSaveFailedWindowTemplates must contain one terminator"
	.endif

	.globl gSaveFailedMainWindowTemplate
gSaveFailedMainWindowTemplate: @ 0x085CD23C
	window_template 0, 1, 13, 28, 6, 15, 0x1
	.if (. - gSaveFailedMainWindowTemplate) != 0x8
	.error "gSaveFailedMainWindowTemplate must contain one entry"
	.endif

	.globl gSaveFailedClockWindowTemplate
gSaveFailedClockWindowTemplate: @ 0x085CD244
	window_template 0, 14, 9, 2, 2, 15, 0xA9
	.if (. - gSaveFailedClockWindowTemplate) != 0x8
	.error "gSaveFailedClockWindowTemplate must contain one entry"
	.endif

	.globl gSaveFailedClockFrameData
gSaveFailedClockFrameData: @ 0x085CD24C
	.byte 1, 0, 0 @ frame 0
	.byte 5, 0, 0 @ frame 1
	.byte 9, 0, 0 @ frame 2
	.byte 5, 0, 1 @ frame 3
	.byte 1, 0, 1 @ frame 4
	.byte 5, 1, 1 @ frame 5
	.byte 9, 1, 0 @ frame 6
	.byte 5, 1, 0 @ frame 7
	.if (. - gSaveFailedClockFrameData) != 0x18
	.error "gSaveFailedClockFrameData must contain eight 3-byte entries"
	.endif

	.globl gSaveFailedClockPalette
gSaveFailedClockPalette: @ 0x085CD264
	.2byte 0x2E2C, 0x0000, 0x1CE7, 0x3DEF, 0x5EF7, 0x7FFF, 0x151F, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.if (. - gSaveFailedClockPalette) != 0x20
	.error "gSaveFailedClockPalette must contain 16 colors"
	.endif

	.globl gSaveFailedClockGraphics
gSaveFailedClockGraphics: @ 0x085CD284
	.incbin "build/graphics/save_failed_screen/clock.4bpp.lz"
	.if (. - gSaveFailedClockGraphics) != 0x90
	.error "gSaveFailedClockGraphics must retain its original compressed size"
	.endif

	.globl gRegicePuzzleRequiredPositions
gRegicePuzzleRequiredPositions: @ 0x085CD314
	.byte  4, 21 @  0
	.byte  5, 21 @  1
	.byte  6, 21 @  2
	.byte  7, 21 @  3
	.byte  8, 21 @  4
	.byte  9, 21 @  5
	.byte 10, 21 @  6
	.byte 11, 21 @  7
	.byte 12, 21 @  8
	.byte 12, 22 @  9
	.byte 12, 23 @ 10
	.byte 13, 23 @ 11
	.byte 13, 24 @ 12
	.byte 13, 25 @ 13
	.byte 13, 26 @ 14
	.byte 13, 27 @ 15
	.byte 12, 27 @ 16
	.byte 12, 28 @ 17
	.byte  4, 29 @ 18
	.byte  5, 29 @ 19
	.byte  6, 29 @ 20
	.byte  7, 29 @ 21
	.byte  8, 29 @ 22
	.byte  9, 29 @ 23
	.byte 10, 29 @ 24
	.byte 11, 29 @ 25
	.byte 12, 29 @ 26
	.byte  4, 28 @ 27
	.byte  4, 27 @ 28
	.byte  3, 27 @ 29
	.byte  3, 26 @ 30
	.byte  3, 25 @ 31
	.byte  3, 24 @ 32
	.byte  3, 23 @ 33
	.byte  4, 23 @ 34
	.byte  4, 22 @ 35
	.if (. - gRegicePuzzleRequiredPositions) != 36 * 2
	.error "gRegicePuzzleRequiredPositions must contain 36 coordinate pairs"
	.endif

	@ Indexed by nature. Each entry contains a motion sequence start index
	@ followed by an affine animation selector.
	.globl gPokeblockFeedNatureAnimationInfo
gPokeblockFeedNatureAnimationInfo: @ 0x085CD35C
	.byte  0, 0 @ Hardy  / がんばりや
	.byte  3, 0 @ Lonely / さみしがり
	.byte  4, 1 @ Brave  / ゆうかん
	.byte  5, 0 @ Adamant / いじっぱり
	.byte 10, 0 @ Naughty / やんちゃ
	.byte 13, 0 @ Bold   / ずぶとい
	.byte 15, 0 @ Docile / すなお
	.byte 16, 2 @ Relaxed / のんき
	.byte 18, 0 @ Impish / わんぱく
	.byte 19, 0 @ Lax    / のうてんき
	.byte 20, 0 @ Timid  / おくびょう
	.byte 25, 0 @ Hasty  / せっかち
	.byte 27, 3 @ Serious / まじめ
	.byte 28, 0 @ Jolly  / ようき
	.byte 29, 0 @ Naive  / むじゃき
	.byte 33, 4 @ Modest / ひかえめ
	.byte 36, 0 @ Mild   / おっとり
	.byte 37, 0 @ Quiet  / れいせい
	.byte 39, 0 @ Bashful / てれや
	.byte 42, 0 @ Rash   / うっかりや
	.byte 45, 0 @ Calm   / おだやか
	.byte 46, 5 @ Gentle / おとなしい
	.byte 47, 6 @ Sassy  / なまいき
	.byte 48, 0 @ Careful / しんちょう
	.byte 53, 0 @ Quirky / きまぐれ
	.if (. - gPokeblockFeedNatureAnimationInfo) != 25 * 2
	.error "gPokeblockFeedNatureAnimationInfo must contain 25 entries"
	.endif

	@ Fields: initial angle, angle delta, horizontal amplitude,
	@ vertical amplitude, duration, phase delta, position offsets,
	@ interpolation start, and sequence-end flag.
	.globl gPokeblockFeedMotionSteps
gPokeblockFeedMotionSteps: @ 0x085CD38E
	pokeblock_feed_motion_step   0,  4,   0,  8,  24, 0,   0, 0, 12, 0 @  0: Hardy
	pokeblock_feed_motion_step   0,  4,   0, 16,  24, 0,   0, 0, 12, 0 @  1
	pokeblock_feed_motion_step   0,  4,   0, 32,  32, 0,   0, 0, 16, 1 @  2
	pokeblock_feed_motion_step   0,  3,   6,  0,  48, 0,   0, 0, 24, 1 @  3: Lonely
	pokeblock_feed_motion_step  64, 16, -24,  0,  32, 0,   0, 0,  0, 1 @  4: Brave
	pokeblock_feed_motion_step   0,  4,   8,  0,  16, 0,  -8, 0,  0, 0 @  5: Adamant
	pokeblock_feed_motion_step   0,  0,   0,  0,  16, 0,   0, 0,  0, 0 @  6
	pokeblock_feed_motion_step   0,  4,   8,  0,  16, 0,  -8, 0,  0, 0 @  7
	pokeblock_feed_motion_step   0,  0,   0,  0,  16, 0,   0, 0,  0, 0 @  8
	pokeblock_feed_motion_step   0,  4, -16,  0,   4, 0,  16, 0,  0, 1 @  9
	pokeblock_feed_motion_step   0,  3,   6,  0,  12, 0,   0, 0,  6, 0 @ 10: Naughty
	pokeblock_feed_motion_step   0,  3,  -6,  0,  12, 0,   0, 0,  6, 0 @ 11
	pokeblock_feed_motion_step   0, 16,  16,  0,  45, 1,   0, 0,  0, 1 @ 12
	pokeblock_feed_motion_step   0, 16,   0, 24,  32, 0,   0, 0, 16, 0 @ 13: Bold
	pokeblock_feed_motion_step   0, 16,   0, 23,  32, 0,   0, 0, 16, 1 @ 14
	pokeblock_feed_motion_step   0,  0,   0,  0,  80, 0,   0, 0,  0, 1 @ 15: Docile
	pokeblock_feed_motion_step   0,  2,   8,  0,  32, 0,   0, 0,  0, 0 @ 16: Relaxed
	pokeblock_feed_motion_step   0,  2,  -8,  0,  32, 0,   0, 0,  0, 1 @ 17
	pokeblock_feed_motion_step   0, 32,   2,  1,  48, 1,   0, 0, 24, 1 @ 18: Impish
	pokeblock_feed_motion_step   0,  2,  16, 16, 128, 0,   0, 0,  0, 1 @ 19: Lax
	pokeblock_feed_motion_step   0,  2,  -8,  0,  48, 0, -24, 0,  0, 0 @ 20: Timid
	pokeblock_feed_motion_step   0,  0,   0,  0,   8, 0,   0, 0,  0, 0 @ 21
	pokeblock_feed_motion_step  64, 32,   2,  0,  36, 0,   0, 0,  0, 0 @ 22
	pokeblock_feed_motion_step   0,  0,   0,  0,   8, 0,   0, 0,  0, 0 @ 23
	pokeblock_feed_motion_step   0,  2,   8,  0,  48, 0,  24, 0,  0, 1 @ 24
	pokeblock_feed_motion_step  64, 24,  16,  0,  32, 0,   0, 0,  0, 0 @ 25: Hasty
	pokeblock_feed_motion_step   0, 28,   2,  1,  32, 1,   0, 0, 16, 1 @ 26
	pokeblock_feed_motion_step   0,  0,   0,  0,  32, 0,   0, 0,  0, 1 @ 27: Serious
	pokeblock_feed_motion_step  64, 16, -16,  2,  48, 0,   0, 0, 32, 1 @ 28: Jolly
	pokeblock_feed_motion_step   0, 12,  -8,  4,  24, 0,   8, 0, 12, 0 @ 29: Naive
	pokeblock_feed_motion_step   0, 12,   8,  8,  24, 0, -16, 0, 12, 0 @ 30
	pokeblock_feed_motion_step   0, 12,  -8, 16,  24, 0,  16, 0, 12, 0 @ 31
	pokeblock_feed_motion_step   0, 12,   8, 28,  24, 0,  -8, 0, 12, 1 @ 32
	pokeblock_feed_motion_step   0,  0,   0,  0,   8, 0,   0, 0,  0, 0 @ 33: Modest
	pokeblock_feed_motion_step  64, 16,  -4,  0,  32, 0,   0, 0,  0, 0 @ 34
	pokeblock_feed_motion_step   0,  0,   0,  0,   8, 0,   0, 0,  0, 1 @ 35
	pokeblock_feed_motion_step 128,  4,   0,  8,  64, 0,   0, 0,  0, 1 @ 36: Mild
	pokeblock_feed_motion_step   0,  2,  16,  0,  48, 0,   0, 0,  0, 0 @ 37: Quiet
	pokeblock_feed_motion_step 128,  2,  16,  0,  48, 0,   0, 0,  0, 1 @ 38
	pokeblock_feed_motion_step   0,  2,  -4,  0,  48, 0, -48, 0,  0, 0 @ 39: Bashful
	pokeblock_feed_motion_step   0,  0,   0,  0,  80, 0,   0, 0,  0, 0 @ 40
	pokeblock_feed_motion_step   0,  2,   8,  0,  24, 0,  48, 0,  0, 1 @ 41
	pokeblock_feed_motion_step  64,  4,  64, 58,  52, 0, -88, 0,  0, 0 @ 42: Rash
	pokeblock_feed_motion_step   0,  0,   0,  0,  80, 0,   0, 0,  0, 0 @ 43
	pokeblock_feed_motion_step   0, 24,  80,  0,  32, 0,  88, 0,  0, 1 @ 44
	pokeblock_feed_motion_step   0,  2,  16,  4,  64, 0,   0, 0,  0, 1 @ 45: Calm
	pokeblock_feed_motion_step   0,  0,   0,  0,  32, 0,   0, 0,  0, 1 @ 46: Gentle
	pokeblock_feed_motion_step   0,  0,   0,  0,  42, 0,   0, 0,  0, 1 @ 47: Sassy
	pokeblock_feed_motion_step   0,  4,   0,  8,  24, 0,   0, 0, 12, 0 @ 48: Careful
	pokeblock_feed_motion_step   0,  0,   0,  0,  12, 0,   0, 0,  0, 0 @ 49
	pokeblock_feed_motion_step   0,  4,   0, 12,  24, 0,   0, 0, 12, 0 @ 50
	pokeblock_feed_motion_step   0,  0,   0,  0,  12, 0,   0, 0,  0, 0 @ 51
	pokeblock_feed_motion_step   0,  4,   0,  4,  24, 0,   0, 0, 12, 1 @ 52
	pokeblock_feed_motion_step   0,  4,  16, 12,  64, 0,   0, 0,  0, 0 @ 53: Quirky
	pokeblock_feed_motion_step   0, -4,  16, 12,  64, 0,   0, 0,  0, 1 @ 54
	.space 2, 0 @ 4-byte alignment
	.if (. - gPokeblockFeedMotionSteps) != 55 * 20 + 2
	.error "gPokeblockFeedMotionSteps must contain 55 entries and alignment"
	.endif

	.globl gPokeblockFeedAffineAnim_HorizontalFlip
gPokeblockFeedAffineAnim_HorizontalFlip: @ 0x085CD7DC
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_1: @ 0x085CD7EC
	sprite_affine_anim_frame 0, 0,  12,  1
	sprite_affine_anim_frame 0, 0,   0, 30
	sprite_affine_anim_frame 0, 0, -12,  1
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_1Flipped: @ 0x085CD80C
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame 0, 0, 12,  1
	sprite_affine_anim_frame 0, 0,  0, 28
	sprite_affine_anim_frame 0, 0, -4,  3
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_2: @ 0x085CD834
	sprite_affine_anim_frame 0, 0,  1, 16
	sprite_affine_anim_frame 0, 0, -1, 32
	sprite_affine_anim_frame 0, 0,  1, 16
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_2Flipped: @ 0x085CD854
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame 0, 0,  1, 16
	sprite_affine_anim_frame 0, 0, -1, 32
	sprite_affine_anim_frame 0, 0,  1, 16
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_3: @ 0x085CD87C
	sprite_affine_anim_frame 0, 0, -1,  8
	sprite_affine_anim_frame 0, 0,  0, 16
	sprite_affine_anim_frame 0, 0,  1,  8
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_3Flipped: @ 0x085CD89C
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame 0, 0, -1,  8
	sprite_affine_anim_frame 0, 0,  0, 16
	sprite_affine_anim_frame 0, 0,  1,  8
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_4: @ 0x085CD8C4
	sprite_affine_anim_frame 0, 0, -1,  8
	sprite_affine_anim_frame 0, 0,  0, 32
	sprite_affine_anim_frame 0, 0,  1,  8
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_4Flipped: @ 0x085CD8E4
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame 0, 0, -1,  8
	sprite_affine_anim_frame 0, 0,  0, 32
	sprite_affine_anim_frame 0, 0,  1,  8
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_5: @ 0x085CD90C
	sprite_affine_anim_frame 0, 0, -1,  4
	sprite_affine_anim_frame 0, 0,  0, 24
	sprite_affine_anim_frame 0, 0,  1,  4
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_5Flipped: @ 0x085CD92C
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame 0, 0, -1,  4
	sprite_affine_anim_frame 0, 0,  0, 24
	sprite_affine_anim_frame 0, 0,  1,  4
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_6: @ 0x085CD954
	sprite_affine_anim_frame 0, 0,   1, 24
	sprite_affine_anim_frame 0, 0,   0, 16
	sprite_affine_anim_frame 0, 0, -12,  2
	sprite_affine_anim_end

gPokeblockFeedAffineAnim_6Flipped: @ 0x085CD974
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame 0, 0,   1, 24
	sprite_affine_anim_frame 0, 0,   0, 16
	sprite_affine_anim_frame 0, 0, -12,  2
	sprite_affine_anim_end
	.if (. - gPokeblockFeedAffineAnim_HorizontalFlip) != 0x1C0
	.error "Pokeblock feed affine animations must retain their original size"
	.endif

	.globl gPokeblockFeedAffineAnimTable
gPokeblockFeedAffineAnimTable: @ 0x085CD99C
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 0
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_1              @ 1
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_2              @ 2
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_3              @ 3
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_4              @ 4
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_5              @ 5
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_6              @ 6
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 7
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 8
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 9
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 10
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_1Flipped       @ 11
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_2Flipped       @ 12
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_3Flipped       @ 13
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_4Flipped       @ 14
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_5Flipped       @ 15
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_6Flipped       @ 16
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 17
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 18
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 19
	sprite_affine_anim_sequence gPokeblockFeedAffineAnim_HorizontalFlip @ 20
	.if (. - gPokeblockFeedAffineAnimTable) != 21 * 4
	.error "gPokeblockFeedAffineAnimTable must contain 21 pointers"
	.endif

	.globl gPokeblockFeedBgTemplates
gPokeblockFeedBgTemplates: @ 0x085CD9F0
	bg_template 0, 0, 31, 0, 0, 0, 0
	bg_template 1, 2, 30, 0, 0, 3, 0
	.if (. - gPokeblockFeedBgTemplates) != 2 * 4
	.error "gPokeblockFeedBgTemplates must contain two entries"
	.endif

	.globl gPokeblockFeedWindowTemplates
gPokeblockFeedWindowTemplates: @ 0x085CD9F8
	window_template 0, 1, 15, 28, 4, 15, 0xA
	null_window_template
	.if (. - gPokeblockFeedWindowTemplates) != 2 * 8
	.error "gPokeblockFeedWindowTemplates must contain one entry and a terminator"
	.endif

	.globl gPokeblockFeedPaletteTable
gPokeblockFeedPaletteTable: @ 0x085CDA08
	.4byte gPokeblockPalette_Red
	.4byte gPokeblockPalette_Blue
	.4byte gPokeblockPalette_Pink
	.4byte gPokeblockPalette_Green
	.4byte gPokeblockPalette_Yellow
	.4byte gPokeblockPalette_Purple
	.4byte gPokeblockPalette_Indigo
	.4byte gPokeblockPalette_Brown
	.4byte gPokeblockPalette_LiteBlue
	.4byte gPokeblockPalette_Olive
	.4byte gPokeblockPalette_Gray
	.4byte gPokeblockPalette_Black
	.4byte gPokeblockPalette_White
	.4byte gPokeblockPalette_Gold
	.if (. - gPokeblockFeedPaletteTable) != 14 * 4
	.error "gPokeblockFeedPaletteTable must contain fourteen pointers"
	.endif

	.globl gPokeblockFeedInitialFlipAffineAnim
gPokeblockFeedInitialFlipAffineAnim: @ 0x085CDA40
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_end

	.globl gPokeblockFeedMonAffineAnimTable
gPokeblockFeedMonAffineAnimTable: @ 0x085CDA50
	sprite_affine_anim_sequence gPokeblockFeedInitialFlipAffineAnim

gPokeblockCaseThrowAffineAnim_0: @ 0x085CDA54
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY,   0, 0
	.rept 4
	sprite_affine_anim_frame 0, 0,  -8, 1
	.endr
	sprite_affine_anim_frame 0, 0,   0, 8
	.rept 3
	sprite_affine_anim_frame 0, 0,  16, 1
	.endr
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY,   0, 0
	sprite_affine_anim_end

gPokeblockCaseThrowAffineAnim_1: @ 0x085CDAAC
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY,   0, 0
	.rept 4
	sprite_affine_anim_frame 0, 0,   8, 1
	.endr
	sprite_affine_anim_frame 0, 0,   0, 8
	.rept 3
	sprite_affine_anim_frame 0, 0, -16, 1
	.endr
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY,   0, 0
	sprite_affine_anim_end

	.globl gPokeblockCaseAffineAnimTable
gPokeblockCaseAffineAnimTable: @ 0x085CDB04
	sprite_affine_anim_sequence gPokeblockFeedInitialFlipAffineAnim

	.globl gPokeblockCaseThrowAffineAnimTable_0
gPokeblockCaseThrowAffineAnimTable_0: @ 0x085CDB08
	sprite_affine_anim_sequence gPokeblockCaseThrowAffineAnim_0

	.globl gPokeblockCaseThrowAffineAnimTable_1
gPokeblockCaseThrowAffineAnimTable_1: @ 0x085CDB0C
	sprite_affine_anim_sequence gPokeblockCaseThrowAffineAnim_1

gThrownPokeblockOamData: @ 0x085CDB10
	rodata_sprite_oam_data 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0

gThrownPokeblockAnim: @ 0x085CDB18
	sprite_anim_frame 0, 0
	sprite_anim_end

gThrownPokeblockAnimTable: @ 0x085CDB20
	sprite_anim_sequence gThrownPokeblockAnim

gThrownPokeblockAffineAnim: @ 0x085CDB24
	sprite_affine_anim_frame SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_frame -8, -8, 0, 1
	sprite_affine_anim_jump 1

gThrownPokeblockAffineAnimTable: @ 0x085CDB3C
	sprite_affine_anim_sequence gThrownPokeblockAffineAnim

	.globl gThrownPokeblockSpriteSheet
gThrownPokeblockSpriteSheet: @ 0x085CDB40
	.4byte gThrownPokeblock_Gfx
	.2byte 0x20
	.2byte 0x39E2

	.globl gThrownPokeblockSpriteTemplate
gThrownPokeblockSpriteTemplate: @ 0x085CDB48
	rodata_sprite_template 0x39E2, 0x39E2, gThrownPokeblockOamData, gThrownPokeblockAnimTable, NULL, gThrownPokeblockAffineAnimTable, SpriteCB_ThrownPokeblock
	.if (. - gPokeblockFeedInitialFlipAffineAnim) != 0x120
	.error "Pokeblock feed affine and sprite data must retain its original size"
	.endif
	.globl gUnknown_85CDB60
gUnknown_85CDB60: @ 0x085CDB60

	@ asm/clear_save_data_screen.s:35 Task_DoClearSaveDataScreenYesNo
	.globl gText_Rom_5CDB60
	.globl gText_ClearAllSaveDataPrompt
gText_Rom_5CDB60: @ 0x085CDB60
gText_ClearAllSaveDataPrompt:
	.string "すべての　セーブデータエリアを\nクリア　しますか？$"
	.if (. - gText_Rom_5CDB60) > 0x1a
	.error "gText_Rom_5CDB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CDB60) < 0x1a
	.space 0x1a - (. - gText_Rom_5CDB60)
	.endif
	.globl gUnknown_85CDB7A
gUnknown_85CDB7A: @ 0x085CDB7A

	@ asm/clear_save_data_screen.s:97 Task_ClearSaveDataScreenYesNoChoice
	.globl gText_Rom_5CDB7A
	.globl gText_ClearingSaveData
gText_Rom_5CDB7A: @ 0x085CDB7A
gText_ClearingSaveData:
	.string "クリア　しています\nおまち　ください$"
	.if (. - gText_Rom_5CDB7A) > 0x13
	.error "gText_Rom_5CDB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CDB7A) < 0x13
	.space 0x13 - (. - gText_Rom_5CDB7A)
	.endif
	.balign 4, 0

	.globl gClearSaveDataScreenBgTemplates
gClearSaveDataScreenBgTemplates: @ 0x085CDB90
	bg_template 0, 0, 31, 0, 0, 0, 0
	bg_template 3, 0, 30, 0, 0, 1, 0
	.if (. - gClearSaveDataScreenBgTemplates) != 2 * 4
	.error "gClearSaveDataScreenBgTemplates must contain two entries"
	.endif

	.globl gClearSaveDataScreenWindowTemplates
gClearSaveDataScreenWindowTemplates: @ 0x085CDB98
	window_template 0, 3, 15, 26, 4, 15, 0xB
	null_window_template
	.if (. - gClearSaveDataScreenWindowTemplates) != 2 * 8
	.error "gClearSaveDataScreenWindowTemplates must contain one entry and a terminator"
	.endif

	.globl gClearSaveDataMenuWindowTemplate
gClearSaveDataMenuWindowTemplate: @ 0x085CDBA8
	window_template 0, 3, 2, 5, 4, 15, 0x73

	.globl gIntroCreditsBgPalette_0
gIntroCreditsBgPalette_0: @ 0x085CDBB0
	.incbin "build/graphics/intro_credits/bg_palette_0.gbapal"

	.globl gIntroCreditsBgPalette_1
gIntroCreditsBgPalette_1: @ 0x085CDBD0
	.incbin "build/graphics/intro_credits/bg_palette_1.gbapal"

	.globl gIntroCreditsBgPalette_2
gIntroCreditsBgPalette_2: @ 0x085CDBF0
	.incbin "build/graphics/intro_credits/bg_palette_2.gbapal"
	.if (. - gIntroCreditsBgPalette_0) != 3 * 0x20
	.error "Intro credits BG palettes must contain three 16-color palettes"
	.endif
	.globl gIntroCreditsCommonBgGfx
gIntroCreditsCommonBgGfx: @ 0x085CDC10
	.incbin "build/graphics/intro_credits/common_bg.4bpp.lz"

	.globl gIntroCreditsCommonBgTilemap
gIntroCreditsCommonBgTilemap: @ 0x085CE090
	.incbin "build/graphics/intro_credits/common_bg.bin.lz"

	.globl gIntroCreditsScene0BgPalette
gIntroCreditsScene0BgPalette: @ 0x085CE1CC
	.incbin "build/graphics/intro_credits/scene0_bg_palette.gbapal"

	.globl gIntroCreditsScene1BgPalette
gIntroCreditsScene1BgPalette: @ 0x085CE22C
	.incbin "build/graphics/intro_credits/scene1_bg_palette.gbapal"
	.if (. - gIntroCreditsScene0BgPalette) != 2 * 0x60
	.error "Intro credits scene palettes must contain two 48-color palettes"
	.endif
	.globl gIntroCreditsCloudsBgGfx
gIntroCreditsCloudsBgGfx: @ 0x085CE28C
	.incbin "build/graphics/intro_credits/clouds_bg.4bpp.lz"

	.globl gIntroCreditsCloudsBgTilemaps
gIntroCreditsCloudsBgTilemaps: @ 0x085CE868
	.incbin "build/graphics/intro_credits/clouds_bg.bin.lz"

	.globl gIntroCreditsScene0CloudsObjPalette
gIntroCreditsScene0CloudsObjPalette: @ 0x085CEB38
	.incbin "build/graphics/intro_credits/scene0_clouds_obj_palette.gbapal"

	.globl gIntroCreditsScene1CloudsObjPalette
gIntroCreditsScene1CloudsObjPalette: @ 0x085CEB58
	.incbin "build/graphics/intro_credits/scene1_clouds_obj_palette.gbapal"

	.globl gIntroCreditsCloudsObjGfx
gIntroCreditsCloudsObjGfx: @ 0x085CEB78
	.incbin "build/graphics/intro_credits/clouds_obj.4bpp.lz"
	.globl gIntroPart2MountainsPalette
gIntroPart2MountainsPalette: @ 0x085CECB4
	.incbin "build/graphics/intro_credits/intro_part2_mountains_palette.gbapal"

	.globl gIntroCreditsMountainsPalette
gIntroCreditsMountainsPalette: @ 0x085CECD4
	.incbin "build/graphics/intro_credits/credits_mountains_palette.gbapal"

	.globl gIntroCreditsMountainsBgGfx
gIntroCreditsMountainsBgGfx: @ 0x085CECF4
	.incbin "build/graphics/intro_credits/mountains_bg.4bpp.lz"

	.globl gIntroCreditsMountainsBgTilemaps
gIntroCreditsMountainsBgTilemaps: @ 0x085CF37C
	.incbin "build/graphics/intro_credits/mountains_bg.bin.lz"

	.globl gIntroPart2MountainsObjPalette
gIntroPart2MountainsObjPalette: @ 0x085CF680
	.incbin "build/graphics/intro_credits/intro_part2_mountains_palette.gbapal"

	.globl gIntroCreditsMountainsObjGfx
gIntroCreditsMountainsObjGfx: @ 0x085CF6A0
	.incbin "build/graphics/intro_credits/mountains_obj.4bpp.lz"
	.globl gIntroCreditsCityBgPalette
gIntroCreditsCityBgPalette: @ 0x085CF7EC
	.incbin "build/graphics/intro_credits/city_bg_palette.gbapal"

	.globl gIntroCreditsCityBgGfx
gIntroCreditsCityBgGfx: @ 0x085CF82C
	.incbin "build/graphics/intro_credits/city_bg.4bpp.lz"

	.globl gIntroCreditsCityObjPalette
gIntroCreditsCityObjPalette: @ 0x085CFA18
	.incbin "build/graphics/intro_credits/city_obj_palette.gbapal"

	.globl gIntroCreditsCityBgTilemaps
gIntroCreditsCityBgTilemaps: @ 0x085CFA38
	.incbin "build/graphics/intro_credits/city_bg.bin.lz"

	.globl gIntroCreditsCityObjGfx
gIntroCreditsCityObjGfx: @ 0x085CFCE4
	.incbin "build/graphics/intro_credits/city_obj.4bpp.lz"

	.globl gCreditsBrendanBikePalette
gCreditsBrendanBikePalette: @ 0x085CFD68
	.incbin "build/graphics/intro_credits/credits_brendan_bike_palette.gbapal"

	.globl gCreditsBrendanBikeGfx
gCreditsBrendanBikeGfx: @ 0x085CFD88
	.incbin "build/graphics/intro_credits/credits_brendan_bike.4bpp.lz"

	.globl gCreditsMayBikePalette
gCreditsMayBikePalette: @ 0x085D0940
	.incbin "build/graphics/intro_credits/credits_may_bike_palette.gbapal"
	.space 0x1E0, 0 @ unused palette padding

	.globl gCreditsMayBikeGfx
gCreditsMayBikeGfx: @ 0x085D0B40
	.incbin "build/graphics/intro_credits/credits_may_bike.4bpp.lz"

	.globl gCreditsBicycleGfx
gCreditsBicycleGfx: @ 0x085D17E8
	.incbin "build/graphics/intro_credits/credits_bicycle.4bpp.lz"

	.globl gCreditsLatiosPalette
gCreditsLatiosPalette: @ 0x085D1C14
	.incbin "build/graphics/intro_credits/credits_latios_palette.gbapal"

	.globl gCreditsLatiosGfx
gCreditsLatiosGfx: @ 0x085D1C34
	.incbin "build/graphics/intro_credits/credits_latios.4bpp.lz"

	.globl gCreditsLatiasPalette
gCreditsLatiasPalette: @ 0x085D20D8
	.incbin "build/graphics/intro_credits/credits_latias_palette.gbapal"

	.globl gCreditsLatiasGfx
gCreditsLatiasGfx: @ 0x085D20F8
	.incbin "build/graphics/intro_credits/credits_latias.4bpp.lz"
	.if (. - gCreditsBrendanBikePalette) != 0x27B4
	.error "Credits bike and Eon Pokemon graphics must retain their original size"
	.endif

	.globl gIntroCreditsSceneSpriteTemplate
gIntroCreditsSceneSpriteTemplate: @ 0x085D251C
	rodata_sprite_template 0x7D0, TAG_NONE, gDummyOamData, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, sub_0817B4EC
	.globl gIntroCreditsCloudsSpriteSheet
gIntroCreditsCloudsSpriteSheet: @ 0x085D2534
	.4byte gIntroCreditsCloudsObjGfx
	.2byte 0x400
	.2byte 0x7D0
	.space 8, 0 @ unused second sheet entry

gIntroCreditsCloudsSpriteAnim_0: @ 0x085D2544
	sprite_anim_frame 0x00, 30
	sprite_anim_end

gIntroCreditsCloudsSpriteAnim_1: @ 0x085D254C
	sprite_anim_frame 0x10, 30
	sprite_anim_end

gIntroCreditsCloudsSpriteAnim_2: @ 0x085D2554
	sprite_anim_frame 0x14, 30
	sprite_anim_end

gIntroCreditsCloudsSpriteAnim_3: @ 0x085D255C
	sprite_anim_frame 0x16, 30
	sprite_anim_end

	.globl gIntroCreditsCloudsSpriteAnimTable
gIntroCreditsCloudsSpriteAnimTable: @ 0x085D2564
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_0
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_1
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_2
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_3

	.globl gIntroCreditsCloudsSpriteSpawns
gIntroCreditsCloudsSpriteSpawns: @ 0x085D2574
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  72, 32, 100, 0x0C00
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 158, 32, 100, 0x0C00
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x16, 192, 40, 101, 0x0800
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x16,  56, 40, 101, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x8,  100, 44, 102, 0x0400
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x8,  152, 44, 102, 0x0400
	intro_credits_sprite_spawn 3, SPRITE_SIZE_16x8,    8, 46, 103, 0x0100
	intro_credits_sprite_spawn 3, SPRITE_SIZE_16x8,   56, 46, 103, 0x0100
	intro_credits_sprite_spawn 3, SPRITE_SIZE_16x8,  240, 46, 103, 0x0100
	.if (. - gIntroCreditsCloudsSpriteSheet) != 0x88
	.error "Intro credits clouds sprite data must retain its original size"
	.endif

	.globl gIntroCreditsMountainsSpriteSheet
gIntroCreditsMountainsSpriteSheet: @ 0x085D25BC
	.4byte gIntroCreditsMountainsObjGfx
	.2byte 0x400
	.2byte 0x7D0
	.space 8, 0 @ unused second sheet entry

gIntroCreditsMountainsSpriteAnim_0: @ 0x085D25CC
	sprite_anim_frame 0x00, 30
	sprite_anim_end

gIntroCreditsMountainsSpriteAnim_1: @ 0x085D25D4
	sprite_anim_frame 0x10, 30
	sprite_anim_end

gIntroCreditsMountainsSpriteAnim_2: @ 0x085D25DC
	sprite_anim_frame 0x18, 30
	sprite_anim_end

	.globl gIntroCreditsMountainsSpriteAnimTable
gIntroCreditsMountainsSpriteAnimTable: @ 0x085D25E4
	sprite_anim_sequence gIntroCreditsMountainsSpriteAnim_0
	sprite_anim_sequence gIntroCreditsMountainsSpriteAnim_1
	sprite_anim_sequence gIntroCreditsMountainsSpriteAnim_2

	.globl gIntroCreditsMountainsSpriteSpawns
gIntroCreditsMountainsSpriteSpawns: @ 0x085D25F0
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  16, 88, 100, 0x2000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  80, 88, 100, 0x2000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 144, 88, 100, 0x2000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 208, 88, 100, 0x2000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32,  40, 88, 101, 0x1000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32, 104, 88, 101, 0x1000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32, 168, 88, 101, 0x1000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32, 232, 88, 101, 0x1000
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32,  56, 88, 102, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32, 120, 88, 102, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32, 184, 88, 102, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32, 248, 88, 102, 0x0800
	.if (. - gIntroCreditsMountainsSpriteSheet) != 0x94
	.error "Intro credits mountains sprite data must retain its original size"
	.endif
	.globl gIntroCreditsCitySpriteSheet
gIntroCreditsCitySpriteSheet: @ 0x085D2650
	.4byte gIntroCreditsCityObjGfx
	.2byte 0x400
	.2byte 0x7D0
	.space 8, 0 @ unused second sheet entry

gIntroCreditsCitySpriteAnim: @ 0x085D2660
	sprite_anim_frame 0, 30
	sprite_anim_end

	.globl gIntroCreditsCitySpriteAnimTable
gIntroCreditsCitySpriteAnimTable: @ 0x085D2668
	sprite_anim_sequence gIntroCreditsCitySpriteAnim

	.globl gIntroCreditsCitySpriteSpawns
gIntroCreditsCitySpriteSpawns: @ 0x085D266C
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  24, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  64, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 104, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 144, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 184, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 224, 88, 100, 0x1000

gIntroCreditsRiderOamData: @ 0x085D269C
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

gIntroCreditsRiderSpriteAnim: @ 0x085D26A4
	sprite_anim_frame 0x00, 8
	sprite_anim_frame 0x40, 8
	sprite_anim_frame 0x80, 8
	sprite_anim_frame 0xC0, 8
	sprite_anim_jump 0

gIntroCreditsRiderSpriteAnimTable: @ 0x085D26B8
	sprite_anim_sequence gIntroCreditsRiderSpriteAnim

	.globl gIntroCreditsBrendanSpriteTemplate
gIntroCreditsBrendanSpriteTemplate: @ 0x085D26BC
	rodata_sprite_template 0x3EA, 0x3EA, gIntroCreditsRiderOamData, gIntroCreditsRiderSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_65

	.globl gIntroCreditsMaySpriteTemplate
gIntroCreditsMaySpriteTemplate: @ 0x085D26D4
	rodata_sprite_template 0x3EB, 0x3EB, gIntroCreditsRiderOamData, gIntroCreditsRiderSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_65

gIntroCreditsBicycleOamData: @ 0x085D26EC
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 1, 0, 0, 3, 0, 1, 0, 0

gIntroCreditsBicycleSpriteAnim: @ 0x085D26F4
	sprite_anim_frame 0x00, 8
	sprite_anim_frame 0x20, 8
	sprite_anim_frame 0x40, 8
	sprite_anim_frame 0x60, 8
	sprite_anim_jump 0

gIntroCreditsBicycleSpriteAnimTable: @ 0x085D2708
	sprite_anim_sequence gIntroCreditsBicycleSpriteAnim

	.globl gIntroCreditsBrendanBicycleSpriteTemplate
gIntroCreditsBrendanBicycleSpriteTemplate: @ 0x085D270C
	rodata_sprite_template 0x3E9, 0x3EA, gIntroCreditsBicycleOamData, gIntroCreditsBicycleSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, sub_0817B684

	.globl gIntroCreditsMayBicycleSpriteTemplate
gIntroCreditsMayBicycleSpriteTemplate: @ 0x085D2724
	rodata_sprite_template 0x3E9, 0x3EB, gIntroCreditsBicycleOamData, gIntroCreditsBicycleSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, sub_0817B684

gIntroCreditsFlygonOamData: @ 0x085D273C
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

gIntroCreditsFlygonSpriteAnim_0: @ 0x085D2744
	sprite_anim_frame 0x00, 16
	sprite_anim_end

gIntroCreditsFlygonSpriteAnim_1: @ 0x085D274C
	sprite_anim_frame 0x40, 16
	sprite_anim_end

gIntroCreditsFlygonSpriteAnimTable: @ 0x085D2754
	sprite_anim_sequence gIntroCreditsFlygonSpriteAnim_0
	sprite_anim_sequence gIntroCreditsFlygonSpriteAnim_1

	.globl gIntroCreditsFlygonSpriteTemplate_0
gIntroCreditsFlygonSpriteTemplate_0: @ 0x085D275C
	rodata_sprite_template 0x3EC, 0x3EC, gIntroCreditsFlygonOamData, gIntroCreditsFlygonSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_66

	.globl gIntroCreditsFlygonSpriteTemplate_1
gIntroCreditsFlygonSpriteTemplate_1: @ 0x085D2774
	rodata_sprite_template 0x3ED, 0x3ED, gIntroCreditsFlygonOamData, gIntroCreditsFlygonSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_66
	.if (. - gIntroCreditsCitySpriteSpawns) != 0x120
	.error "Intro credits city, rider, bicycle, and Flygon sprite data must retain their original size"
	.endif
	.globl gIntroCreditsBrendanSpriteSheet
gIntroCreditsBrendanSpriteSheet: @ 0x085D278C
	rodata_compressed_sprite_sheet gIntroCreditsBrendanGfx, 0x2000, 0x3EA
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsMaySpriteSheet
gIntroCreditsMaySpriteSheet: @ 0x085D279C
	rodata_compressed_sprite_sheet gIntroCreditsMayGfx, 0x2000, 0x3EB
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsBicycleSpriteSheet
gIntroCreditsBicycleSpriteSheet: @ 0x085D27AC
	rodata_compressed_sprite_sheet gCreditsBicycleGfx, 0x1000, 0x3E9
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsFlygonSpriteSheet_0
gIntroCreditsFlygonSpriteSheet_0: @ 0x085D27BC
	rodata_compressed_sprite_sheet gIntroCreditsFlygonGfx, 0x1000, 0x3EC
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsFlygonSpriteSheet_1
gIntroCreditsFlygonSpriteSheet_1: @ 0x085D27CC
	rodata_compressed_sprite_sheet gIntroCreditsFlygonGfx, 0x1000, 0x3ED
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsSpritePalettes
gIntroCreditsSpritePalettes: @ 0x085D27DC
	rodata_sprite_palette gIntroCreditsRiderPalette, 0x3EA
	rodata_sprite_palette gIntroCreditsRiderPalette, 0x3EB
	rodata_sprite_palette gIntroCreditsFlygonPalette, 0x3EC
	rodata_sprite_palette gIntroCreditsFlygonPalette, 0x3ED
	.space 8, 0 @ terminator
	.if (. - gIntroCreditsBrendanSpriteSheet) != 0x78
	.error "Intro credits sprite resource descriptors must retain their original size"
	.endif
	.globl gCreditsBrendanBikeFullSpriteSheet
gCreditsBrendanBikeFullSpriteSheet: @ 0x085D2804
	rodata_compressed_sprite_sheet gCreditsBrendanBikeGfx, 0x3800, 0x3EA
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsMayBikeFullSpriteSheet
gCreditsMayBikeFullSpriteSheet: @ 0x085D2814
	rodata_compressed_sprite_sheet gCreditsMayBikeGfx, 0x3800, 0x3EB
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsBicycleSpriteSheet
gCreditsBicycleSpriteSheet: @ 0x085D2824
	rodata_compressed_sprite_sheet gCreditsBicycleGfx, 0x1000, 0x3E9
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsLatiosSpriteSheet
gCreditsLatiosSpriteSheet: @ 0x085D2834
	rodata_compressed_sprite_sheet gCreditsLatiosGfx, 0x1000, 0x3EC
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsLatiasSpriteSheet
gCreditsLatiasSpriteSheet: @ 0x085D2844
	rodata_compressed_sprite_sheet gCreditsLatiasGfx, 0x1000, 0x3ED
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsBikeRideSpritePalettes
gCreditsBikeRideSpritePalettes: @ 0x085D2854
	rodata_sprite_palette gCreditsBrendanBikePalette, 0x3EA
	rodata_sprite_palette gCreditsMayBikePalette, 0x3EB
	rodata_sprite_palette gCreditsLatiosPalette, 0x3EC
	rodata_sprite_palette gCreditsLatiasPalette, 0x3ED
	.space 8, 0 @ terminator

	.globl gCreditsBrendanBikeReducedSpriteSheet
gCreditsBrendanBikeReducedSpriteSheet: @ 0x085D287C
	rodata_compressed_sprite_sheet gCreditsBrendanBikeGfx, 0x2000, 0x3EA
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsMayBikeReducedSpriteSheet
gCreditsMayBikeReducedSpriteSheet: @ 0x085D288C
	rodata_compressed_sprite_sheet gCreditsMayBikeGfx, 0x2000, 0x3EB
	.space 8, 0 @ unused second sheet entry
	.if (. - gCreditsBrendanBikeFullSpriteSheet) != 0x98
	.error "Credits bike ride sprite resource descriptors must retain their original size"
	.endif

	.globl gEvolutionSparklePalette
gEvolutionSparklePalette: @ 0x085D289C
	.incbin "build/graphics/evolution/sparkle_palette.gbapal"

	.globl gEvolutionSparkleGfx
gEvolutionSparkleGfx: @ 0x085D28BC
	.incbin "build/graphics/evolution/sparkle.4bpp.lz"

	.globl gEvolutionSparkleSpriteSheet
gEvolutionSparkleSpriteSheet: @ 0x085D28DC
	rodata_compressed_sprite_sheet gEvolutionSparkleGfx, 0x20, 0x3E9
	.space 8, 0 @ unused second sheet entry

	.globl gEvolutionSparkleSpritePalettes
gEvolutionSparkleSpritePalettes: @ 0x085D28EC
	rodata_sprite_palette gEvolutionSparklePalette, 0x3E9
	.space 8, 0 @ terminator

gEvolutionSparkleOamData: @ 0x085D28FC
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0

gEvolutionSparkleSpriteAnim: @ 0x085D2904
	sprite_anim_frame 0, 8
	sprite_anim_end

gEvolutionSparkleSpriteAnimTable: @ 0x085D290C
	sprite_anim_sequence gEvolutionSparkleSpriteAnim

	.globl gEvolutionSparkleSpriteTemplate
gEvolutionSparkleSpriteTemplate: @ 0x085D2910
	rodata_sprite_template 0x3E9, 0x3E9, gEvolutionSparkleOamData, gEvolutionSparkleSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, PokeEvoSprite_DummySpriteCB
	.if (. - gEvolutionSparklePalette) != 0x8C
	.error "Evolution sparkle graphics and sprite data must retain their original size"
	.endif
	.globl gEvolutionSparkleScaleFactors
gEvolutionSparkleScaleFactors: @ 0x085D2928
	.2byte 0x3C0, 0x380, 0x340, 0x300
	.2byte 0x2C0, 0x280, 0x240, 0x200
	.2byte 0x1C0, 0x180, 0x140, 0x100

gUnused_85D2940: @ 0x085D2940
	.2byte -4, 16, -3, 48, -2, 80, -1, 112
	.2byte 1, 112, 2, 80, 3, 48, 4, 16

	@ Signed 8.8 fixed-point pitch patterns used by the Bard's word sounds.
gBardPitchPattern_0: @ 0x085D2960
	.2byte -3 * 0x100, 24 * 0x100
gBardPitchPattern_1: @ 0x085D2964
	.2byte 9 * 0x100, 24 * 0x100
gBardPitchPattern_2: @ 0x085D2968
	.2byte 1 * 0x100, 24 * 0x100
gBardPitchPattern_3: @ 0x085D296C
	.2byte 4 * 0x100, 24 * 0x100
gBardPitchPattern_4: @ 0x085D2970
	.2byte 11 * 0x100, 24 * 0x100
gBardPitchPattern_5: @ 0x085D2974
	.2byte -3 * 0x100, -1 * 0x100, 24 * 0x100
gBardPitchPattern_6: @ 0x085D297A
	.2byte -3 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_7: @ 0x085D2980
	.2byte 2 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_8: @ 0x085D2986
	.2byte 6 * 0x100, 8 * 0x100, 24 * 0x100
gBardPitchPattern_9: @ 0x085D298C
	.2byte 9 * 0x100, 8 * 0x100, 24 * 0x100
gBardPitchPattern_10: @ 0x085D2992
	.2byte -3 * 0x100, -1 * 0x100, -3 * 0x100, 24 * 0x100
gBardPitchPattern_11: @ 0x085D299A
	.2byte 4 * 0x100, -3 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_12: @ 0x085D29A2
	.2byte 9 * 0x100, 8 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_13: @ 0x085D29AA
	.2byte 1 * 0x100, 2 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_14: @ 0x085D29B2
	.2byte 6 * 0x100, 16 * 0x100, 13 * 0x100, 24 * 0x100
gBardPitchPattern_15: @ 0x085D29BA
	.2byte 4 * 0x100, 9 * 0x100, 4 * 0x100, 9 * 0x100, 24 * 0x100
gBardPitchPattern_16: @ 0x085D29C4
	.2byte 9 * 0x100, 4 * 0x100, 13 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_17: @ 0x085D29CE
	.2byte 1 * 0x100, 2 * 0x100, 4 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_18: @ 0x085D29D8
	.2byte 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_19: @ 0x085D29E2
	.2byte 15 * 0x100, 13 * 0x100, 11 * 0x100, 10 * 0x100, 24 * 0x100
gBardPitchPattern_20: @ 0x085D29EC
	.2byte -3 * 0x100, -1 * 0x100, 1 * 0x100, 2 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_21: @ 0x085D29F8
	.2byte 9 * 0x100, 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_22: @ 0x085D2A04
	.2byte 1 * 0x100, 4 * 0x100, 9 * 0x100, 4 * 0x100, 1 * 0x100, 24 * 0x100
gBardPitchPattern_23: @ 0x085D2A10
	.2byte 9 * 0x100, 4 * 0x100, 9 * 0x100, 4 * 0x100, -3 * 0x100, 24 * 0x100
gBardPitchPattern_24: @ 0x085D2A1C
	.2byte 11 * 0x100, 8 * 0x100, 4 * 0x100, 4 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_25: @ 0x085D2A28
	.2byte -3 * 0x100, -1 * 0x100, 1 * 0x100, 2 * 0x100, 4 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_26: @ 0x085D2A36
	.2byte 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 1 * 0x100, -1 * 0x100, 24 * 0x100
gBardPitchPattern_27: @ 0x085D2A44
	.2byte 1 * 0x100, 2 * 0x100, 4 * 0x100, 1 * 0x100, 2 * 0x100, 16 * 0x100, 24 * 0x100
gBardPitchPattern_28: @ 0x085D2A52
	.2byte 4 * 0x100, -3 * 0x100, 9 * 0x100, 4 * 0x100, 9 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_29: @ 0x085D2A60
	.2byte 8 * 0x100, 9 * 0x100, 8 * 0x100, 9 * 0x100, 8 * 0x100, 9 * 0x100, 24 * 0x100
gBardPitchPattern_30: @ 0x085D2A6E
	.2byte 2 * 0x100, 1 * 0x100, 2 * 0x100, 1 * 0x100, 2 * 0x100, 4 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_31: @ 0x085D2A7E
	.2byte 1 * 0x100, 1 * 0x100, -1 * 0x100, -1 * 0x100, -3 * 0x100, 4 * 0x100, -3 * 0x100, 24 * 0x100
gBardPitchPattern_32: @ 0x085D2A8E
	.2byte 8 * 0x100, 9 * 0x100, 11 * 0x100, 13 * 0x100, 14 * 0x100, 13 * 0x100, 11 * 0x100, 24 * 0x100
gBardPitchPattern_33: @ 0x085D2A9E
	.2byte 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 13 * 0x100, 11 * 0x100, 9 * 0x100, 24 * 0x100
gBardPitchPattern_34: @ 0x085D2AAE
	.2byte 3 * 0x100, 4 * 0x100, 6 * 0x100, 8 * 0x100, 7 * 0x100, 8 * 0x100, 4 * 0x100, 24 * 0x100
	.2byte 0 @ alignment padding

	.globl gBardPitchPatternTable
gBardPitchPatternTable: @ 0x085D2AC0
	.4byte gBardPitchPattern_0
	.4byte gBardPitchPattern_1
	.4byte gBardPitchPattern_2
	.4byte gBardPitchPattern_3
	.4byte gBardPitchPattern_4
	.4byte gBardPitchPattern_5
	.4byte gBardPitchPattern_6
	.4byte gBardPitchPattern_7
	.4byte gBardPitchPattern_8
	.4byte gBardPitchPattern_9
	.4byte gBardPitchPattern_10
	.4byte gBardPitchPattern_11
	.4byte gBardPitchPattern_12
	.4byte gBardPitchPattern_13
	.4byte gBardPitchPattern_14
	.4byte gBardPitchPattern_15
	.4byte gBardPitchPattern_16
	.4byte gBardPitchPattern_17
	.4byte gBardPitchPattern_18
	.4byte gBardPitchPattern_19
	.4byte gBardPitchPattern_20
	.4byte gBardPitchPattern_21
	.4byte gBardPitchPattern_22
	.4byte gBardPitchPattern_23
	.4byte gBardPitchPattern_24
	.4byte gBardPitchPattern_25
	.4byte gBardPitchPattern_26
	.4byte gBardPitchPattern_27
	.4byte gBardPitchPattern_28
	.4byte gBardPitchPattern_29
	.4byte gBardPitchPattern_30
	.4byte gBardPitchPattern_31
	.4byte gBardPitchPattern_32
	.4byte gBardPitchPattern_33
	.4byte gBardPitchPattern_34
	.if (. - gEvolutionSparkleScaleFactors) != 0x224
	.error "Evolution sparkle scale and Bard pitch data must retain their original size"
	.endif
	.set BARD_SOUND_STOP, -2
	.set BARD_SOUND_0, 25
	.set BARD_SOUND_1, 26
	.set BARD_SOUND_2, 27
	.set BARD_SOUND_3, 28
	.set BARD_SOUND_4, 29
	.set BARD_SOUND_5, 30

	.globl gBardSoundTable
gBardSoundTable: @ 0x085D2B4C
	@ Entries 0-159: the same 80-entry sound assignment block twice.
	.rept 2
	bard_sound_entry BARD_SOUND_STOP
	.rept 7
	bard_sound_cycle
	.endr
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_4
	bard_sound_cycle
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_5
	bard_sound_cycle 0xC0
	bard_sound_entry BARD_SOUND_0, 0xC0
	bard_sound_entry BARD_SOUND_2, 0xC0
	bard_sound_entry BARD_SOUND_4, 0xC0
	.rept 5
	bard_sound_cycle
	.endr
	.endr

	@ Entries 160-175
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry -1
	bard_sound_entry BARD_SOUND_STOP

	@ Entries 176-191
	bard_sound_entry 0
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1

	@ Entries 192-207
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2

	@ Entries 208-223
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3

	@ Entries 224-239
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_STOP
	.if (. - gBardSoundTable) != 240 * 4
	.error "Bard sound table must contain 240 four-byte entries"
	.endif
	.globl gBattleTvMovesExcludedFromDamageCalculation
gBattleTvMovesExcludedFromDamageCalculation: @ 0x085D2F0C
	.2byte MOVE_COUNTER
	.2byte MOVE_FISSURE
	.2byte MOVE_BIDE
	.2byte MOVE_MIRROR_COAT
	.2byte MOVE_HORN_DRILL
	.2byte MOVE_FLAIL
	.2byte MOVE_REVERSAL
	.2byte MOVE_HIDDEN_POWER
	.2byte MOVE_SHEER_COLD
	.2byte MOVE_FOCUS_PUNCH
	.2byte MOVE_ERUPTION
	.2byte MOVE_WATER_SPOUT
	.2byte MOVE_DREAM_EATER
	.2byte MOVE_WEATHER_BALL
	.2byte MOVE_SNORE
	.2byte MOVE_PAIN_SPLIT
	.2byte MOVE_GUILLOTINE
	.2byte MOVE_FRUSTRATION
	.2byte MOVE_RETURN
	.2byte MOVE_ENDEAVOR
	.2byte MOVE_PRESENT
	.2byte MOVE_REVENGE
	.2byte 0xFFFF @ terminator

gUnusedBattleTvSpecialDamageMoves: @ 0x085D2F3A
	.2byte MOVE_MAGNITUDE, MOVE_PSYWAVE, 0xFFFF

	.globl gBattleTvMoveEffectPoints
gBattleTvMoveEffectPoints: @ 0x085D2F40
	battle_tv_effect_points EFFECT_HIT, 1
	battle_tv_effect_points EFFECT_SLEEP, 1
	battle_tv_effect_points EFFECT_POISON_HIT, 1
	battle_tv_effect_points EFFECT_ABSORB, 4
	battle_tv_effect_points EFFECT_BURN_HIT, 1
	battle_tv_effect_points EFFECT_FREEZE_HIT, 1
	battle_tv_effect_points EFFECT_PARALYZE_HIT, 1
	battle_tv_effect_points EFFECT_EXPLOSION, 0
	battle_tv_effect_points EFFECT_DREAM_EATER, 5
	battle_tv_effect_points EFFECT_MIRROR_MOVE, 1
	battle_tv_effect_points EFFECT_ATTACK_UP, 1
	battle_tv_effect_points EFFECT_DEFENSE_UP, 1
	battle_tv_effect_points EFFECT_SPEED_UP, 1
	battle_tv_effect_points EFFECT_SPECIAL_ATTACK_UP, 1
	battle_tv_effect_points EFFECT_SPECIAL_DEFENSE_UP, 1
	battle_tv_effect_points EFFECT_ACCURACY_UP, 1
	battle_tv_effect_points EFFECT_EVASION_UP, 1
	battle_tv_effect_points EFFECT_ALWAYS_HIT, 2
	battle_tv_effect_points EFFECT_ATTACK_DOWN, 1
	battle_tv_effect_points EFFECT_DEFENSE_DOWN, 1
	battle_tv_effect_points EFFECT_SPEED_DOWN, 1
	battle_tv_effect_points EFFECT_SPECIAL_ATTACK_DOWN, 1
	battle_tv_effect_points EFFECT_SPECIAL_DEFENSE_DOWN, 1
	battle_tv_effect_points EFFECT_ACCURACY_DOWN, 1
	battle_tv_effect_points EFFECT_EVASION_DOWN, 1
	battle_tv_effect_points EFFECT_HAZE, 5
	battle_tv_effect_points EFFECT_BIDE, 5
	battle_tv_effect_points EFFECT_RAMPAGE, 4
	battle_tv_effect_points EFFECT_ROAR, 5
	battle_tv_effect_points EFFECT_MULTI_HIT, 1
	battle_tv_effect_points EFFECT_CONVERSION, 3
	battle_tv_effect_points EFFECT_FLINCH_HIT, 1
	battle_tv_effect_points EFFECT_RESTORE_HP, 3
	battle_tv_effect_points EFFECT_TOXIC, 5
	battle_tv_effect_points EFFECT_PAY_DAY, 1
	battle_tv_effect_points EFFECT_LIGHT_SCREEN, 7
	battle_tv_effect_points EFFECT_TRI_ATTACK, 1
	battle_tv_effect_points EFFECT_REST, 7
	battle_tv_effect_points EFFECT_OHKO, 7
	battle_tv_effect_points EFFECT_RAZOR_WIND, 1
	battle_tv_effect_points EFFECT_SUPER_FANG, 5
	battle_tv_effect_points EFFECT_DRAGON_RAGE, 2
	battle_tv_effect_points EFFECT_TRAP, 4
	battle_tv_effect_points EFFECT_HIGH_CRITICAL, 1
	battle_tv_effect_points EFFECT_DOUBLE_HIT, 1
	battle_tv_effect_points EFFECT_RECOIL_IF_MISS, 1
	battle_tv_effect_points EFFECT_MIST, 5
	battle_tv_effect_points EFFECT_FOCUS_ENERGY, 1
	battle_tv_effect_points EFFECT_RECOIL, 2
	battle_tv_effect_points EFFECT_CONFUSE, 4
	battle_tv_effect_points EFFECT_ATTACK_UP_2, 1
	battle_tv_effect_points EFFECT_DEFENSE_UP_2, 1
	battle_tv_effect_points EFFECT_SPEED_UP_2, 1
	battle_tv_effect_points EFFECT_SPECIAL_ATTACK_UP_2, 1
	battle_tv_effect_points EFFECT_SPECIAL_DEFENSE_UP_2, 1
	battle_tv_effect_points EFFECT_ACCURACY_UP_2, 1
	battle_tv_effect_points EFFECT_EVASION_UP_2, 1
	battle_tv_effect_points EFFECT_TRANSFORM, 0
	battle_tv_effect_points EFFECT_ATTACK_DOWN_2, 1
	battle_tv_effect_points EFFECT_DEFENSE_DOWN_2, 1
	battle_tv_effect_points EFFECT_SPEED_DOWN_2, 1
	battle_tv_effect_points EFFECT_SPECIAL_ATTACK_DOWN_2, 1
	battle_tv_effect_points EFFECT_SPECIAL_DEFENSE_DOWN_2, 1
	battle_tv_effect_points EFFECT_ACCURACY_DOWN_2, 1
	battle_tv_effect_points EFFECT_EVASION_DOWN_2, 1
	battle_tv_effect_points EFFECT_REFLECT, 7
	battle_tv_effect_points EFFECT_POISON, 4
	battle_tv_effect_points EFFECT_PARALYZE, 4
	battle_tv_effect_points EFFECT_ATTACK_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_DEFENSE_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_SPEED_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_SPECIAL_ATTACK_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_SPECIAL_DEFENSE_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_ACCURACY_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_EVASION_DOWN_HIT, 1
	battle_tv_effect_points EFFECT_SKY_ATTACK, 4
	battle_tv_effect_points EFFECT_CONFUSE_HIT, 1
	battle_tv_effect_points EFFECT_TWINEEDLE, 1
	battle_tv_effect_points EFFECT_VITAL_THROW, 1
	battle_tv_effect_points EFFECT_SUBSTITUTE, 4
	battle_tv_effect_points EFFECT_RECHARGE, 5
	battle_tv_effect_points EFFECT_RAGE, 2
	battle_tv_effect_points EFFECT_MIMIC, 4
	battle_tv_effect_points EFFECT_METRONOME, 1
	battle_tv_effect_points EFFECT_LEECH_SEED, 4
	battle_tv_effect_points EFFECT_SPLASH, 1
	battle_tv_effect_points EFFECT_DISABLE, 7
	battle_tv_effect_points EFFECT_LEVEL_DAMAGE, 2
	battle_tv_effect_points EFFECT_PSYWAVE, 1
	battle_tv_effect_points EFFECT_COUNTER, 5
	battle_tv_effect_points EFFECT_ENCORE, 7
	battle_tv_effect_points EFFECT_PAIN_SPLIT, 3
	battle_tv_effect_points EFFECT_SNORE, 3
	battle_tv_effect_points EFFECT_CONVERSION_2, 4
	battle_tv_effect_points EFFECT_LOCK_ON, 3
	battle_tv_effect_points EFFECT_SKETCH, 3
	battle_tv_effect_points EFFECT_UNUSED_60, 3
	battle_tv_effect_points EFFECT_SLEEP_TALK, 3
	battle_tv_effect_points EFFECT_DESTINY_BOND, 3
	battle_tv_effect_points EFFECT_FLAIL, 2
	battle_tv_effect_points EFFECT_SPITE, 4
	battle_tv_effect_points EFFECT_FALSE_SWIPE, 1
	battle_tv_effect_points EFFECT_HEAL_BELL, 5
	battle_tv_effect_points EFFECT_QUICK_ATTACK, 1
	battle_tv_effect_points EFFECT_TRIPLE_KICK, 1
	battle_tv_effect_points EFFECT_THIEF, 4
	battle_tv_effect_points EFFECT_MEAN_LOOK, 5
	battle_tv_effect_points EFFECT_NIGHTMARE, 3
	battle_tv_effect_points EFFECT_MINIMIZE, 1
	battle_tv_effect_points EFFECT_CURSE, 2
	battle_tv_effect_points EFFECT_UNUSED_6E, 1
	battle_tv_effect_points EFFECT_PROTECT, 5
	battle_tv_effect_points EFFECT_SPIKES, 4
	battle_tv_effect_points EFFECT_FORESIGHT, 3
	battle_tv_effect_points EFFECT_PERISH_SONG, 6
	battle_tv_effect_points EFFECT_SANDSTORM, 4
	battle_tv_effect_points EFFECT_ENDURE, 3
	battle_tv_effect_points EFFECT_ROLLOUT, 3
	battle_tv_effect_points EFFECT_SWAGGER, 3
	battle_tv_effect_points EFFECT_FURY_CUTTER, 2
	battle_tv_effect_points EFFECT_ATTRACT, 4
	battle_tv_effect_points EFFECT_RETURN, 1
	battle_tv_effect_points EFFECT_PRESENT, 1
	battle_tv_effect_points EFFECT_FRUSTRATION, 1
	battle_tv_effect_points EFFECT_SAFEGUARD, 5
	battle_tv_effect_points EFFECT_THAW_HIT, 1
	battle_tv_effect_points EFFECT_MAGNITUDE, 1
	battle_tv_effect_points EFFECT_BATON_PASS, 7
	battle_tv_effect_points EFFECT_PURSUIT, 2
	battle_tv_effect_points EFFECT_RAPID_SPIN, 2
	battle_tv_effect_points EFFECT_SONICBOOM, 1
	battle_tv_effect_points EFFECT_UNUSED_83, 1
	battle_tv_effect_points EFFECT_MORNING_SUN, 4
	battle_tv_effect_points EFFECT_SYNTHESIS, 4
	battle_tv_effect_points EFFECT_MOONLIGHT, 4
	battle_tv_effect_points EFFECT_HIDDEN_POWER, 1
	battle_tv_effect_points EFFECT_RAIN_DANCE, 4
	battle_tv_effect_points EFFECT_SUNNY_DAY, 4
	battle_tv_effect_points EFFECT_DEFENSE_UP_HIT, 1
	battle_tv_effect_points EFFECT_ATTACK_UP_HIT, 1
	battle_tv_effect_points EFFECT_ALL_STATS_UP_HIT, 1
	battle_tv_effect_points EFFECT_UNUSED_8D, 1
	battle_tv_effect_points EFFECT_BELLY_DRUM, 7
	battle_tv_effect_points EFFECT_PSYCH_UP, 7
	battle_tv_effect_points EFFECT_MIRROR_COAT, 6
	battle_tv_effect_points EFFECT_SKULL_BASH, 3
	battle_tv_effect_points EFFECT_TWISTER, 1
	battle_tv_effect_points EFFECT_EARTHQUAKE, 1
	battle_tv_effect_points EFFECT_FUTURE_SIGHT, 1
	battle_tv_effect_points EFFECT_GUST, 1
	battle_tv_effect_points EFFECT_FLINCH_MINIMIZE_HIT, 1
	battle_tv_effect_points EFFECT_SOLAR_BEAM, 1
	battle_tv_effect_points EFFECT_THUNDER, 1
	battle_tv_effect_points EFFECT_TELEPORT, 1
	battle_tv_effect_points EFFECT_BEAT_UP, 2
	battle_tv_effect_points EFFECT_SEMI_INVULNERABLE, 3
	battle_tv_effect_points EFFECT_DEFENSE_CURL, 1
	battle_tv_effect_points EFFECT_SOFTBOILED, 1
	battle_tv_effect_points EFFECT_FAKE_OUT, 4
	battle_tv_effect_points EFFECT_UPROAR, 4
	battle_tv_effect_points EFFECT_STOCKPILE, 3
	battle_tv_effect_points EFFECT_SPIT_UP, 3
	battle_tv_effect_points EFFECT_SWALLOW, 3
	battle_tv_effect_points EFFECT_UNUSED_A3, 1
	battle_tv_effect_points EFFECT_HAIL, 4
	battle_tv_effect_points EFFECT_TORMENT, 7
	battle_tv_effect_points EFFECT_FLATTER, 7
	battle_tv_effect_points EFFECT_WILL_O_WISP, 5
	battle_tv_effect_points EFFECT_MEMENTO, 7
	battle_tv_effect_points EFFECT_FACADE, 1
	battle_tv_effect_points EFFECT_FOCUS_PUNCH, 7
	battle_tv_effect_points EFFECT_SMELLINGSALT, 1
	battle_tv_effect_points EFFECT_FOLLOW_ME, 5
	battle_tv_effect_points EFFECT_NATURE_POWER, 0
	battle_tv_effect_points EFFECT_CHARGE, 4
	battle_tv_effect_points EFFECT_TAUNT, 4
	battle_tv_effect_points EFFECT_HELPING_HAND, 4
	battle_tv_effect_points EFFECT_TRICK, 4
	battle_tv_effect_points EFFECT_ROLE_PLAY, 4
	battle_tv_effect_points EFFECT_WISH, 2
	battle_tv_effect_points EFFECT_ASSIST, 2
	battle_tv_effect_points EFFECT_INGRAIN, 6
	battle_tv_effect_points EFFECT_SUPERPOWER, 3
	battle_tv_effect_points EFFECT_MAGIC_COAT, 6
	battle_tv_effect_points EFFECT_RECYCLE, 4
	battle_tv_effect_points EFFECT_REVENGE, 4
	battle_tv_effect_points EFFECT_BRICK_BREAK, 2
	battle_tv_effect_points EFFECT_YAWN, 5
	battle_tv_effect_points EFFECT_KNOCK_OFF, 2
	battle_tv_effect_points EFFECT_ENDEAVOR, 1
	battle_tv_effect_points EFFECT_ERUPTION, 1
	battle_tv_effect_points EFFECT_SKILL_SWAP, 6
	battle_tv_effect_points EFFECT_IMPRISON, 6
	battle_tv_effect_points EFFECT_REFRESH, 6
	battle_tv_effect_points EFFECT_GRUDGE, 1
	battle_tv_effect_points EFFECT_SNATCH, 1
	battle_tv_effect_points EFFECT_LOW_KICK, 1
	battle_tv_effect_points EFFECT_SECRET_POWER, 1
	battle_tv_effect_points EFFECT_DOUBLE_EDGE, 2
	battle_tv_effect_points EFFECT_TEETER_DANCE, 6
	battle_tv_effect_points EFFECT_BLAZE_KICK, 1
	battle_tv_effect_points EFFECT_MUD_SPORT, 4
	battle_tv_effect_points EFFECT_POISON_FANG, 1
	battle_tv_effect_points EFFECT_WEATHER_BALL, 1
	battle_tv_effect_points EFFECT_OVERHEAT, 3
	battle_tv_effect_points EFFECT_TICKLE, 1
	battle_tv_effect_points EFFECT_COSMIC_POWER, 1
	battle_tv_effect_points EFFECT_SKY_UPPERCUT, 1
	battle_tv_effect_points EFFECT_BULK_UP, 1
	battle_tv_effect_points EFFECT_POISON_TAIL, 1
	battle_tv_effect_points EFFECT_WATER_SPORT, 4
	battle_tv_effect_points EFFECT_CALM_MIND, 1
	battle_tv_effect_points EFFECT_DRAGON_DANCE, 1
	battle_tv_effect_points EFFECT_CAMOUFLAGE, 3
	.if (. - gBattleTvMoveEffectPoints) != NUM_BATTLE_MOVE_EFFECTS * 2
	.error "Battle TV move effect points must cover every battle move effect"
	.endif

sBattleTvPointsEffectiveness: @ 0x085D30EC
	.2byte 4, -3, -6 @ super effective, not very effective, no effect

sBattleTvPointsSetUp: @ 0x085D30F2
	.2byte 4 @ Future Sight
	.2byte 4 @ Doom Desire
	.2byte 6
	.2byte 6 @ Wish
	.2byte 7 @ Grudge
	.2byte 6
	.2byte 2 @ Ingrain

sBattleTvPointsRainMoves: @ 0x085D3100
	battle_tv_move_points MOVE_BUBBLE, 3
	battle_tv_move_points MOVE_WHIRLPOOL, 3
	battle_tv_move_points MOVE_OCTAZOOKA, 3
	battle_tv_move_points MOVE_CLAMP, 3
	battle_tv_move_points MOVE_WITHDRAW, 3
	battle_tv_move_points MOVE_CRABHAMMER, 3
	battle_tv_move_points MOVE_WATER_SPOUT, 3
	battle_tv_move_points MOVE_DIVE, 3
	battle_tv_move_points MOVE_WATERFALL, 3
	battle_tv_move_points MOVE_MUDDY_WATER, 3
	battle_tv_move_points MOVE_SURF, 3
	battle_tv_move_points MOVE_HYDRO_CANNON, 3
	battle_tv_move_points MOVE_HYDRO_PUMP, 3
	battle_tv_move_points MOVE_BUBBLE_BEAM, 3
	battle_tv_move_points MOVE_WATER_SPORT, 0
	battle_tv_move_points MOVE_WATER_GUN, 3
	battle_tv_move_points MOVE_WATER_PULSE, 3
	battle_tv_move_points MOVE_WEATHER_BALL, 3
	battle_tv_move_points MOVE_THUNDER, 3
	battle_tv_move_points MOVE_SOLAR_BEAM, -4
	battle_tv_move_points MOVE_OVERHEAT, -4
	battle_tv_move_points MOVE_FLAME_WHEEL, -4
	battle_tv_move_points MOVE_FLAMETHROWER, -4
	battle_tv_move_points MOVE_SACRED_FIRE, -4
	battle_tv_move_points MOVE_FIRE_BLAST, -4
	battle_tv_move_points MOVE_HEAT_WAVE, -4
	battle_tv_move_points MOVE_EMBER, -4
	battle_tv_move_points MOVE_BLAST_BURN, -4
	battle_tv_move_points MOVE_BLAZE_KICK, -4
	battle_tv_move_points MOVE_ERUPTION, -4
	battle_tv_move_points MOVE_FIRE_SPIN, -4
	battle_tv_move_points MOVE_FIRE_PUNCH, -4
	battle_tv_move_points MOVE_SOLAR_BEAM, -4 @ repeated in the original table
	battle_tv_move_points 0xFFFF, 0

sBattleTvPointsSunMoves: @ 0x085D3188
	battle_tv_move_points MOVE_OVERHEAT, 3
	battle_tv_move_points MOVE_FLAME_WHEEL, 3
	battle_tv_move_points MOVE_FLAMETHROWER, 3
	battle_tv_move_points MOVE_SACRED_FIRE, 3
	battle_tv_move_points MOVE_FIRE_BLAST, 3
	battle_tv_move_points MOVE_HEAT_WAVE, 3
	battle_tv_move_points MOVE_EMBER, 3
	battle_tv_move_points MOVE_BLAST_BURN, 3
	battle_tv_move_points MOVE_BLAZE_KICK, 3
	battle_tv_move_points MOVE_ERUPTION, 3
	battle_tv_move_points MOVE_FIRE_SPIN, 3
	battle_tv_move_points MOVE_FIRE_PUNCH, 3
	battle_tv_move_points MOVE_SOLAR_BEAM, 5
	battle_tv_move_points MOVE_SYNTHESIS, 3
	battle_tv_move_points MOVE_MORNING_SUN, 3
	battle_tv_move_points MOVE_MOONLIGHT, 3
	battle_tv_move_points MOVE_WEATHER_BALL, 3
	battle_tv_move_points 0xFFFF, 0

sBattleTvPointsSandstormMoves: @ 0x085D31D0
	battle_tv_move_points MOVE_WEATHER_BALL, 3
	battle_tv_move_points MOVE_SOLAR_BEAM, -3
	battle_tv_move_points 0xFFFF, 0

sBattleTvPointsHailMoves: @ 0x085D31DC
	battle_tv_move_points MOVE_WEATHER_BALL, 3
	battle_tv_move_points MOVE_SOLAR_BEAM, -3
	battle_tv_move_points 0xFFFF, 0

sBattleTvPointsElectricMoves: @ 0x085D31E8
	battle_tv_move_points MOVE_THUNDERBOLT, 3
	battle_tv_move_points MOVE_THUNDER_PUNCH, 3
	battle_tv_move_points MOVE_SPARK, 3
	battle_tv_move_points MOVE_THUNDER_SHOCK, 3
	battle_tv_move_points MOVE_ZAP_CANNON, 3
	battle_tv_move_points MOVE_SHOCK_WAVE, 3
	battle_tv_move_points MOVE_THUNDER_WAVE, 0
	battle_tv_move_points MOVE_THUNDER, 3
	battle_tv_move_points MOVE_VOLT_TACKLE, 3
	battle_tv_move_points 0xFFFF, 0

sBattleTvPointsStatusDamage: @ 0x085D3210
	.2byte 5 @ Curse
	.2byte 3 @ Leech Seed
	.2byte 3 @ Poison
	.2byte 3 @ Toxic
	.2byte 3 @ Burn
	.2byte 3 @ Nightmare
	.2byte 3 @ trapping move

sBattleTvPointsStatus: @ 0x085D321E
	.2byte 5 @ attraction
	.2byte 5 @ confusion
	.2byte 5 @ paralysis
	.2byte 5 @ sleep
	.2byte 5 @ freeze

sBattleTvPointsSpikes:              .2byte 4
sBattleTvPointsWaterSport:          .2byte 5
sBattleTvPointsMudSport:            .2byte 5
sBattleTvPointsReflect:             .2byte 3
sBattleTvPointsLightScreen:         .2byte 3
sBattleTvPointsSafeguard:           .2byte 4
sBattleTvPointsMist:                .2byte 3
sBattleTvPointsBreakWall:           .2byte 6
sBattleTvPointsCriticalHit:         .2byte 6
sBattleTvPointsFaint:               .2byte 6
sBattleTvPointsFlinched:            .2byte 4

sBattleTvPointsStatIncrease1:
	.2byte 2, 2, 2, 2, 2, 2, 2
sBattleTvPointsStatIncrease2:
	.2byte 4, 4, 4, 4, 4, 4, 4
sBattleTvPointsStatDecreaseSelf:
	.2byte -1, -1, -1, -1, -1, -1, -1
sBattleTvPointsStatDecrease1:
	.2byte 2, 2, 2, 2, 2, 2, 2
sBattleTvPointsStatDecrease2:
	.2byte 4, 4, 4, 4, 4, 4, 4
sBattleTvPointsStatIncreaseNotSelf:
	.2byte -2, -2, -2, -2, -2, -2, -2
	.align 2, 0

	.globl gBattleTvMovePoints
	.globl gUnknown_85D3294
gBattleTvMovePoints:
gUnknown_85D3294: @ 0x085D3294
	.4byte gBattleTvMoveEffectPoints
	.4byte sBattleTvPointsEffectiveness
	.4byte sBattleTvPointsSetUp
	.4byte sBattleTvPointsRainMoves
	.4byte sBattleTvPointsSunMoves
	.4byte sBattleTvPointsSandstormMoves
	.4byte sBattleTvPointsHailMoves
	.4byte sBattleTvPointsElectricMoves
	.4byte sBattleTvPointsStatusDamage
	.4byte sBattleTvPointsStatus
	.4byte sBattleTvPointsSpikes
	.4byte sBattleTvPointsWaterSport
	.4byte sBattleTvPointsMudSport
	.4byte sBattleTvPointsReflect
	.4byte sBattleTvPointsLightScreen
	.4byte sBattleTvPointsSafeguard
	.4byte sBattleTvPointsMist
	.4byte sBattleTvPointsBreakWall
	.4byte sBattleTvPointsCriticalHit
	.4byte sBattleTvPointsFaint
	.4byte sBattleTvPointsFaint
	.4byte sBattleTvPointsFlinched
	.4byte sBattleTvPointsStatIncrease1
	.4byte sBattleTvPointsStatIncrease2
	.4byte sBattleTvPointsStatDecreaseSelf
	.4byte sBattleTvPointsStatDecrease1
	.4byte sBattleTvPointsStatDecrease2
	.4byte sBattleTvPointsStatIncreaseNotSelf

	.globl gBattleTvSpecialBattleStrings
	.globl gUnknown_85D3304
gBattleTvSpecialBattleStrings:
gUnknown_85D3304: @ 0x085D3304
	.2byte 151 @ STRINGID_PKMNPERISHCOUNTFELL
	.2byte 178 @ STRINGID_PKMNWISHCAMETRUE
	.2byte 188 @ STRINGID_PKMNLOSTPPGRUDGE
	.2byte 140 @ STRINGID_PKMNTOOKFOE
	.2byte 180 @ STRINGID_PKMNABSORBEDNUTRIENTS
	.2byte 181 @ STRINGID_PKMNANCHOREDITSELF
	.2byte 147 @ STRINGID_PKMNAFFLICTEDBYCURSE
	.2byte 106 @ STRINGID_PKMNSAPPEDBYLEECHSEED
	.2byte 145 @ STRINGID_PKMNLOCKEDINNIGHTMARE
	.2byte 94  @ STRINGID_PKMNHURTBY
	.2byte 48  @ STRINGID_PKMNHURTBYBURN
	.2byte 42  @ STRINGID_PKMNHURTBYPOISON
	.2byte 149 @ STRINGID_PKMNHURTBYSPIKES
	.2byte 28  @ STRINGID_ATTACKERFAINTED
	.2byte 29  @ STRINGID_TARGETFAINTED
	.2byte 100 @ STRINGID_PKMNHITWITHRECOIL
	.2byte 96  @ STRINGID_PKMNCRASHED
	.2byte 0xFFFF @ terminator
	.globl gSpeciesToBackAnimSet
	.globl gUnknown_85D3328
gSpeciesToBackAnimSet:
gUnknown_85D3328: @ 0x085D3328
	species_back_anim SPECIES_NONE, BACK_ANIM_NONE
	species_back_anim SPECIES_BULBASAUR, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_IVYSAUR, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_VENUSAUR, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_CHARMANDER, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_CHARMELEON, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_CHARIZARD, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_SQUIRTLE, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_WARTORTLE, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_BLASTOISE, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_CATERPIE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_METAPOD, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_BUTTERFREE, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_WEEDLE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_KAKUNA, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_BEEDRILL, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_PIDGEY, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_PIDGEOTTO, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_PIDGEOT, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_RATTATA, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_RATICATE, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_SPEAROW, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_FEAROW, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_EKANS, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_ARBOK, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_PIKACHU, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_RAICHU, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_SANDSHREW, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_SANDSLASH, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_NIDORAN_F, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_NIDORINA, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_NIDOQUEEN, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_NIDORAN_M, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_NIDORINO, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_NIDOKING, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_CLEFAIRY, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_CLEFABLE, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_VULPIX, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_NINETALES, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_JIGGLYPUFF, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_WIGGLYTUFF, BACK_ANIM_GROW
	species_back_anim SPECIES_ZUBAT, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_GOLBAT, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_ODDISH, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_GLOOM, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_VILEPLUME, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_PARAS, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_PARASECT, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_VENONAT, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_VENOMOTH, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_DIGLETT, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_DUGTRIO, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_MEOWTH, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_PERSIAN, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_PSYDUCK, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_GOLDUCK, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_MANKEY, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_PRIMEAPE, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_GROWLITHE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_ARCANINE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_POLIWAG, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_POLIWHIRL, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_POLIWRATH, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_ABRA, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_KADABRA, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_ALAKAZAM, BACK_ANIM_GROW_STUTTER
	species_back_anim SPECIES_MACHOP, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_MACHOKE, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_MACHAMP, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_BELLSPROUT, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_WEEPINBELL, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_VICTREEBEL, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_TENTACOOL, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_TENTACRUEL, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_GEODUDE, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_GRAVELER, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_GOLEM, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_PONYTA, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_RAPIDASH, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SLOWPOKE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_SLOWBRO, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_MAGNEMITE, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_MAGNETON, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_FARFETCHD, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_DODUO, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_DODRIO, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SEEL, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_DEWGONG, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_GRIMER, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_MUK, BACK_ANIM_H_STRETCH
	species_back_anim SPECIES_SHELLDER, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_CLOYSTER, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_GASTLY, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_HAUNTER, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_GENGAR, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_ONIX, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_DROWZEE, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_HYPNO, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_KRABBY, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_KINGLER, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_VOLTORB, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_ELECTRODE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_EXEGGCUTE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_EXEGGUTOR, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_CUBONE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_MAROWAK, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_HITMONLEE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_HITMONCHAN, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_LICKITUNG, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_KOFFING, BACK_ANIM_GROW
	species_back_anim SPECIES_WEEZING, BACK_ANIM_GROW
	species_back_anim SPECIES_RHYHORN, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_RHYDON, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_CHANSEY, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_TANGELA, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_KANGASKHAN, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_HORSEA, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_SEADRA, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_GOLDEEN, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_SEAKING, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_STARYU, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_STARMIE, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_MR_MIME, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_SCYTHER, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_JYNX, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_ELECTABUZZ, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_MAGMAR, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_PINSIR, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_TAUROS, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_MAGIKARP, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_GYARADOS, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_LAPRAS, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_DITTO, BACK_ANIM_SHRINK_GROW
	species_back_anim SPECIES_EEVEE, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_VAPOREON, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_JOLTEON, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_FLAREON, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_PORYGON, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_OMANYTE, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_OMASTAR, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_KABUTO, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_KABUTOPS, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_AERODACTYL, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SNORLAX, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_ARTICUNO, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_ZAPDOS, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_MOLTRES, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_DRATINI, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_DRAGONAIR, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_DRAGONITE, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_MEWTWO, BACK_ANIM_GROW_STUTTER
	species_back_anim SPECIES_MEW, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_CHIKORITA, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_BAYLEEF, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_MEGANIUM, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_CYNDAQUIL, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_QUILAVA, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_TYPHLOSION, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_TOTODILE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_CROCONAW, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_FERALIGATR, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_SENTRET, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_FURRET, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_HOOTHOOT, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_NOCTOWL, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_LEDYBA, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_LEDIAN, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_SPINARAK, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_ARIADOS, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_CROBAT, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_CHINCHOU, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_LANTURN, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_PICHU, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_CLEFFA, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_IGGLYBUFF, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_TOGEPI, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_TOGETIC, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_NATU, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_XATU, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_MAREEP, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_FLAAFFY, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_AMPHAROS, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_BELLOSSOM, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_MARILL, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_AZUMARILL, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_SUDOWOODO, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_POLITOED, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_HOPPIP, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_SKIPLOOM, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_JUMPLUFF, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_AIPOM, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_SUNKERN, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_SUNFLORA, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_YANMA, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_WOOPER, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_QUAGSIRE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_ESPEON, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_UMBREON, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_MURKROW, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_SLOWKING, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_MISDREAVUS, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_UNOWN, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_WOBBUFFET, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_GIRAFARIG, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_PINECO, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_FORRETRESS, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_DUNSPARCE, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_GLIGAR, BACK_ANIM_SHRINK_GROW
	species_back_anim SPECIES_STEELIX, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_SNUBBULL, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_GRANBULL, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_QWILFISH, BACK_ANIM_GROW_STUTTER
	species_back_anim SPECIES_SCIZOR, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SHUCKLE, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_HERACROSS, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SNEASEL, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_TEDDIURSA, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_URSARING, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_SLUGMA, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_MAGCARGO, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_SWINUB, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_PILOSWINE, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_CORSOLA, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_REMORAID, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_OCTILLERY, BACK_ANIM_SHRINK_GROW
	species_back_anim SPECIES_DELIBIRD, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_MANTINE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_SKARMORY, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_HOUNDOUR, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_HOUNDOOM, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_KINGDRA, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_PHANPY, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_DONPHAN, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_PORYGON2, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_STANTLER, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_SMEARGLE, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_TYROGUE, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_HITMONTOP, BACK_ANIM_CIRCLE_COUNTERCLOCKWISE
	species_back_anim SPECIES_SMOOCHUM, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_ELEKID, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_MAGBY, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_MILTANK, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_BLISSEY, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_RAIKOU, BACK_ANIM_SHAKE_FLASH_YELLOW
	species_back_anim SPECIES_ENTEI, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_SUICUNE, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_LARVITAR, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_PUPITAR, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_TYRANITAR, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_LUGIA, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_HO_OH, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_CELEBI, BACK_ANIM_SHAKE_GLOW_GREEN
	species_back_anim SPECIES_OLD_UNOWN_B, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_C, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_D, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_E, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_F, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_G, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_H, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_I, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_J, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_K, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_L, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_M, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_N, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_O, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_P, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_Q, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_R, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_S, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_T, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_U, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_V, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_W, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_X, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_Y, BACK_ANIM_NONE
	species_back_anim SPECIES_OLD_UNOWN_Z, BACK_ANIM_NONE
	species_back_anim SPECIES_TREECKO, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_GROVYLE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SCEPTILE, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_TORCHIC, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_COMBUSKEN, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_BLAZIKEN, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_MUDKIP, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_MARSHTOMP, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_SWAMPERT, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_POOCHYENA, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_MIGHTYENA, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_ZIGZAGOON, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_LINOONE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_WURMPLE, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_SILCOON, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_BEAUTIFLY, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_CASCOON, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_DUSTOX, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_LOTAD, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_LOMBRE, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_LUDICOLO, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_SEEDOT, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_NUZLEAF, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_SHIFTRY, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_NINCADA, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_NINJASK, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_SHEDINJA, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_TAILLOW, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_SWELLOW, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SHROOMISH, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_BRELOOM, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_SPINDA, BACK_ANIM_CIRCLE_COUNTERCLOCKWISE
	species_back_anim SPECIES_WINGULL, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_PELIPPER, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_SURSKIT, BACK_ANIM_H_SPRING
	species_back_anim SPECIES_MASQUERAIN, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_WAILMER, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_WAILORD, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_SKITTY, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_DELCATTY, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_KECLEON, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_BALTOY, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_CLAYDOL, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_NOSEPASS, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_TORKOAL, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_SABLEYE, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_BARBOACH, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_WHISCASH, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_LUVDISC, BACK_ANIM_H_SPRING_REPEATED
	species_back_anim SPECIES_CORPHISH, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_CRAWDAUNT, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_FEEBAS, BACK_ANIM_H_SPRING
	species_back_anim SPECIES_MILOTIC, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_CARVANHA, BACK_ANIM_H_SPRING_REPEATED
	species_back_anim SPECIES_SHARPEDO, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_TRAPINCH, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_VIBRAVA, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_FLYGON, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_MAKUHITA, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_HARIYAMA, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_ELECTRIKE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_MANECTRIC, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_NUMEL, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_CAMERUPT, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_SPHEAL, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_SEALEO, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_WALREIN, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_CACNEA, BACK_ANIM_V_SHAKE_H_SLIDE
	species_back_anim SPECIES_CACTURNE, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_SNORUNT, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_GLALIE, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_LUNATONE, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_SOLROCK, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_AZURILL, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_SPOINK, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_GRUMPIG, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_PLUSLE, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_MINUN, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_MAWILE, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_MEDITITE, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_MEDICHAM, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_SWABLU, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_ALTARIA, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_WYNAUT, BACK_ANIM_CONCAVE_ARC_SMALL
	species_back_anim SPECIES_DUSKULL, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_DUSCLOPS, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_ROSELIA, BACK_ANIM_SHAKE_GLOW_GREEN
	species_back_anim SPECIES_SLAKOTH, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_VIGOROTH, BACK_ANIM_CONCAVE_ARC_LARGE
	species_back_anim SPECIES_SLAKING, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_GULPIN, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_SWALOT, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_TROPIUS, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_WHISMUR, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_LOUDRED, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_EXPLOUD, BACK_ANIM_GROW_STUTTER
	species_back_anim SPECIES_CLAMPERL, BACK_ANIM_DIP_RIGHT_SIDE
	species_back_anim SPECIES_HUNTAIL, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_GOREBYSS, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_ABSOL, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_SHUPPET, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_BANETTE, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_SEVIPER, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_ZANGOOSE, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_RELICANTH, BACK_ANIM_H_SLIDE
	species_back_anim SPECIES_ARON, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_LAIRON, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_AGGRON, BACK_ANIM_V_SHAKE_LOW
	species_back_anim SPECIES_CASTFORM_NORMAL, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_VOLBEAT, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_ILLUMISE, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_LILEEP, BACK_ANIM_H_STRETCH
	species_back_anim SPECIES_CRADILY, BACK_ANIM_V_STRETCH
	species_back_anim SPECIES_ANORITH, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_ARMALDO, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_RALTS, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_KIRLIA, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_GARDEVOIR, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_BAGON, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_SHELGON, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_SALAMENCE, BACK_ANIM_H_SHAKE
	species_back_anim SPECIES_BELDUM, BACK_ANIM_TRIANGLE_DOWN
	species_back_anim SPECIES_METANG, BACK_ANIM_JOLT_RIGHT
	species_back_anim SPECIES_METAGROSS, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_REGIROCK, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_REGICE, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_REGISTEEL, BACK_ANIM_V_SHAKE
	species_back_anim SPECIES_KYOGRE, BACK_ANIM_SHAKE_GLOW_BLUE
	species_back_anim SPECIES_GROUDON, BACK_ANIM_SHAKE_GLOW_RED
	species_back_anim SPECIES_RAYQUAZA, BACK_ANIM_GROW_STUTTER
	species_back_anim SPECIES_LATIAS, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_LATIOS, BACK_ANIM_H_VIBRATE
	species_back_anim SPECIES_JIRACHI, BACK_ANIM_CONVEX_DOUBLE_ARC
	species_back_anim SPECIES_DEOXYS_NORMAL, BACK_ANIM_SHRINK_GROW_VIBRATE
	species_back_anim SPECIES_CHIMECHO, BACK_ANIM_CONVEX_DOUBLE_ARC
	.if (. - gSpeciesToBackAnimSet) != SPECIES_EGG
	.error "Pokemon back animation set table must cover every species before SPECIES_EGG"
	.endif
	.globl gYellowFlashData
	.globl gUnknown_85D34C4
gYellowFlashData:
gUnknown_85D34C4: @ 0x085D34C4
	yellow_flash_step FALSE, 5
	yellow_flash_step TRUE, 1
	yellow_flash_step FALSE, 15
	yellow_flash_step TRUE, 4
	yellow_flash_step FALSE, 2
	yellow_flash_step TRUE, 2
	yellow_flash_step FALSE, 2
	yellow_flash_step TRUE, 2
	yellow_flash_step FALSE, 2
	yellow_flash_step TRUE, 2
	yellow_flash_step FALSE, 2
	yellow_flash_step TRUE, 2
	yellow_flash_step FALSE, 2
	yellow_flash_step FALSE, -1
	.globl gVerticalShakeData
	.globl gUnknown_85D34E0
gVerticalShakeData:
gUnknown_85D34E0: @ 0x085D34E0
	vertical_shake_step 6, 30
	vertical_shake_step -2, 15
	vertical_shake_step 6, 30
	vertical_shake_step -1, 0
	.globl gMonAnimFunctions
	.globl gUnknown_85D34E8
gMonAnimFunctions:
gUnknown_85D34E8: @ 0x085D34E8
	mon_anim_function ANIM_V_SQUISH_AND_BOUNCE, pokemonanimfunc_00
	mon_anim_function ANIM_CIRCULAR_STRETCH_TWICE, pokemonanimfunc_01
	mon_anim_function ANIM_H_VIBRATE, pokemonanimfunc_02
	mon_anim_function ANIM_H_SLIDE, pokemonanimfunc_03
	mon_anim_function ANIM_V_SLIDE, pokemonanimfunc_04
	mon_anim_function ANIM_BOUNCE_ROTATE_TO_SIDES, pokemonanimfunc_05
	mon_anim_function ANIM_V_JUMPS_H_JUMPS, pokemonanimfunc_06
	mon_anim_function ANIM_ROTATE_TO_SIDES, pokemonanimfunc_07
	mon_anim_function ANIM_ROTATE_TO_SIDES_TWICE, pokemonanimfunc_08
	mon_anim_function ANIM_GROW_VIBRATE, pokemonanimfunc_09
	mon_anim_function ANIM_ZIGZAG_FAST, pokemonanimfunc_0A
	mon_anim_function ANIM_SWING_CONCAVE, pokemonanimfunc_0B
	mon_anim_function ANIM_SWING_CONCAVE_FAST, pokemonanimfunc_0C
	mon_anim_function ANIM_SWING_CONVEX, pokemonanimfunc_0D
	mon_anim_function ANIM_SWING_CONVEX_FAST, pokemonanimfunc_0E
	mon_anim_function ANIM_H_SHAKE, pokemonanimfunc_0F
	mon_anim_function ANIM_V_SHAKE, pokemonanimfunc_10
	mon_anim_function ANIM_CIRCULAR_VIBRATE, pokemonanimfunc_11
	mon_anim_function ANIM_TWIST, pokemonanimfunc_12
	mon_anim_function ANIM_SHRINK_GROW, pokemonanimfunc_13
	mon_anim_function ANIM_CIRCLE_C_CLOCKWISE, pokemonanimfunc_14
	mon_anim_function ANIM_GLOW_BLACK, pokemonanimfunc_15
	mon_anim_function ANIM_H_STRETCH, pokemonanimfunc_16
	mon_anim_function ANIM_V_STRETCH, pokemonanimfunc_17
	mon_anim_function ANIM_RISING_WOBBLE, pokemonanimfunc_18
	mon_anim_function ANIM_V_SHAKE_TWICE, pokemonanimfunc_19
	mon_anim_function ANIM_TIP_MOVE_FORWARD, pokemonanimfunc_1A
	mon_anim_function ANIM_H_PIVOT, pokemonanimfunc_1B
	mon_anim_function ANIM_V_SLIDE_WOBBLE, pokemonanimfunc_1C
	mon_anim_function ANIM_H_SLIDE_WOBBLE, pokemonanimfunc_1D
	mon_anim_function ANIM_V_JUMPS_BIG, pokemonanimfunc_1E
	mon_anim_function ANIM_SPIN_LONG, pokemonanimfunc_1F
	mon_anim_function ANIM_GLOW_ORANGE, pokemonanimfunc_20
	mon_anim_function ANIM_GLOW_RED, pokemonanimfunc_21
	mon_anim_function ANIM_GLOW_BLUE, pokemonanimfunc_22
	mon_anim_function ANIM_GLOW_YELLOW, pokemonanimfunc_23
	mon_anim_function ANIM_GLOW_PURPLE, pokemonanimfunc_24
	mon_anim_function ANIM_BACK_AND_LUNGE, pokemonanimfunc_25
	mon_anim_function ANIM_BACK_FLIP, pokemonanimfunc_26
	mon_anim_function ANIM_FLICKER, pokemonanimfunc_27
	mon_anim_function ANIM_BACK_FLIP_BIG, pokemonanimfunc_28
	mon_anim_function ANIM_FRONT_FLIP, pokemonanimfunc_29
	mon_anim_function ANIM_TUMBLING_FRONT_FLIP, pokemonanimfunc_2A
	mon_anim_function ANIM_FIGURE_8, pokemonanimfunc_2B
	mon_anim_function ANIM_FLASH_YELLOW, pokemonanimfunc_2C
	mon_anim_function ANIM_SWING_CONCAVE_FAST_SHORT, pokemonanimfunc_2D
	mon_anim_function ANIM_SWING_CONVEX_FAST_SHORT, pokemonanimfunc_2E
	mon_anim_function ANIM_ROTATE_UP_SLAM_DOWN, pokemonanimfunc_2F
	mon_anim_function ANIM_DEEP_V_SQUISH_AND_BOUNCE, pokemonanimfunc_30
	mon_anim_function ANIM_H_JUMPS, pokemonanimfunc_31
	mon_anim_function ANIM_H_JUMPS_V_STRETCH, pokemonanimfunc_32
	mon_anim_function ANIM_ROTATE_TO_SIDES_FAST, pokemonanimfunc_33
	mon_anim_function ANIM_ROTATE_UP_TO_SIDES, pokemonanimfunc_34
	mon_anim_function ANIM_FLICKER_INCREASING, pokemonanimfunc_35
	mon_anim_function ANIM_TIP_HOP_FORWARD, pokemonanimfunc_36
	mon_anim_function ANIM_PIVOT_SHAKE, pokemonanimfunc_37
	mon_anim_function ANIM_TIP_AND_SHAKE, pokemonanimfunc_38
	mon_anim_function ANIM_VIBRATE_TO_CORNERS, pokemonanimfunc_39
	mon_anim_function ANIM_GROW_IN_STAGES, pokemonanimfunc_3A
	mon_anim_function ANIM_V_SPRING, pokemonanimfunc_3B
	mon_anim_function ANIM_V_REPEATED_SPRING, pokemonanimfunc_3C
	mon_anim_function ANIM_SPRING_RISING, pokemonanimfunc_3D
	mon_anim_function ANIM_H_SPRING, pokemonanimfunc_3E
	mon_anim_function ANIM_H_REPEATED_SPRING_SLOW, pokemonanimfunc_3F
	mon_anim_function ANIM_H_SLIDE_SHRINK, pokemonanimfunc_40
	mon_anim_function ANIM_LUNGE_GROW, pokemonanimfunc_41
	mon_anim_function ANIM_CIRCLE_INTO_BG, pokemonanimfunc_42
	mon_anim_function ANIM_RAPID_H_HOPS, pokemonanimfunc_43
	mon_anim_function ANIM_FOUR_PETAL, pokemonanimfunc_44
	mon_anim_function ANIM_V_SQUISH_AND_BOUNCE_SLOW, pokemonanimfunc_45
	mon_anim_function ANIM_H_SLIDE_SLOW, pokemonanimfunc_46
	mon_anim_function ANIM_V_SLIDE_SLOW, pokemonanimfunc_47
	mon_anim_function ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, pokemonanimfunc_48
	mon_anim_function ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW, pokemonanimfunc_49
	mon_anim_function ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW, pokemonanimfunc_4A
	mon_anim_function ANIM_ZIGZAG_SLOW, pokemonanimfunc_4B
	mon_anim_function ANIM_H_SHAKE_SLOW, pokemonanimfunc_4C
	mon_anim_function ANIM_V_SHAKE_SLOW, pokemonanimfunc_4D
	mon_anim_function ANIM_TWIST_TWICE, pokemonanimfunc_4E
	mon_anim_function ANIM_CIRCLE_C_CLOCKWISE_SLOW, pokemonanimfunc_4F
	mon_anim_function ANIM_V_SHAKE_TWICE_SLOW, pokemonanimfunc_50
	mon_anim_function ANIM_V_SLIDE_WOBBLE_SMALL, pokemonanimfunc_51
	mon_anim_function ANIM_V_JUMPS_SMALL, pokemonanimfunc_52
	mon_anim_function ANIM_SPIN, pokemonanimfunc_53
	mon_anim_function ANIM_TUMBLING_FRONT_FLIP_TWICE, pokemonanimfunc_54
	mon_anim_function ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE, pokemonanimfunc_55
	mon_anim_function ANIM_H_JUMPS_V_STRETCH_TWICE, pokemonanimfunc_56
	mon_anim_function ANIM_V_SHAKE_BACK, pokemonanimfunc_57
	mon_anim_function ANIM_V_SHAKE_BACK_SLOW, pokemonanimfunc_58
	mon_anim_function ANIM_V_SHAKE_H_SLIDE_SLOW, pokemonanimfunc_59
	mon_anim_function ANIM_V_STRETCH_BOTH_ENDS_SLOW, pokemonanimfunc_5A
	mon_anim_function ANIM_H_STRETCH_FAR_SLOW, pokemonanimfunc_5B
	mon_anim_function ANIM_V_SHAKE_LOW_TWICE, pokemonanimfunc_5C
	mon_anim_function ANIM_H_SHAKE_FAST, pokemonanimfunc_5D
	mon_anim_function ANIM_H_SLIDE_FAST, pokemonanimfunc_5E
	mon_anim_function ANIM_H_VIBRATE_FAST, pokemonanimfunc_5F
	mon_anim_function ANIM_H_VIBRATE_FASTEST, pokemonanimfunc_60
	mon_anim_function ANIM_V_SHAKE_BACK_FAST, pokemonanimfunc_61
	mon_anim_function ANIM_V_SHAKE_LOW_TWICE_SLOW, pokemonanimfunc_62
	mon_anim_function ANIM_V_SHAKE_LOW_TWICE_FAST, pokemonanimfunc_63
	mon_anim_function ANIM_CIRCLE_C_CLOCKWISE_LONG, pokemonanimfunc_64
	mon_anim_function ANIM_GROW_STUTTER_SLOW, pokemonanimfunc_65
	mon_anim_function ANIM_V_SHAKE_H_SLIDE, pokemonanimfunc_66
	mon_anim_function ANIM_V_SHAKE_H_SLIDE_FAST, pokemonanimfunc_67
	mon_anim_function ANIM_TRIANGLE_DOWN_SLOW, pokemonanimfunc_68
	mon_anim_function ANIM_TRIANGLE_DOWN, pokemonanimfunc_69
	mon_anim_function ANIM_TRIANGLE_DOWN_TWICE, pokemonanimfunc_6A
	mon_anim_function ANIM_GROW, pokemonanimfunc_6B
	mon_anim_function ANIM_GROW_TWICE, pokemonanimfunc_6C
	mon_anim_function ANIM_H_SPRING_FAST, pokemonanimfunc_6D
	mon_anim_function ANIM_H_SPRING_SLOW, pokemonanimfunc_6E
	mon_anim_function ANIM_H_REPEATED_SPRING_FAST, pokemonanimfunc_6F
	mon_anim_function ANIM_H_REPEATED_SPRING, pokemonanimfunc_70
	mon_anim_function ANIM_SHRINK_GROW_FAST, pokemonanimfunc_71
	mon_anim_function ANIM_SHRINK_GROW_SLOW, pokemonanimfunc_72
	mon_anim_function ANIM_V_STRETCH_BOTH_ENDS, pokemonanimfunc_73
	mon_anim_function ANIM_V_STRETCH_BOTH_ENDS_TWICE, pokemonanimfunc_74
	mon_anim_function ANIM_H_STRETCH_FAR_TWICE, pokemonanimfunc_75
	mon_anim_function ANIM_H_STRETCH_FAR, pokemonanimfunc_76
	mon_anim_function ANIM_GROW_STUTTER_TWICE, pokemonanimfunc_77
	mon_anim_function ANIM_GROW_STUTTER, pokemonanimfunc_78
	mon_anim_function ANIM_CONCAVE_ARC_LARGE_SLOW, pokemonanimfunc_79
	mon_anim_function ANIM_CONCAVE_ARC_LARGE, pokemonanimfunc_7A
	mon_anim_function ANIM_CONCAVE_ARC_LARGE_TWICE, pokemonanimfunc_7B
	mon_anim_function ANIM_CONVEX_DOUBLE_ARC_SLOW, pokemonanimfunc_7C
	mon_anim_function ANIM_CONVEX_DOUBLE_ARC, pokemonanimfunc_7D
	mon_anim_function ANIM_CONVEX_DOUBLE_ARC_TWICE, pokemonanimfunc_7E
	mon_anim_function ANIM_CONCAVE_ARC_SMALL_SLOW, pokemonanimfunc_7F
	mon_anim_function ANIM_CONCAVE_ARC_SMALL, pokemonanimfunc_80
	mon_anim_function ANIM_CONCAVE_ARC_SMALL_TWICE, pokemonanimfunc_81
	mon_anim_function ANIM_H_DIP, pokemonanimfunc_82
	mon_anim_function ANIM_H_DIP_FAST, pokemonanimfunc_83
	mon_anim_function ANIM_H_DIP_TWICE, pokemonanimfunc_84
	mon_anim_function ANIM_SHRINK_GROW_VIBRATE_FAST, pokemonanimfunc_85
	mon_anim_function ANIM_SHRINK_GROW_VIBRATE, pokemonanimfunc_86
	mon_anim_function ANIM_SHRINK_GROW_VIBRATE_SLOW, pokemonanimfunc_87
	mon_anim_function ANIM_JOLT_RIGHT_FAST, pokemonanimfunc_88
	mon_anim_function ANIM_JOLT_RIGHT, pokemonanimfunc_89
	mon_anim_function ANIM_JOLT_RIGHT_SLOW, pokemonanimfunc_8A
	mon_anim_function ANIM_SHAKE_FLASH_YELLOW_FAST, pokemonanimfunc_8B
	mon_anim_function ANIM_SHAKE_FLASH_YELLOW, pokemonanimfunc_8C
	mon_anim_function ANIM_SHAKE_FLASH_YELLOW_SLOW, pokemonanimfunc_8D
	mon_anim_function ANIM_SHAKE_GLOW_RED_FAST, pokemonanimfunc_8E
	mon_anim_function ANIM_SHAKE_GLOW_RED, pokemonanimfunc_8F
	mon_anim_function ANIM_SHAKE_GLOW_RED_SLOW, pokemonanimfunc_90
	mon_anim_function ANIM_SHAKE_GLOW_GREEN_FAST, pokemonanimfunc_91
	mon_anim_function ANIM_SHAKE_GLOW_GREEN, pokemonanimfunc_92
	mon_anim_function ANIM_SHAKE_GLOW_GREEN_SLOW, pokemonanimfunc_93
	mon_anim_function ANIM_SHAKE_GLOW_BLUE_FAST, pokemonanimfunc_94
	mon_anim_function ANIM_SHAKE_GLOW_BLUE, pokemonanimfunc_95
	mon_anim_function ANIM_SHAKE_GLOW_BLUE_SLOW, pokemonanimfunc_96
	.if (. - gMonAnimFunctions) != (NUM_MON_ANIMS * 4)
	.error "Pokemon animation function table has the wrong size"
	.endif
	.globl gBackAnimSetToAnimIds
	.globl gUnknown_85D3744
gBackAnimSetToAnimIds:
gUnknown_85D3744: @ 0x085D3744
	back_anim_variants BACK_ANIM_H_VIBRATE, ANIM_H_VIBRATE_FASTEST, ANIM_H_VIBRATE_FAST, ANIM_H_VIBRATE
	back_anim_variants BACK_ANIM_H_SLIDE, ANIM_H_SLIDE_FAST, ANIM_H_SLIDE, ANIM_H_SLIDE_SLOW
	back_anim_variants BACK_ANIM_H_SPRING, ANIM_H_SPRING_FAST, ANIM_H_SPRING, ANIM_H_SPRING_SLOW
	back_anim_variants BACK_ANIM_H_SPRING_REPEATED, ANIM_H_REPEATED_SPRING_FAST, ANIM_H_REPEATED_SPRING, ANIM_H_REPEATED_SPRING_SLOW
	back_anim_variants BACK_ANIM_SHRINK_GROW, ANIM_SHRINK_GROW_FAST, ANIM_SHRINK_GROW, ANIM_SHRINK_GROW_SLOW
	back_anim_variants BACK_ANIM_GROW, ANIM_GROW_TWICE, ANIM_GROW, ANIM_GROW_IN_STAGES
	back_anim_variants BACK_ANIM_CIRCLE_COUNTERCLOCKWISE, ANIM_CIRCLE_C_CLOCKWISE_LONG, ANIM_CIRCLE_C_CLOCKWISE, ANIM_CIRCLE_C_CLOCKWISE_SLOW
	back_anim_variants BACK_ANIM_H_SHAKE, ANIM_H_SHAKE_FAST, ANIM_H_SHAKE, ANIM_H_SHAKE_SLOW
	back_anim_variants BACK_ANIM_V_SHAKE, ANIM_V_SHAKE_BACK_FAST, ANIM_V_SHAKE_BACK, ANIM_V_SHAKE_BACK_SLOW
	back_anim_variants BACK_ANIM_V_SHAKE_H_SLIDE, ANIM_V_SHAKE_H_SLIDE_FAST, ANIM_V_SHAKE_H_SLIDE, ANIM_V_SHAKE_H_SLIDE_SLOW
	back_anim_variants BACK_ANIM_V_STRETCH, ANIM_V_STRETCH_BOTH_ENDS_TWICE, ANIM_V_STRETCH_BOTH_ENDS, ANIM_V_STRETCH_BOTH_ENDS_SLOW
	back_anim_variants BACK_ANIM_H_STRETCH, ANIM_H_STRETCH_FAR_TWICE, ANIM_H_STRETCH_FAR, ANIM_H_STRETCH_FAR_SLOW
	back_anim_variants BACK_ANIM_GROW_STUTTER, ANIM_GROW_STUTTER_TWICE, ANIM_GROW_STUTTER, ANIM_GROW_STUTTER_SLOW
	back_anim_variants BACK_ANIM_V_SHAKE_LOW, ANIM_V_SHAKE_LOW_TWICE_FAST, ANIM_V_SHAKE_LOW_TWICE, ANIM_V_SHAKE_LOW_TWICE_SLOW
	back_anim_variants BACK_ANIM_TRIANGLE_DOWN, ANIM_TRIANGLE_DOWN_TWICE, ANIM_TRIANGLE_DOWN, ANIM_TRIANGLE_DOWN_SLOW
	back_anim_variants BACK_ANIM_CONCAVE_ARC_LARGE, ANIM_CONCAVE_ARC_LARGE_TWICE, ANIM_CONCAVE_ARC_LARGE, ANIM_CONCAVE_ARC_LARGE_SLOW
	back_anim_variants BACK_ANIM_CONVEX_DOUBLE_ARC, ANIM_CONVEX_DOUBLE_ARC_TWICE, ANIM_CONVEX_DOUBLE_ARC, ANIM_CONVEX_DOUBLE_ARC_SLOW
	back_anim_variants BACK_ANIM_CONCAVE_ARC_SMALL, ANIM_CONCAVE_ARC_SMALL_TWICE, ANIM_CONCAVE_ARC_SMALL, ANIM_CONCAVE_ARC_SMALL_SLOW
	back_anim_variants BACK_ANIM_DIP_RIGHT_SIDE, ANIM_H_DIP_TWICE, ANIM_H_DIP, ANIM_H_DIP_FAST
	back_anim_variants BACK_ANIM_SHRINK_GROW_VIBRATE, ANIM_SHRINK_GROW_VIBRATE_FAST, ANIM_SHRINK_GROW_VIBRATE, ANIM_SHRINK_GROW_VIBRATE_SLOW
	back_anim_variants BACK_ANIM_JOLT_RIGHT, ANIM_JOLT_RIGHT_FAST, ANIM_JOLT_RIGHT, ANIM_JOLT_RIGHT_SLOW
	back_anim_variants BACK_ANIM_SHAKE_FLASH_YELLOW, ANIM_SHAKE_FLASH_YELLOW_FAST, ANIM_SHAKE_FLASH_YELLOW, ANIM_SHAKE_FLASH_YELLOW_SLOW
	back_anim_variants BACK_ANIM_SHAKE_GLOW_RED, ANIM_SHAKE_GLOW_RED_FAST, ANIM_SHAKE_GLOW_RED, ANIM_SHAKE_GLOW_RED_SLOW
	back_anim_variants BACK_ANIM_SHAKE_GLOW_GREEN, ANIM_SHAKE_GLOW_GREEN_FAST, ANIM_SHAKE_GLOW_GREEN, ANIM_SHAKE_GLOW_GREEN_SLOW
	back_anim_variants BACK_ANIM_SHAKE_GLOW_BLUE, ANIM_SHAKE_GLOW_BLUE_FAST, ANIM_SHAKE_GLOW_BLUE, ANIM_SHAKE_GLOW_BLUE_SLOW
	.if (. - gBackAnimSetToAnimIds) != (NUM_BACK_ANIM_SETS * 3)
	.error "Pokemon back animation variant table has the wrong size"
	.endif
	.globl gBackAnimNatureModTable
	.globl gUnknown_85D378F
gBackAnimNatureModTable:
gUnknown_85D378F: @ 0x085D378F
	back_anim_nature_mod NATURE_HARDY,   0
	back_anim_nature_mod NATURE_LONELY,  2
	back_anim_nature_mod NATURE_BRAVE,   0
	back_anim_nature_mod NATURE_ADAMANT, 0
	back_anim_nature_mod NATURE_NAUGHTY, 0
	back_anim_nature_mod NATURE_BOLD,    1
	back_anim_nature_mod NATURE_DOCILE,  1
	back_anim_nature_mod NATURE_RELAXED, 1
	back_anim_nature_mod NATURE_IMPISH,  0
	back_anim_nature_mod NATURE_LAX,     1
	back_anim_nature_mod NATURE_TIMID,   2
	back_anim_nature_mod NATURE_HASTY,   0
	back_anim_nature_mod NATURE_SERIOUS, 1
	back_anim_nature_mod NATURE_JOLLY,   0
	back_anim_nature_mod NATURE_NAIVE,   0
	back_anim_nature_mod NATURE_MODEST,  2
	back_anim_nature_mod NATURE_MILD,    2
	back_anim_nature_mod NATURE_QUIET,   2
	back_anim_nature_mod NATURE_BASHFUL, 2
	back_anim_nature_mod NATURE_RASH,    1
	back_anim_nature_mod NATURE_CALM,    1
	back_anim_nature_mod NATURE_GENTLE,  2
	back_anim_nature_mod NATURE_SASSY,   1
	back_anim_nature_mod NATURE_CAREFUL, 2
	back_anim_nature_mod NATURE_QUIRKY,  1
	.if (. - gBackAnimNatureModTable) != NUM_NATURES
	.error "Pokemon back animation nature modifier table has the wrong size"
	.endif

gMonAffineAnim_Normal: @ 0x085D37A8
	sprite_affine_anim_frame SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_end

gMonAffineAnim_HorizontalFlip: @ 0x085D37B8
	sprite_affine_anim_frame -SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, 0, 0
	sprite_affine_anim_end

	.globl gMonAffineAnims
	.globl gUnknown_85D37C8
gMonAffineAnims:
gUnknown_85D37C8: @ 0x085D37C8
	sprite_affine_anim_sequence gMonAffineAnim_Normal
	sprite_affine_anim_sequence gMonAffineAnim_HorizontalFlip
	.globl gMonAnimZigzagFastData
	.globl gUnknown_85D37D0
gMonAnimZigzagFastData:
gUnknown_85D37D0: @ 0x085D37D0
	mon_anim_offset_step -1, -1, 6
	mon_anim_offset_step  2,  0, 6
	mon_anim_offset_step -2,  2, 6
	mon_anim_offset_step  2,  0, 6
	mon_anim_offset_step -2, -2, 6
	mon_anim_offset_step  2,  0, 6
	mon_anim_offset_step -2,  2, 6
	mon_anim_offset_step  2,  0, 6
	mon_anim_offset_step -1, -1, 6
	mon_anim_offset_step  0,  0, 0
	.globl gMonAnimBounceRotateToSidesData
	.globl gUnknown_85D37EE
gMonAnimBounceRotateToSidesData:
gUnknown_85D37EE: @ 0x085D37EE
	@ Variant 0
	mon_anim_interpolation_step  0,  8,  8
	mon_anim_interpolation_step  8, -8, 12
	mon_anim_interpolation_step -8,  8, 12
	mon_anim_interpolation_step  8, -8, 12
	mon_anim_interpolation_step -8,  8, 12
	mon_anim_interpolation_step  8, -8, 12
	mon_anim_interpolation_step -8,  0, 12
	mon_anim_interpolation_step  0,  0,  0
	@ Variant 1
	mon_anim_interpolation_step  0,  8, 16
	mon_anim_interpolation_step  8, -8, 24
	mon_anim_interpolation_step -8,  8, 24
	mon_anim_interpolation_step  8, -8, 24
	mon_anim_interpolation_step -8,  8, 24
	mon_anim_interpolation_step  8, -8, 24
	mon_anim_interpolation_step -8,  0, 24
	mon_anim_interpolation_step  0,  0,  0
	.globl gMonAnimTriangleDownData
	.globl gUnknown_85D381E
gMonAnimTriangleDownData:
gUnknown_85D381E: @ 0x085D381E
	mon_anim_offset_step  1,  1, 12
	mon_anim_offset_step -2,  0, 12
	mon_anim_offset_step  1, -1, 12
	mon_anim_offset_step  0,  0,  0
	.2byte 0 @ alignment

gBackAnimYellowFlashFastSteps: @ 0x085D382C
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   2
	back_anim_yellow_flash_step FALSE, 15
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE, 15
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE, 15
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step FALSE, -1

gBackAnimYellowFlashNormalSteps: @ 0x085D387C
	back_anim_yellow_flash_step FALSE,  5
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE, 15
	back_anim_yellow_flash_step TRUE,   4
	back_anim_yellow_flash_step FALSE,  2
	back_anim_yellow_flash_step TRUE,   2
	back_anim_yellow_flash_step FALSE,  2
	back_anim_yellow_flash_step TRUE,   2
	back_anim_yellow_flash_step FALSE,  2
	back_anim_yellow_flash_step TRUE,   2
	back_anim_yellow_flash_step FALSE,  2
	back_anim_yellow_flash_step TRUE,   2
	back_anim_yellow_flash_step FALSE,  2
	back_anim_yellow_flash_step FALSE, -1

gBackAnimYellowFlashSlowSteps: @ 0x085D38B4
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE, 20
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE, 20
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE, 20
	back_anim_yellow_flash_step TRUE,   1
	back_anim_yellow_flash_step FALSE,  1
	back_anim_yellow_flash_step FALSE, -1

	.globl gBackAnimYellowFlashStepTables
	.globl gUnknown_85D38DC
gBackAnimYellowFlashStepTables:
gUnknown_85D38DC: @ 0x085D38DC
	.4byte gBackAnimYellowFlashFastSteps
	.4byte gBackAnimYellowFlashNormalSteps
	.4byte gBackAnimYellowFlashSlowSteps
	.globl gBackAnimBlendColors
	.globl gUnknown_85D38E8
gBackAnimBlendColors:
gUnknown_85D38E8: @ 0x085D38E8
	.2byte MON_ANIM_BLEND_RED
	.2byte MON_ANIM_BLEND_GREEN
	.2byte MON_ANIM_BLEND_BLUE
	.2byte MON_ANIM_BLEND_BLACK
	.globl gRecordedOpponentBufferCommands
	.globl gUnknown_85D38F0
gRecordedOpponentBufferCommands:
gUnknown_85D38F0: @ 0x085D38F0
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_GETMONDATA, RecordedOpponentHandleGetMonData
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_GETRAWMONDATA, RecordedOpponentHandleGetRawMonData
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_SETMONDATA, RecordedOpponentHandleSetMonData
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_SETRAWMONDATA, RecordedOpponentHandleSetRawMonData
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_LOADMONSPRITE, RecordedOpponentHandleLoadMonSprite
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_SWITCHINANIM, RecordedOpponentHandleSwitchInAnim
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_RETURNMONTOBALL, RecordedOpponentHandleReturnMonToBall
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_DRAWTRAINERPIC, RecordedOpponentHandleDrawTrainerPic
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_TRAINERSLIDE, RecordedOpponentHandleTrainerSlide
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_TRAINERSLIDEBACK, RecordedOpponentHandleTrainerSlideBack
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_FAINTANIMATION, RecordedOpponentHandleFaintAnimation
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PALETTEFADE, RecordedOpponentHandlePaletteFade
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_SUCCESSBALLTHROWANIM, RecordedOpponentHandleSuccessBallThrowAnim
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_BALLTHROWANIM, RecordedOpponentHandleBallThrowAnim
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PAUSE, RecordedOpponentHandlePause
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_MOVEANIMATION, RecordedOpponentHandleMoveAnimation
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PRINTSTRING, RecordedOpponentHandlePrintString
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PRINTSTRINGPLAYERONLY, RecordedOpponentHandlePrintSelectionString
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CHOOSEACTION, RecordedOpponentHandleChooseAction
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_YESNOBOX, RecordedOpponentHandleUnknownYesNoBox
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CHOOSEMOVE, RecordedOpponentHandleChooseMove
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_OPENBAG, RecordedOpponentHandleChooseItem
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CHOOSEPOKEMON, RecordedOpponentHandleChoosePokemon
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_23, RecordedOpponentHandleCmd23
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_HEALTHBARUPDATE, RecordedOpponentHandleHealthBarUpdate
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_EXPUPDATE, RecordedOpponentHandleExpUpdate
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_STATUSICONUPDATE, RecordedOpponentHandleStatusIconUpdate
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_STATUSANIMATION, RecordedOpponentHandleStatusAnimation
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_STATUSXOR, RecordedOpponentHandleStatusXor
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_DATATRANSFER, RecordedOpponentHandleDataTransfer
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_DMA3TRANSFER, RecordedOpponentHandleDMA3Transfer
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PLAYBGM, RecordedOpponentHandlePlayBGM
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_32, RecordedOpponentHandleCmd32
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_TWORETURNVALUES, RecordedOpponentHandleTwoReturnValues
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CHOSENMONRETURNVALUE, RecordedOpponentHandleChosenMonReturnValue
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_ONERETURNVALUE, RecordedOpponentHandleOneReturnValue
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_ONERETURNVALUE_DUPLICATE, RecordedOpponentHandleOneReturnValue_Duplicate
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CLEARUNKVAR, RecordedOpponentHandleCmd37
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_SETUNKVAR, RecordedOpponentHandleCmd38
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CLEARUNKFLAG, RecordedOpponentHandleCmd39
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_TOGGLEUNKFLAG, RecordedOpponentHandleCmd40
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_HITANIMATION, RecordedOpponentHandleHitAnimation
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_CANTSWITCH, RecordedOpponentHandleCmd42
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PLAYSE, RecordedOpponentHandlePlaySE
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_PLAYFANFAREORBGM, RecordedOpponentHandlePlayFanfareOrBGM
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_FAINTINGCRY, RecordedOpponentHandleFaintingCry
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_INTROSLIDE, RecordedOpponentHandleIntroSlide
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_INTROTRAINERBALLTHROW, RecordedOpponentHandleIntroTrainerBallThrow
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_DRAWPARTYSTATUSSUMMARY, RecordedOpponentHandleDrawPartyStatusSummary
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_HIDEPARTYSTATUSSUMMARY, RecordedOpponentHandleHidePartyStatusSummary
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_ENDBOUNCE, RecordedOpponentHandleEndBounceEffect
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_SPRITEINVISIBILITY, RecordedOpponentHandleSpriteInvisibility
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_BATTLEANIMATION, RecordedOpponentHandleBattleAnimation
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_LINKSTANDBYMSG, RecordedOpponentHandleLinkStandbyMsg
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_RESETACTIONMOVESELECTION, RecordedOpponentHandleResetActionMoveSelection
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_ENDLINKBATTLE, RecordedOpponentHandleCmd55
	battle_controller_command gRecordedOpponentBufferCommands, CONTROLLER_TERMINATOR_NOP, RecordedOpponentCmdEnd
	.if (. - gRecordedOpponentBufferCommands) != (CONTROLLER_CMDS_COUNT * 4)
	.error "Recorded opponent command table has the wrong size"
	.endif
	.globl gRecordedPlayerBufferCommands
	.globl gUnknown_85D39D4
gRecordedPlayerBufferCommands:
gUnknown_85D39D4: @ 0x085D39D4
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_GETMONDATA, RecordedPlayerHandleGetMonData
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_GETRAWMONDATA, RecordedPlayerHandleSuccessBallThrowAnim
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_SETMONDATA, RecordedPlayerHandleSetMonData
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_SETRAWMONDATA, RecordedPlayerHandleSetRawMonData
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_LOADMONSPRITE, RecordedPlayerHandleLoadMonSprite
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_SWITCHINANIM, RecordedPlayerHandleSwitchInAnim
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_RETURNMONTOBALL, RecordedPlayerHandleReturnMonToBall
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_DRAWTRAINERPIC, RecordedPlayerHandleDrawTrainerPic
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_TRAINERSLIDE, RecordedPlayerHandleTrainerSlide
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_TRAINERSLIDEBACK, RecordedPlayerHandleTrainerSlideBack
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_FAINTANIMATION, RecordedPlayerHandleFaintAnimation
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PALETTEFADE, RecordedPlayerHandlePaletteFade
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_SUCCESSBALLTHROWANIM, RecordedPlayerHandleTwoReturnValues
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_BALLTHROWANIM, RecordedPlayerHandleChoosePokemon
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PAUSE, RecordedPlayerHandlePause
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_MOVEANIMATION, RecordedPlayerHandleMoveAnimation
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PRINTSTRING, RecordedPlayerHandlePrintString
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PRINTSTRINGPLAYERONLY, RecordedPlayerHandlePrintSelectionString
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CHOOSEACTION, RecordedPlayerHandleChooseAction
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_YESNOBOX, RecordedPlayerHandleUnknownYesNoBox
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CHOOSEMOVE, RecordedPlayerHandleChooseMove
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_OPENBAG, RecordedPlayerHandleChooseItem
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CHOOSEPOKEMON, RecordedPlayerHandlePlaySE
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_23, RecordedPlayerHandleCmd23
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_HEALTHBARUPDATE, RecordedPlayerHandleHealthBarUpdate
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_EXPUPDATE, RecordedPlayerHandleExpUpdate
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_STATUSICONUPDATE, RecordedPlayerHandleStatusIconUpdate
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_STATUSANIMATION, RecordedPlayerHandleStatusAnimation
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_STATUSXOR, RecordedPlayerHandleStatusXor
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_DATATRANSFER, RecordedPlayerHandleDataTransfer
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_DMA3TRANSFER, RecordedPlayerHandleDMA3Transfer
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PLAYBGM, RecordedPlayerHandlePlayBGM
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_32, RecordedPlayerHandleCmd32
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_TWORETURNVALUES, sub_0818C53C
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CHOSENMONRETURNVALUE, sub_0818C548
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_ONERETURNVALUE, sub_0818C554
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_ONERETURNVALUE_DUPLICATE, RecordedPlayerHandleOneReturnValue_Duplicate
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CLEARUNKVAR, RecordedPlayerHandleCmd37
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_SETUNKVAR, RecordedPlayerHandleCmd38
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CLEARUNKFLAG, RecordedPlayerHandleCmd39
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_TOGGLEUNKFLAG, RecordedPlayerHandleCmd40
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_HITANIMATION, sub_0818C600
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_CANTSWITCH, RecordedPlayerHandleCmd42
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PLAYSE, sub_0818C67C
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_PLAYFANFAREORBGM, RecordedPlayerHandlePlayFanfareOrBGM
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_FAINTINGCRY, RecordedPlayerHandleFaintingCry
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_INTROSLIDE, RecordedPlayerHandleIntroSlide
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_INTROTRAINERBALLTHROW, RecordedPlayerHandleIntroTrainerBallThrow
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_DRAWPARTYSTATUSSUMMARY, RecordedPlayerHandleDrawPartyStatusSummary
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_HIDEPARTYSTATUSSUMMARY, RecordedPlayerHandleHidePartyStatusSummary
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_ENDBOUNCE, RecordedPlayerHandleEndBounceEffect
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_SPRITEINVISIBILITY, RecordedPlayerHandleSpriteInvisibility
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_BATTLEANIMATION, RecordedPlayerHandleBattleAnimation
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_LINKSTANDBYMSG, RecordedPlayerHandleLinkStandbyMsg
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_RESETACTIONMOVESELECTION, RecordedPlayerHandleResetActionMoveSelection
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_ENDLINKBATTLE, RecordedPlayerHandleCmd55
	battle_controller_command gRecordedPlayerBufferCommands, CONTROLLER_TERMINATOR_NOP, RecordedPlayerCmdEnd
	.if (. - gRecordedPlayerBufferCommands) != (CONTROLLER_CMDS_COUNT * 4)
	.error "Recorded player command table has the wrong size"
	.endif
	.globl gDummyPicData
	.globl gUnknown_85D3AB8
gDummyPicData:
gUnknown_85D3AB8: @ 0x085D3AB8
	.4byte NULL @ frames
	.4byte NULL @ images
	.2byte 0 @ palette tag
	.byte 0 @ sprite ID
	.byte FALSE @ active
	.globl gPicSpriteOamDataNormal
	.globl gUnknown_85D3AC4
gPicSpriteOamDataNormal:
gUnknown_85D3AC4: @ 0x085D3AC4
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0
	.globl gPicSpriteOamDataAffine
	.globl gUnknown_85D3ACC
gPicSpriteOamDataAffine:
gUnknown_85D3ACC: @ 0x085D3ACC
	rodata_sprite_oam_data 0, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0
	.globl gContestLadyMonGfxIds
	.globl gUnknown_85D3AD4
gContestLadyMonGfxIds:
gUnknown_85D3AD4: @ 0x085D3AD4
	.2byte 98  @ CONTEST_COOL
	.2byte 203 @ CONTEST_BEAUTY
	.2byte 220 @ CONTEST_CUTE
	.2byte 204 @ CONTEST_SMART
	.2byte 209 @ CONTEST_TOUGH
	.globl gLilycoveLadyGfxIds
	.globl gUnknown_85D3ADE
gLilycoveLadyGfxIds:
gUnknown_85D3ADE: @ 0x085D3ADE
	.2byte 26 @ Quiz Lady
	.2byte 20 @ Favor Lady
	.2byte 10 @ Contest Lady
	.globl gQuizLadyQuestions
	.globl gQuizLadyQuestion0
	.globl gUnknownEasyChatWordList_5D3AE4
	.globl gUnknown_85D3AE4
gQuizLadyQuestions:
gQuizLadyQuestion0:
gUnknownEasyChatWordList_5D3AE4:
gUnknown_85D3AE4: @ 0x085D3AE4
	quiz_lady_question 0, 0x0602, 0x1413, 0x020E, 0x0E1D, 0x1E1F, 0x0C03, 0x2A70, 0x2ADA, 0x013A
	.globl gQuizLadyQuestion1
gQuizLadyQuestion1: @ 0x085D3AF6
	quiz_lady_question 1, 0x0170, 0x0E1D, 0x1E21, 0x020E, 0x0E08, 0x0204, 0x1628, 0x0C03, 0xFFFF
	.globl gQuizLadyQuestion2
gQuizLadyQuestion2:
gUnknownEasyChatWordList_5D3B08: @ 0x085D3B08
	quiz_lady_question 2, 0x0209, 0x0204, 0x1628, 0x020E, 0x1E1F, 0x0C03, 0x017F, 0x2A43, 0x016D
	.globl gQuizLadyQuestion3
gQuizLadyQuestion3: @ 0x085D3B1A
	quiz_lady_question 3, 0x1E28, 0x160A, 0x0E2B, 0x1425, 0x103C, 0x0E1D, 0x1E24, 0x0C03, 0xFFFF
	@ Compatibility alias into packed word 0x1E24; this is not standalone text.
	.globl gText_Rom_5D3B27
	.set gText_Rom_5D3B27, gQuizLadyQuestion3 + 13
	.globl gQuizLadyQuestion4
	.globl gUnknown_85D3B2C
gQuizLadyQuestion4:
gUnknown_85D3B2C: @ 0x085D3B2C
	quiz_lady_question 4, 0x1644, 0x0E0C, 0x162D, 0x0E0A, 0x1413, 0x1428, 0x0E1D, 0x1E22, 0x0C03
	.globl gQuizLadyQuestion5
gQuizLadyQuestion5: @ 0x085D3B3E
	quiz_lady_question 5, 0x2461, 0x1410, 0x0A35, 0x1034, 0x180D, 0x0E1D, 0x1E21, 0x180D, 0x0C03
	.globl gQuizLadyQuestion6
gQuizLadyQuestion6: @ 0x085D3B50
	quiz_lady_question 6, 0x140D, 0x1C1D, 0x140F, 0x140F, 0x1C1D, 0x140D, 0x0E1D, 0x1E24, 0x0C03
	.globl gQuizLadyQuestion7
gQuizLadyQuestion7: @ 0x085D3B62
	quiz_lady_question 7, 0x042F, 0x1034, 0x0A0E, 0x1034, 0x1643, 0x140F, 0x181B, 0x0E1D, 0x0C03
	.globl gQuizLadyQuestion8
gQuizLadyQuestion8: @ 0x085D3B74
	quiz_lady_question 8, 0x160A, 0x161B, 0x1E1C, 0x0E1F, 0x0A25, 0x0609, 0x102B, 0x0E1D, 0x0C03
	.globl gQuizLadyQuestion9
gQuizLadyQuestion9: @ 0x085D3B86
	quiz_lady_question 9, 0x2204, 0x2206, 0x0E1D, 0x1E21, 0x0A35, 0x0C03, 0x0A11, 0x0A0E, 0x0A09
	.globl gQuizLadyQuestion10
gQuizLadyQuestion10: @ 0x085D3B98
	quiz_lady_question 10, 0x0602, 0x1425, 0x020E, 0x0E1D, 0x1E1F, 0x0C03, 0x0118, 0x0115, 0x011B
	.globl gQuizLadyQuestion11
gQuizLadyQuestion11: @ 0x085D3BAA
	quiz_lady_question 11, 0x0211, 0x020C, 0x0E16, 0x1630, 0x020E, 0x1E1C, 0x0C03, 0x017C, 0x017B
	.globl gQuizLadyQuestion12
gQuizLadyQuestion12: @ 0x085D3BBC
	quiz_lady_question 12, 0x0203, 0x020C, 0x100B, 0x162F, 0x020E, 0x1E1C, 0x0C03, 0x0127, 0x012A
	.globl gQuizLadyQuestion13
gQuizLadyQuestion13: @ 0x085D3BCE
	quiz_lady_question 13, 0x0A3B, 0x0446, 0x0600, 0x1405, 0x1034, 0x1E1C, 0x0C03, 0x0420, 0x0426
	.globl gQuizLadyQuestion14
gQuizLadyQuestion14: @ 0x085D3BE0
	quiz_lady_question 14, 0x0A49, 0x0400, 0x0600, 0x1444, 0x1034, 0x1E1C, 0x0C03, 0x040E, 0x0410
	.globl gQuizLadyQuestion15
gQuizLadyQuestion15: @ 0x085D3BF2
	quiz_lady_question 15, 0x272C, 0x162E, 0x020E, 0x1E1F, 0x1011, 0x0C03, 0x0146, 0x014C, 0x2A1B
	.globl gQuizLadyQuestionPointers
	.globl gUnknown_85D3C04
gQuizLadyQuestionPointers:
gUnknown_85D3C04: @ 0x085D3C04
	quiz_lady_question_pointer 0, gQuizLadyQuestion0
	quiz_lady_question_pointer 1, gQuizLadyQuestion1
	quiz_lady_question_pointer 2, gQuizLadyQuestion2
	quiz_lady_question_pointer 3, gQuizLadyQuestion3
	quiz_lady_question_pointer 4, gQuizLadyQuestion4
	quiz_lady_question_pointer 5, gQuizLadyQuestion5
	quiz_lady_question_pointer 6, gQuizLadyQuestion6
	quiz_lady_question_pointer 7, gQuizLadyQuestion7
	quiz_lady_question_pointer 8, gQuizLadyQuestion8
	quiz_lady_question_pointer 9, gQuizLadyQuestion9
	quiz_lady_question_pointer 10, gQuizLadyQuestion10
	quiz_lady_question_pointer 11, gQuizLadyQuestion11
	quiz_lady_question_pointer 12, gQuizLadyQuestion12
	quiz_lady_question_pointer 13, gQuizLadyQuestion13
	quiz_lady_question_pointer 14, gQuizLadyQuestion14
	quiz_lady_question_pointer 15, gQuizLadyQuestion15
	.globl gQuizLadyAnswers
	.globl gUnknown_85D3C44
gQuizLadyAnswers:
gUnknown_85D3C44: @ 0x085D3C44
	.2byte 0x013A, 0x016F, 0x2A43, 0x1802
	.2byte 0x262D, 0x1814, 0x2202, 0x1A01
	.2byte 0x1C13, 0x0A09, 0x0115, 0x017C
	.2byte 0x012A, 0x0420, 0x0410, 0x0146
	.globl gQuizLadyPrizes
	.globl gUnknown_85D3C64
gQuizLadyPrizes:
gUnknown_85D3C64: @ 0x085D3C64
	.2byte ITEM_GLITTER_MAIL, ITEM_BEAD_MAIL, ITEM_TROPIC_MAIL
	.2byte ITEM_MAX_ETHER, ITEM_MAX_ETHER, ITEM_MAX_ETHER
	.2byte ITEM_WATMEL_BERRY, ITEM_BELUE_BERRY, ITEM_DURIN_BERRY
	.2byte ITEM_LUXURY_BALL, ITEM_TM15, ITEM_BIG_PEARL, ITEM_STAR_PIECE
	.2byte ITEM_RARE_CANDY, ITEM_RARE_CANDY, ITEM_PREMIER_BALL

	.globl gText_LilycoveLady_Smooth
	.globl gText_FavorLady_Smooth
gText_FavorLady_Smooth:
gText_LilycoveLady_Smooth: @ 0x085D3C84
	.string "すべすべ$"
	.globl gText_LilycoveLady_Round
	.globl gText_FavorLady_Round
gText_FavorLady_Round:
gText_LilycoveLady_Round: @ 0x085D3C89
	.string "まるまる$"

	.globl gText_FavorLady_Crackly
	.globl gText_Rom_5D3C8E
gText_FavorLady_Crackly:
gText_Rom_5D3C8E: @ 0x085D3C8E
	.string "バキバキ$"
	.globl gText_FavorLady_Shiny
gText_FavorLady_Shiny: @ 0x085D3C93
	.string "ピカピカ$"
	.globl gText_FavorLady_Sticky
gText_FavorLady_Sticky: @ 0x085D3C98
	.string "ねばねば$"
	.globl gText_FavorLady_Prickly
gText_FavorLady_Prickly: @ 0x085D3C9D
	.string "ちくちく$"
	.align 2, 0
	.globl gFavorLadyRequestTextPointers
	.globl gUnknown_85D3CA4
gFavorLadyRequestTextPointers:
gUnknown_85D3CA4: @ 0x085D3CA4
	.4byte gText_FavorLady_Smooth
	.4byte gText_FavorLady_Round
	.4byte gText_FavorLady_Crackly
	.4byte gText_FavorLady_Shiny
	.4byte gText_FavorLady_Sticky
	.4byte gText_FavorLady_Prickly

	.globl gFavorLadyAcceptedItems_Smooth
gFavorLadyAcceptedItems_Smooth: @ 0x085D3CBC
	.2byte ITEM_REPEL, ITEM_SUPER_REPEL, ITEM_MAX_REPEL
	.2byte ITEM_ANTIDOTE, ITEM_PARALYZE_HEAL, ITEM_BURN_HEAL
	.2byte ITEM_BELUE_BERRY, ITEM_AWAKENING, ITEM_ICE_HEAL
	.2byte ITEM_REVIVE, ITEM_MAX_REVIVE, ITEM_ENERGY_POWDER
	.2byte ITEM_NONE
	.globl gFavorLadyAcceptedItems_Round
gFavorLadyAcceptedItems_Round: @ 0x085D3CD6
	.2byte ITEM_FLUFFY_TAIL, ITEM_PEARL, ITEM_BIG_PEARL
	.2byte ITEM_HARD_STONE, ITEM_SMOKE_BALL, ITEM_SHOAL_SHELL
	.2byte ITEM_TINY_MUSHROOM, ITEM_BIG_MUSHROOM
	.2byte ITEM_PECHA_BERRY, ITEM_ASPEAR_BERRY, ITEM_ORAN_BERRY
	.2byte ITEM_GREPA_BERRY, ITEM_MAGOST_BERRY, ITEM_WATMEL_BERRY
	.2byte ITEM_POKE_BALL, ITEM_ULTRA_BALL, ITEM_NONE
	.globl gFavorLadyAcceptedItems_Crackly
gFavorLadyAcceptedItems_Crackly: @ 0x085D3CF8
	.2byte ITEM_REVIVAL_HERB, ITEM_POTION
	.2byte ITEM_FRESH_WATER, ITEM_SODA_POP, ITEM_LEMONADE
	.2byte ITEM_HARD_STONE, ITEM_LIGHT_BALL, ITEM_LAVA_COOKIE
	.2byte ITEM_CHESTO_BERRY, ITEM_NANAB_BERRY, ITEM_WEPEAR_BERRY
	.2byte ITEM_KELPSY_BERRY, ITEM_NOMEL_BERRY, ITEM_DURIN_BERRY
	.2byte ITEM_NONE
	.globl gFavorLadyAcceptedItems_Shiny
gFavorLadyAcceptedItems_Shiny: @ 0x085D3D16
	.2byte ITEM_HEAL_POWDER, ITEM_X_SPEED, ITEM_X_ATTACK, ITEM_X_DEFEND
	.2byte ITEM_BLUE_FLUTE, ITEM_YELLOW_FLUTE, ITEM_RED_FLUTE
	.2byte ITEM_BLACK_FLUTE, ITEM_WHITE_FLUTE, ITEM_NUGGET
	.2byte ITEM_SUN_STONE, ITEM_STARDUST, ITEM_STAR_PIECE
	.2byte ITEM_PEARL, ITEM_BIG_PEARL, ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER, ITEM_BRIGHT_POWDER
	.2byte ITEM_LUXURY_BALL, ITEM_PREMIER_BALL, ITEM_NONE
	.globl gFavorLadyAcceptedItems_Sticky
gFavorLadyAcceptedItems_Sticky: @ 0x085D3D40
	.2byte ITEM_ENERGY_ROOT, ITEM_FULL_RESTORE, ITEM_MAX_POTION
	.2byte ITEM_DIRE_HIT, ITEM_X_ACCURACY, ITEM_GUARD_SPEC
	.2byte ITEM_WATMEL_BERRY, ITEM_LEFTOVERS
	.2byte ITEM_TINY_MUSHROOM, ITEM_HEART_SCALE, ITEM_NONE
	.globl gFavorLadyAcceptedItems_Prickly
gFavorLadyAcceptedItems_Prickly: @ 0x085D3D56
	.2byte ITEM_QUICK_CLAW, ITEM_POISON_BARB, ITEM_SHARP_BEAK
	.2byte ITEM_DRAGON_FANG, ITEM_TAMATO_BERRY, ITEM_DURIN_BERRY
	.2byte ITEM_PETAYA_BERRY, ITEM_SALAC_BERRY
	.2byte ITEM_STARDUST, ITEM_STAR_PIECE, ITEM_NONE
	.globl gFavorLadyAcceptedItemListPointers
	.globl gUnknown_85D3D6C
gFavorLadyAcceptedItemListPointers:
gUnknown_85D3D6C: @ 0x085D3D6C
	.4byte gFavorLadyAcceptedItems_Smooth
	.4byte gFavorLadyAcceptedItems_Round
	.4byte gFavorLadyAcceptedItems_Crackly
	.4byte gFavorLadyAcceptedItems_Shiny
	.4byte gFavorLadyAcceptedItems_Sticky
	.4byte gFavorLadyAcceptedItems_Prickly
	.globl gFavorLadyPrizes
	.globl gUnknown_85D3D84
gFavorLadyPrizes:
gUnknown_85D3D84: @ 0x085D3D84
	.2byte ITEM_LUXURY_BALL, ITEM_NUGGET, ITEM_PROTEIN
	.2byte ITEM_HEART_SCALE, ITEM_RARE_CANDY, ITEM_PP_MAX
	.globl gUnknown_85D3D90
gUnknown_85D3D90: @ 0x085D3D90

	@ asm/lilycove_lady.s:947 sub_0818DDA4
	.globl gText_QuizLadyDefaultAnswer
	.globl gText_Rom_5D3D90
gText_QuizLadyDefaultAnswer:
gText_Rom_5D3D90: @ 0x085D3D90
	.string "おねえ$"
	.if (. - gText_Rom_5D3D90) > 0x4
	.error "gText_Rom_5D3D90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D90) < 0x4
	.space 0x4 - (. - gText_Rom_5D3D90)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cool
	.globl gText_Rom_5D3D94
gText_ContestLadyMonName_Cool:
gText_Rom_5D3D94: @ 0x085D3D94
	.string "ハンサム$"
	.if (. - gText_Rom_5D3D94) > 0x5
	.error "gText_Rom_5D3D94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D94) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D94)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Beauty
	.globl gText_Rom_5D3D99
gText_ContestLadyMonName_Beauty:
gText_Rom_5D3D99: @ 0x085D3D99
	.string "ジョバンニ$"
	.if (. - gText_Rom_5D3D99) > 0x6
	.error "gText_Rom_5D3D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D99) < 0x6
	.space 0x6 - (. - gText_Rom_5D3D99)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cute
	.globl gText_Rom_5D3D9F
gText_ContestLadyMonName_Cute:
gText_Rom_5D3D9F: @ 0x085D3D9F
	.string "もあもあ$"
	.if (. - gText_Rom_5D3D9F) > 0x5
	.error "gText_Rom_5D3D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D9F) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D9F)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Smart
	.globl gText_Rom_5D3DA4
gText_ContestLadyMonName_Smart:
gText_Rom_5D3DA4: @ 0x085D3DA4
	.string "てつ$"
	.if (. - gText_Rom_5D3DA4) > 0x3
	.error "gText_Rom_5D3DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA4) < 0x3
	.space 0x3 - (. - gText_Rom_5D3DA4)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Tough
	.globl gText_Rom_5D3DA7
gText_ContestLadyMonName_Tough:
gText_Rom_5D3DA7: @ 0x085D3DA7
	.string "きんにくん$"
	.if (. - gText_Rom_5D3DA7) > 0x6
	.error "gText_Rom_5D3DA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA7) < 0x6
	.space 0x6 - (. - gText_Rom_5D3DA7)
	.endif
	.align 2, 0
	.globl gContestLadyMonNamePointers
	.globl gUnknown_85D3DB0
gContestLadyMonNamePointers:
gUnknown_85D3DB0: @ 0x085D3DB0
	.4byte gText_ContestLadyMonName_Cool
	.4byte gText_ContestLadyMonName_Beauty
	.4byte gText_ContestLadyMonName_Cute
	.4byte gText_ContestLadyMonName_Smart
	.4byte gText_ContestLadyMonName_Tough

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cool
	.globl gText_Rom_5D3DC4
gText_ContestLadyCategory_Cool:
gText_Rom_5D3DC4: @ 0x085D3DC4
	.string "かっこよ$"
	.if (. - gText_Rom_5D3DC4) > 0x5
	.error "gText_Rom_5D3DC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC4) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC4)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Beauty
	.globl gText_Rom_5D3DC9
gText_ContestLadyCategory_Beauty:
gText_Rom_5D3DC9: @ 0x085D3DC9
	.string "うつくし$"
	.if (. - gText_Rom_5D3DC9) > 0x5
	.error "gText_Rom_5D3DC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC9) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC9)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cute
	.globl gText_Rom_5D3DCE
gText_ContestLadyCategory_Cute:
gText_Rom_5D3DCE: @ 0x085D3DCE
	.string "かわい$"
	.if (. - gText_Rom_5D3DCE) > 0x4
	.error "gText_Rom_5D3DCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DCE) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DCE)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Smart
	.globl gText_Rom_5D3DD2
gText_ContestLadyCategory_Smart:
gText_Rom_5D3DD2: @ 0x085D3DD2
	.string "かしこ$"
	.if (. - gText_Rom_5D3DD2) > 0x4
	.error "gText_Rom_5D3DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD2) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DD2)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Tough
	.globl gText_Rom_5D3DD6
gText_ContestLadyCategory_Tough:
gText_Rom_5D3DD6: @ 0x085D3DD6
	.string "たくまし$"
	.if (. - gText_Rom_5D3DD6) > 0x5
	.error "gText_Rom_5D3DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD6) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DD6)
	.endif
	.align 2, 0
	.globl gContestLadyCategoryTextPointers
	.globl gUnknown_85D3DDC
gContestLadyCategoryTextPointers:
gUnknown_85D3DDC: @ 0x085D3DDC
	.4byte gText_ContestLadyCategory_Cool
	.4byte gText_ContestLadyCategory_Beauty
	.4byte gText_ContestLadyCategory_Cute
	.4byte gText_ContestLadyCategory_Smart
	.4byte gText_ContestLadyCategory_Tough
	.globl gContestLadyMonSpecies
	.globl gUnknown_85D3DF0
gContestLadyMonSpecies:
gUnknown_85D3DF0: @ 0x085D3DF0
	.2byte SPECIES_ZIGZAGOON @ CONTEST_COOL
	.2byte SPECIES_SKITTY    @ CONTEST_BEAUTY
	.2byte SPECIES_POOCHYENA @ CONTEST_CUTE
	.2byte SPECIES_KECLEON   @ CONTEST_SMART
	.2byte SPECIES_PIKACHU   @ CONTEST_TOUGH
	.2byte SPECIES_NONE      @ padding
	.globl gBattleDomeMovePoints
	.globl gUnknown_85D3DFC
gBattleDomeMovePoints:
gUnknown_85D3DFC: @ 0x085D3DFC
	.include "data/battle_dome_move_points.inc"
	.globl gBattleDomeStyleThresholds
	.globl gUnknown_85D542C
gBattleDomeStyleThresholds:
gUnknown_85D542C: @ 0x085D542C
	battle_dome_style_threshold DOME_BATTLE_STYLE_RISKY,           0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STALL,           0, 0, 0, 0, 2, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_VARIED,          1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_COMBO_HIGH,      3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_RARE_MOVES,      0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_RARE_MOVE,       0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_HP,              0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STORE_POWER,     0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ENFEEBLE_LOW,    0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_LUCK,            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_REGAL,           0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_LOW_PP,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STATUS_ATK,      0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ENDURE,          0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STATUS,          0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STRAIGHTFORWARD, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_AGGRESSIVE,      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_DEF,             0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ENFEEBLE_HIGH,   0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_POPULAR_POWER,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_COMBO_LOW,       2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ACCURATE,        0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_POWERFUL,        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ATK_OVER_DEF,    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_DEF_OVER_ATK,    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_POPULAR_STRONG,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 4, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_EFFECTS,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4
	battle_dome_style_threshold DOME_BATTLE_STYLE_BALANCED,        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_UNUSED1,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_UNUSED2,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_UNUSED3,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

	.globl gBattleDomeUnusedArray
gBattleDomeUnusedArray: @ 0x085D561C
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0
	.byte 0, 0, 3, 0, 0, 0, 0, 0, 3, 2, 0, 0, 0, 0, 0, 2
	.byte 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0
	.byte 0, 2, 253, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 253, 0
	.byte 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 253, 254, 0, 0, 0, 0
	.byte 0, 254, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 254, 0, 0
	.byte 0, 0, 0, 254, 0, 0, 0, 0, 0
	.globl gBattleDomeTourneyTreeCursorMovementMap
	.globl gUnknown_85D5695
gBattleDomeTourneyTreeCursorMovementMap:
gUnknown_85D5695: @ 0x085D5695
	battle_dome_cursor_moves 0,  7, 1, 8, 16,  7, 1, 8, 16,  7, 1, 8, 16,  7, 1, 8, 16,  7, 1, 8, 16
	battle_dome_cursor_moves 1,  0, 2, 9, 16,  0, 2, 9, 16,  0, 2, 9, 16,  0, 2, 9, 16,  0, 2, 9, 16
	battle_dome_cursor_moves 2,  1, 3, 10, 17,  1, 3, 10, 17,  1, 3, 10, 17,  1, 3, 10, 17,  1, 3, 10, 17
	battle_dome_cursor_moves 3,  2, 4, 11, 17,  2, 4, 11, 17,  2, 4, 11, 17,  2, 4, 11, 17,  2, 4, 11, 17
	battle_dome_cursor_moves 4,  3, 5, 12, 18,  3, 5, 12, 18,  3, 5, 12, 18,  3, 5, 12, 18,  3, 5, 12, 18
	battle_dome_cursor_moves 5,  4, 6, 13, 18,  4, 6, 13, 18,  4, 6, 13, 18,  4, 6, 13, 18,  4, 6, 13, 18
	battle_dome_cursor_moves 6,  5, 7, 14, 19,  5, 7, 14, 19,  5, 7, 14, 19,  5, 7, 14, 19,  5, 7, 14, 19
	battle_dome_cursor_moves 7,  6, 0, 15, 19,  6, 0, 15, 19,  6, 0, 15, 19,  6, 0, 15, 19,  6, 0, 15, 19
	battle_dome_cursor_moves 8,  31, 9, 20, 31,  31, 9, 20, 31,  31, 9, 20, 31,  31, 9, 20, 31,  31, 9, 20, 31
	battle_dome_cursor_moves 9,  8, 10, 20, 1,  8, 10, 20, 1,  8, 10, 20, 1,  8, 10, 20, 1,  8, 10, 20, 1
	battle_dome_cursor_moves 10, 9, 11, 21, 2,  9, 11, 21, 2,  9, 11, 21, 2,  9, 11, 21, 2,  9, 11, 21, 2
	battle_dome_cursor_moves 11, 10, 12, 21, 3,  10, 12, 21, 3,  10, 12, 21, 3,  10, 12, 21, 3,  10, 12, 21, 3
	battle_dome_cursor_moves 12, 11, 13, 22, 4,  11, 13, 22, 4,  11, 13, 22, 4,  11, 13, 22, 4,  11, 13, 22, 4
	battle_dome_cursor_moves 13, 12, 14, 22, 5,  12, 14, 22, 5,  12, 14, 22, 5,  12, 14, 22, 5,  12, 14, 22, 5
	battle_dome_cursor_moves 14, 13, 15, 23, 6,  13, 15, 23, 6,  13, 15, 23, 6,  13, 15, 23, 6,  13, 15, 23, 6
	battle_dome_cursor_moves 15, 14, 31, 23, 7,  14, 31, 23, 7,  14, 31, 23, 7,  14, 31, 23, 7,  14, 31, 23, 7
	battle_dome_cursor_moves 16, 19, 17, 0, 20,  19, 17, 0, 24,  19, 17, 0, 24,  19, 17, 0, 24,  19, 17, 0, 24
	battle_dome_cursor_moves 17, 16, 18, 2, 21,  16, 18, 2, 24,  16, 18, 2, 24,  16, 18, 2, 24,  16, 18, 2, 24
	battle_dome_cursor_moves 18, 17, 19, 4, 22,  17, 19, 4, 25,  17, 19, 4, 25,  17, 19, 4, 25,  17, 19, 4, 25
	battle_dome_cursor_moves 19, 18, 16, 6, 23,  18, 16, 6, 25,  18, 16, 6, 25,  18, 16, 6, 25,  18, 16, 6, 25
	battle_dome_cursor_moves 20, 23, 21, 16, 8,  23, 21, 26, 8,  23, 21, 26, 8,  23, 21, 26, 8,  23, 21, 26, 8
	battle_dome_cursor_moves 21, 20, 22, 17, 10,  20, 22, 26, 10,  20, 22, 26, 10,  20, 22, 26, 10,  20, 22, 26, 10
	battle_dome_cursor_moves 22, 21, 23, 18, 12,  21, 23, 27, 12,  21, 23, 27, 12,  21, 23, 27, 12,  21, 23, 27, 12
	battle_dome_cursor_moves 23, 22, 20, 19, 14,  22, 20, 27, 14,  22, 20, 27, 14,  22, 20, 27, 14,  22, 20, 27, 14
	battle_dome_cursor_moves 24, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  25, 25, 16, 26,  25, 25, 16, 28,  25, 25, 16, 28,  25, 25, 16, 28
	battle_dome_cursor_moves 25, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  24, 24, 18, 27,  24, 24, 18, 28,  24, 24, 18, 28,  24, 24, 18, 28
	battle_dome_cursor_moves 26, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  27, 27, 24, 20,  27, 27, 29, 20,  27, 27, 29, 20,  27, 27, 29, 20
	battle_dome_cursor_moves 27, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  26, 26, 25, 22,  26, 26, 29, 22,  26, 26, 29, 22,  26, 26, 29, 22
	battle_dome_cursor_moves 28, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 24, 29,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 24, 30,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 24, 30
	battle_dome_cursor_moves 29, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 28, 26,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 30, 26,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 30, 26
	battle_dome_cursor_moves 30, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 28, 29,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 28, 29
	battle_dome_cursor_moves TOURNEY_TREE_CLOSE_BUTTON, 15, 8, 8, 0,  15, 8, 8, 0,  15, 8, 8, 0,  15, 8, 8, 0,  15, 8, 8, 0
	.align 2, 0
	.globl gBattleDomeTourneyTreeBgTemplates
	.globl gUnknown_85D5918
gBattleDomeTourneyTreeBgTemplates:
gUnknown_85D5918: @ 0x085D5918
	bg_template 0, 0, 28, 0, 0, 0, 0
	bg_template 1, 1, 29, 0, 0, 1, 0
	bg_template 2, 2, 30, 0, 0, 2, 0
	bg_template 3, 2, 31, 0, 0, 2, 0
	.globl gBattleDomeInfoCardBgTemplates
	.globl gUnknown_85D5928
gBattleDomeInfoCardBgTemplates:
gUnknown_85D5928: @ 0x085D5928
	bg_template 0, 0, 20, 3, 0, 0, 0
	bg_template 1, 1, 24, 3, 0, 0, 0
	bg_template 2, 2, 28, 3, 0, 1, 0
	bg_template 3, 2, 7, 0, 0, 1, 0
	.globl gBattleDomeTourneyTreeWindowTemplates
	.globl gUnknown_85D5938
gBattleDomeTourneyTreeWindowTemplates:
gUnknown_85D5938: @ 0x085D5938
	window_template 0, 0, 3, 8, 16, 15, 0x10  @ names, left
	window_template 0, 22, 3, 8, 16, 15, 0x90 @ names, right
	window_template 0, 8, 1, 14, 2, 15, 0x110 @ title
	null_window_template
	.globl gBattleDomeInfoCardWindowTemplates
	.globl gUnknown_85D5958
gBattleDomeInfoCardWindowTemplates:
gUnknown_85D5958: @ 0x085D5958
	window_template 0, 4, 2, 23, 2, 15, 0x1   @ trainer name
	window_template 0, 16, 5, 8, 2, 15, 0x2F  @ trainer Pokemon 1
	window_template 0, 20, 7, 8, 3, 15, 0x3F  @ trainer Pokemon 2
	window_template 0, 16, 10, 8, 2, 15, 0x57 @ trainer Pokemon 3
	window_template 0, 3, 12, 24, 7, 15, 0x67 @ trainer description
	window_template 0, 6, 2, 26, 2, 15, 0x10F @ match number
	window_template 0, 2, 5, 8, 2, 15, 0x143  @ left trainer name
	window_template 0, 20, 5, 8, 2, 15, 0x153 @ right trainer name
	window_template 0, 3, 16, 24, 2, 15, 0x163 @ winner text
	@ Alternate information-card slot on BG 1.
	window_template 1, 4, 2, 23, 2, 15, 0x1
	window_template 1, 16, 5, 8, 2, 15, 0x2F
	window_template 1, 20, 7, 8, 3, 15, 0x3F
	window_template 1, 16, 10, 8, 2, 15, 0x57
	window_template 1, 3, 12, 24, 7, 15, 0x67
	window_template 1, 6, 2, 26, 2, 15, 0x10F
	window_template 1, 2, 5, 8, 2, 15, 0x143
	window_template 1, 20, 5, 8, 2, 15, 0x153
	window_template 1, 3, 16, 24, 2, 15, 0x163
	null_window_template
	.globl gBattleDomeTourneyTreeScanlineEffectParams
gBattleDomeTourneyTreeScanlineEffectParams: @ 0x085D59F0
	.4byte REG_BG3CNT
	.4byte 1 | ((DMA_ENABLE | DMA_START_HBLANK | DMA_REPEAT | DMA_DEST_RELOAD | DMA_16BIT) << 16)
	.4byte 1 @ initState

	.globl gBattleDomeTourneyTreeButtonSheets
gBattleDomeTourneyTreeButtonSheets: @ 0x085D59FC
	rodata_compressed_sprite_sheet gBattleDomeTourneyTreeButtons_Gfx, 0x400, 0
	rodata_compressed_sprite_sheet NULL, 0, 0

	.globl gBattleDomeTourneyTreeButtonPalettes
gBattleDomeTourneyTreeButtonPalettes: @ 0x085D5A0C
	rodata_sprite_palette gBattleDomeTourneyTreeButtons_Pal, 0
	rodata_sprite_palette NULL, 0

	.globl gBattleDomeTourneyTreePokeballOam
gBattleDomeTourneyTreePokeballOam: @ 0x085D5A1C
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_SQUARE >> 14), 0, 0, (OAM_SIZE_1 >> 30), 0, 0, 0, 0

	.globl gBattleDomeTourneyTreeCloseButtonOam
gBattleDomeTourneyTreeCloseButtonOam: @ 0x085D5A24
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_H_RECTANGLE >> 14), 0, 0, (OAM_SIZE_2 >> 30), 0, 0, 1, 0

	.globl gBattleDomeTourneyTreeVerticalScrollArrowOam
gBattleDomeTourneyTreeVerticalScrollArrowOam: @ 0x085D5A2C
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_H_RECTANGLE >> 14), 0, 0, (OAM_SIZE_0 >> 30), 0, 0, 2, 0

	.globl gBattleDomeTourneyTreeHorizontalScrollArrowOam
gBattleDomeTourneyTreeHorizontalScrollArrowOam: @ 0x085D5A34
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_V_RECTANGLE >> 14), 0, 0, (OAM_SIZE_0 >> 30), 0, 0, 2, 0

	.globl gBattleDomeTourneyTreePokeballAnim0
gBattleDomeTourneyTreePokeballAnim0: @ 0x085D5A3C
	sprite_anim_frame 20, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreePokeballAnim1
gBattleDomeTourneyTreePokeballAnim1: @ 0x085D5A44
	sprite_anim_frame 24, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreePokeballAnims
gBattleDomeTourneyTreePokeballAnims: @ 0x085D5A4C
	sprite_anim_sequence gBattleDomeTourneyTreePokeballAnim0
	sprite_anim_sequence gBattleDomeTourneyTreePokeballAnim1

	.globl gBattleDomeTourneyTreePokeballSpriteTemplate
gBattleDomeTourneyTreePokeballSpriteTemplate: @ 0x085D5A54
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreePokeballOam, gBattleDomeTourneyTreePokeballAnims, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gBattleDomeTourneyTreeCloseButtonAnim0
gBattleDomeTourneyTreeCloseButtonAnim0: @ 0x085D5A6C
	sprite_anim_frame 8, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeCloseButtonAnim1
gBattleDomeTourneyTreeCloseButtonAnim1: @ 0x085D5A74
	sprite_anim_frame 0, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeCloseButtonAnims
gBattleDomeTourneyTreeCloseButtonAnims: @ 0x085D5A7C
	sprite_anim_sequence gBattleDomeTourneyTreeCloseButtonAnim0
	sprite_anim_sequence gBattleDomeTourneyTreeCloseButtonAnim1
	.globl gBattleDomeTourneyTreeCloseButtonSpriteTemplate
gBattleDomeTourneyTreeCloseButtonSpriteTemplate: @ 0x085D5A84
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreeCloseButtonOam, gBattleDomeTourneyTreeCloseButtonAnims, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gBattleDomeTourneyTreeVerticalArrowAnim0
gBattleDomeTourneyTreeVerticalArrowAnim0: @ 0x085D5A9C
	sprite_anim_frame 18, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeVerticalArrowAnim1
gBattleDomeTourneyTreeVerticalArrowAnim1: @ 0x085D5AA4
	sprite_anim_frame_ex 18, 1, 0, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeHorizontalArrowAnim0
gBattleDomeTourneyTreeHorizontalArrowAnim0: @ 0x085D5AAC
	sprite_anim_frame_ex 16, 1, 1, 0
	sprite_anim_end

	.globl gBattleDomeTourneyTreeHorizontalArrowAnim1
gBattleDomeTourneyTreeHorizontalArrowAnim1: @ 0x085D5AB4
	sprite_anim_frame 16, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeVerticalArrowAnims
gBattleDomeTourneyTreeVerticalArrowAnims: @ 0x085D5ABC
	sprite_anim_sequence gBattleDomeTourneyTreeVerticalArrowAnim0
	sprite_anim_sequence gBattleDomeTourneyTreeVerticalArrowAnim1

	.globl gBattleDomeTourneyTreeHorizontalArrowAnims
gBattleDomeTourneyTreeHorizontalArrowAnims: @ 0x085D5AC4
	sprite_anim_sequence gBattleDomeTourneyTreeHorizontalArrowAnim0
	sprite_anim_sequence gBattleDomeTourneyTreeHorizontalArrowAnim1
	.globl gBattleDomeTourneyTreeHorizontalArrowSpriteTemplate
gBattleDomeTourneyTreeHorizontalArrowSpriteTemplate: @ 0x085D5ACC
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreeHorizontalScrollArrowOam, gBattleDomeTourneyTreeHorizontalArrowAnims, NULL, gDummySpriteAffineAnimTable, sub_0819079C

	.globl gBattleDomeTourneyTreeVerticalArrowSpriteTemplate
gBattleDomeTourneyTreeVerticalArrowSpriteTemplate: @ 0x085D5AE4
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreeVerticalScrollArrowOam, gBattleDomeTourneyTreeVerticalArrowAnims, NULL, gDummySpriteAffineAnimTable, sub_081908C8
	@ Maps the 16 first-round tree slots to their tournament trainer IDs.
	.globl gBattleDomeTourneyTreeTrainerIds
gBattleDomeTourneyTreeTrainerIds: @ 0x085D5AFC
	.byte 0, 8, 12, 4, 7, 15, 11, 3
	.byte 2, 10, 14, 6, 5, 13, 9, 1
	.globl gBattleDomeFunctions
gBattleDomeFunctions: @ 0x085D5B0C
	.4byte InitDomeChallenge
	.4byte GetDomeData
	.4byte SetDomeData
	.4byte BufferDomeRoundText
	.4byte BufferDomeOpponentName
	.4byte InitDomeOpponentParty
	.4byte ShowDomeOpponentInfo
	.4byte ShowDomeTourneyTree
	.4byte ShowPreviousDomeResultsTourneyTree
	.4byte SetDomeOpponentId
	.4byte SetDomeOpponentGraphicsId
	.4byte ShowNonInteractiveDomeTourneyTree
	.4byte ResolveDomeRoundWinners
	.4byte sub_0818FF54
	.4byte UpdateDomeStreaks
	.4byte InitDomeFacilityTrainersAndMons
	.4byte RestoreDomePlayerParty
	.4byte RestoreDomePlayerPartyHeldItems
	.4byte GetDomeBrainTrainerPicId
	.4byte GetPlayerSeededBeforeOpponent
	.4byte BufferLastDomeWinnerName
	.4byte sub_08194B58
	.4byte InitDomeTrainers
	.globl gBattleDomeWinStreakFlags
gBattleDomeWinStreakFlags: @ 0x085D5B68
	.4byte STREAK_DOME_SINGLES_50, STREAK_DOME_SINGLES_OPEN
	.4byte STREAK_DOME_DOUBLES_50, STREAK_DOME_DOUBLES_OPEN

	.globl gBattleDomeWinStreakMasks
gBattleDomeWinStreakMasks: @ 0x085D5B78
	.4byte ~STREAK_DOME_SINGLES_50, ~STREAK_DOME_SINGLES_OPEN
	.4byte ~STREAK_DOME_DOUBLES_50, ~STREAK_DOME_DOUBLES_OPEN
	@ Opponent tournament ID for each trainer and round.
	.globl gBattleDomeIdToOpponentId
gBattleDomeIdToOpponentId: @ 0x085D5B88
	.byte  8,  0,  4, 8 @ trainer 0
	.byte  9, 12,  8, 0 @ trainer 1
	.byte 10,  8, 12, 0 @ trainer 2
	.byte 11,  4,  0, 8 @ trainer 3
	.byte 12,  0,  4, 8 @ trainer 4
	.byte 13, 12,  8, 0 @ trainer 5
	.byte 14,  8, 12, 0 @ trainer 6
	.byte 15,  4,  0, 8 @ trainer 7
	.byte  0,  0,  4, 8 @ trainer 8
	.byte  1, 12,  8, 0 @ trainer 9
	.byte  2,  8, 12, 0 @ trainer 10
	.byte  3,  4,  0, 8 @ trainer 11
	.byte  4,  0,  4, 8 @ trainer 12
	.byte  5, 12,  8, 0 @ trainer 13
	.byte  6,  8, 12, 0 @ trainer 14
	.byte  7,  4,  0, 8 @ trainer 15

	@ Tournament tree order with every first-round pair swapped.
	.globl gBattleDomeTourneyTreeTrainerOpponentIds
gBattleDomeTourneyTreeTrainerOpponentIds: @ 0x085D5BC8
	.byte 0, 8, 4, 12, 7, 15, 3, 11
	.byte 2, 10, 6, 14, 5, 13, 1, 9

	@ Match number minus one for each trainer and round.
	.globl gBattleDomeIdToMatchNumber
gBattleDomeIdToMatchNumber: @ 0x085D5BD8
	.byte 0,  8, 12, 14 @ trainers 0-1
	.byte 0,  8, 12, 14
	.byte 1,  8, 12, 14 @ trainers 2-3
	.byte 1,  8, 12, 14
	.byte 2,  9, 12, 14 @ trainers 4-5
	.byte 2,  9, 12, 14
	.byte 3,  9, 12, 14 @ trainers 6-7
	.byte 3,  9, 12, 14
	.byte 4, 10, 13, 14 @ trainers 8-9
	.byte 4, 10, 13, 14
	.byte 5, 10, 13, 14 @ trainers 10-11
	.byte 5, 10, 13, 14
	.byte 6, 11, 13, 14 @ trainers 12-13
	.byte 6, 11, 13, 14
	.byte 7, 11, 13, 14 @ trainers 14-15
	.byte 7, 11, 13, 14
	.globl gBattleDomeLastMatchCardNum
gBattleDomeLastMatchCardNum: @ 0x085D5C18
	.byte 23, 27, 29, 30

	@ Last visible match card for each first-round pair and current round.
	.globl gBattleDomeTrainerAndRoundToLastMatchCardNum
gBattleDomeTrainerAndRoundToLastMatchCardNum: @ 0x085D5C1C
	.byte 16, 24, 28, 30
	.byte 17, 24, 28, 30
	.byte 18, 25, 28, 30
	.byte 19, 25, 28, 30
	.byte 20, 26, 29, 30
	.byte 21, 26, 29, 30
	.byte 22, 27, 29, 30
	.byte 23, 27, 29, 30

	.globl gBattleDomeTournamentIdToPairedTrainerIds
gBattleDomeTournamentIdToPairedTrainerIds: @ 0x085D5C3C
	.byte 0, 15, 8, 7, 3, 12, 11, 4
	.byte 1, 14, 9, 6, 2, 13, 10, 5
	@ Potential-to-win text, highest to lowest, followed by Dome Ace Tucker.
	.globl gBattleDomePotentialTexts
gBattleDomePotentialTexts: @ 0x085D5C4C
	.4byte gText_Rom_273952
	.4byte gText_Rom_27396A
	.4byte gText_Rom_273983
	.4byte gText_Rom_27399B
	.4byte gText_Rom_2739B2
	.4byte gText_Rom_2739C9
	.4byte gText_Rom_2739DF
	.4byte gText_Rom_2739F8
	.4byte gText_Rom_273A0D
	.4byte gText_Rom_273A25
	.4byte gText_Rom_273A3D
	.4byte gText_Rom_273A55
	.4byte gText_Rom_273A6C
	.4byte gText_Rom_273A84
	.4byte gText_Rom_273A9D
	.4byte gText_Rom_273AB3
	.4byte gText_Rom_273AC9
	.globl gBattleDomeOpponentStyleTexts
gBattleDomeOpponentStyleTexts: @ 0x085D5C90
	battle_dome_style_text DOME_BATTLE_STYLE_RISKY,           gText_Rom_273ADD
	battle_dome_style_text DOME_BATTLE_STYLE_STALL,           gText_Rom_273AF6
	battle_dome_style_text DOME_BATTLE_STYLE_VARIED,          gText_Rom_273B0D
	battle_dome_style_text DOME_BATTLE_STYLE_COMBO_HIGH,      gText_Rom_273B26
	battle_dome_style_text DOME_BATTLE_STYLE_RARE_MOVES,      gText_Rom_273B3E
	battle_dome_style_text DOME_BATTLE_STYLE_RARE_MOVE,       gText_Rom_273B56
	battle_dome_style_text DOME_BATTLE_STYLE_HP,              gText_Rom_273B6E
	battle_dome_style_text DOME_BATTLE_STYLE_STORE_POWER,     gText_Rom_273B87
	battle_dome_style_text DOME_BATTLE_STYLE_ENFEEBLE_LOW,    gText_Rom_273BA0
	battle_dome_style_text DOME_BATTLE_STYLE_LUCK,            gText_Rom_273BB5
	battle_dome_style_text DOME_BATTLE_STYLE_REGAL,           gText_Rom_273BCB
	battle_dome_style_text DOME_BATTLE_STYLE_LOW_PP,          gText_Rom_273BE3
	battle_dome_style_text DOME_BATTLE_STYLE_STATUS_ATK,      gText_Rom_273BFA
	battle_dome_style_text DOME_BATTLE_STYLE_ENDURE,          gText_Rom_273C12
	battle_dome_style_text DOME_BATTLE_STYLE_STATUS,          gText_Rom_273C29
	battle_dome_style_text DOME_BATTLE_STYLE_STRAIGHTFORWARD, gText_Rom_273C40
	battle_dome_style_text DOME_BATTLE_STYLE_AGGRESSIVE,      gText_Rom_273C56
	battle_dome_style_text DOME_BATTLE_STYLE_DEF,             gText_Rom_273C6E
	battle_dome_style_text DOME_BATTLE_STYLE_ENFEEBLE_HIGH,   gText_Rom_273C85
	battle_dome_style_text DOME_BATTLE_STYLE_POPULAR_POWER,   gText_Rom_273C9A
	battle_dome_style_text DOME_BATTLE_STYLE_COMBO_LOW,       gText_Rom_273CB0
	battle_dome_style_text DOME_BATTLE_STYLE_ACCURATE,        gText_Rom_273CC7
	battle_dome_style_text DOME_BATTLE_STYLE_POWERFUL,        gText_Rom_273CDE
	battle_dome_style_text DOME_BATTLE_STYLE_ATK_OVER_DEF,    gText_Rom_273CF5
	battle_dome_style_text DOME_BATTLE_STYLE_DEF_OVER_ATK,    gText_Rom_273D0D
	battle_dome_style_text DOME_BATTLE_STYLE_POPULAR_STRONG,  gText_Rom_273D21
	battle_dome_style_text DOME_BATTLE_STYLE_EFFECTS,         gText_Rom_273D38
	battle_dome_style_text DOME_BATTLE_STYLE_BALANCED,        gText_Rom_273D4F
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED1,         gText_Rom_273D67
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED2,         gText_Rom_273D74
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED3,         gText_Rom_273D81
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED4,         gText_Rom_273D8E
	@ Third info-card line: party stat emphasis from EVs and Natures.
	.globl gBattleDomeOpponentStatsTexts
gBattleDomeOpponentStatsTexts: @ 0x085D5D10
	@ Two emphasized stats (DOME_TEXT_TWO_GOOD_STATS).
	.4byte gText_Rom_273D9B
	.4byte gText_Rom_273DB1
	.4byte gText_Rom_273DC7
	.4byte gText_Rom_273DDD
	.4byte gText_Rom_273DF3
	.4byte gText_Rom_273E09
	.4byte gText_Rom_273E21
	.4byte gText_Rom_273E39
	.4byte gText_Rom_273E51
	.4byte gText_Rom_273E69
	.4byte gText_Rom_273E81
	.4byte gText_Rom_273E99
	.4byte gText_Rom_273EB1
	.4byte gText_Rom_273EC9
	.4byte gText_Rom_273EE1
	@ One emphasized stat (DOME_TEXT_ONE_GOOD_STAT).
	.4byte gText_Rom_273EF9
	.4byte gText_Rom_273F09
	.4byte gText_Rom_273F1B
	.4byte gText_Rom_273F2D
	.4byte gText_Rom_273F3F
	.4byte gText_Rom_273F51
	@ Two neglected stats (DOME_TEXT_TWO_BAD_STATS).
	.4byte gText_Rom_273F63
	.4byte gText_Rom_273F7A
	.4byte gText_Rom_273F91
	.4byte gText_Rom_273FA8
	.4byte gText_Rom_273FBF
	.4byte gText_Rom_273FD6
	.4byte gText_Rom_273FEF
	.4byte gText_Rom_274008
	.4byte gText_Rom_274021
	.4byte gText_Rom_27403A
	.4byte gText_Rom_274053
	.4byte gText_Rom_27406C
	.4byte gText_Rom_274085
	.4byte gText_Rom_27409E
	.4byte gText_Rom_2740B7
	@ One neglected stat (DOME_TEXT_ONE_BAD_STAT).
	.4byte gText_Rom_2740D0
	.4byte gText_Rom_2740E2
	.4byte gText_Rom_2740F6
	.4byte gText_Rom_27410A
	.4byte gText_Rom_27411E
	.4byte gText_Rom_274132
	@ DOME_TEXT_WELL_BALANCED.
	.4byte gText_Rom_274146
	.globl gBattleDomeInfoTrainerMonX
gBattleDomeInfoTrainerMonX: @ 0x085D5DBC
	.byte 104, 136, 104

	.globl gBattleDomeInfoTrainerMonY
gBattleDomeInfoTrainerMonY: @ 0x085D5DBF
	.byte 38, 62, 78

	.globl gBattleDomeSpeciesNameTextYCoords
gBattleDomeSpeciesNameTextYCoords: @ 0x085D5DC2
	.byte 1, 5, 1

	.globl gBattleDomeStatTextOffsets
gBattleDomeStatTextOffsets: @ 0x085D5DC5
	.byte DOME_TEXT_HP, DOME_TEXT_ATK, DOME_TEXT_DEF
	.byte DOME_TEXT_SPEED, DOME_TEXT_SPATK
	.align 2, 0
	.globl gBattleDomeMatchNumberTexts
gBattleDomeMatchNumberTexts: @ 0x085D5DCC
	.4byte gText_Rom_2741DA @ Round 1, match 1
	.4byte gText_Rom_2741E8 @ Round 1, match 2
	.4byte gText_Rom_2741F6 @ Round 1, match 3
	.4byte gText_Rom_274204 @ Round 1, match 4
	.4byte gText_Rom_274212 @ Round 1, match 5
	.4byte gText_Rom_274220 @ Round 1, match 6
	.4byte gText_Rom_27422E @ Round 1, match 7
	.4byte gText_Rom_27423C @ Round 1, match 8
	.4byte gText_Rom_27424A @ Round 2, match 1
	.4byte gText_Rom_274258 @ Round 2, match 2
	.4byte gText_Rom_274266 @ Round 2, match 3
	.4byte gText_Rom_274274 @ Round 2, match 4
	.4byte gText_Rom_274282 @ Semifinal, match 1
	.4byte gText_Rom_274292 @ Semifinal, match 2
	.4byte gText_Rom_2742A2 @ Final

	.globl gBattleDomeWinTexts
gBattleDomeWinTexts: @ 0x085D5E08
	.4byte gText_Rom_27415B @ No winner yet
	.4byte gText_Rom_274166 @ Won using a move
	.4byte gText_Rom_274177 @ Became champion using a move
	.4byte gText_Rom_274188 @ Won by default
	.4byte gText_Rom_27419D @ Became champion by default
	.4byte gText_Rom_2741B2 @ Won without using a move
	.4byte gText_Rom_2741C6 @ Became champion without using a move
	.globl gBattleDomeLeftTrainerMonX
gBattleDomeLeftTrainerMonX: @ 0x085D5E24
	.byte 96, 96, 96

	.globl gBattleDomeLeftTrainerMonY
gBattleDomeLeftTrainerMonY: @ 0x085D5E27
	.byte 56, 80, 104

	.globl gBattleDomeRightTrainerMonX
gBattleDomeRightTrainerMonX: @ 0x085D5E2A
	.byte 144, 144, 144

	.globl gBattleDomeRightTrainerMonY
gBattleDomeRightTrainerMonY: @ 0x085D5E2D
	.byte 56, 80, 104

	@ Duplicate of gBattleDomeTourneyTreeTrainerIds.
	.globl gBattleDomeTourneyTreeTrainerIds2
gBattleDomeTourneyTreeTrainerIds2: @ 0x085D5E30
	.byte 0, 8, 12, 4, 7, 15, 11, 3
	.byte 2, 10, 14, 6, 5, 13, 9, 1
	@ Candidate-list offset, candidate count, and round for each match.
	.globl gBattleDomeCompetitorRangeByMatch
gBattleDomeCompetitorRangeByMatch: @ 0x085D5E40
	.byte  0,  2
	.globl gBattleDomeCompetitorRoundByMatch
gBattleDomeCompetitorRoundByMatch: @ 0x085D5E42
	.byte DOME_ROUND1
	.byte  2,  2, DOME_ROUND1
	.byte  4,  2, DOME_ROUND1
	.byte  6,  2, DOME_ROUND1
	.byte  8,  2, DOME_ROUND1
	.byte 10,  2, DOME_ROUND1
	.byte 12,  2, DOME_ROUND1
	.byte 14,  2, DOME_ROUND1
	.byte  0,  4, DOME_ROUND2
	.byte  4,  4, DOME_ROUND2
	.byte  8,  4, DOME_ROUND2
	.byte 12,  4, DOME_ROUND2
	.byte  0,  8, DOME_SEMIFINAL
	.byte  8,  8, DOME_SEMIFINAL
	.byte  0, 16, DOME_FINAL
	@ Window ID and Japanese text Y coordinate for each tournament trainer.
	.globl gBattleDomeTrainerNamePositions
gBattleDomeTrainerNamePositions: @ 0x085D5E6D
	.byte TOURNEYWIN_NAMES_LEFT
	.globl gBattleDomeTrainerNameYCoords
gBattleDomeTrainerNameYCoords: @ 0x085D5E6E
	.byte 0 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 7 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 0 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  7 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  3 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 4 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 3 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  4 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  1 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 6 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 1 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  6 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  2 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 5 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 2 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  5 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	@ Pokeball buttons for 16 trainers followed by 15 matches.
	.globl gBattleDomeTourneyTreePokeballCoords
gBattleDomeTourneyTreePokeballCoords: @ 0x085D5E8D
	.byte  68,  33 @ left-side trainers
	.byte  68,  49
	.byte  68,  65
	.byte  68,  81
	.byte  68,  97
	.byte  68, 113
	.byte  68, 129
	.byte  68, 145
	.byte 172,  33 @ right-side trainers
	.byte 172,  49
	.byte 172,  65
	.byte 172,  81
	.byte 172,  97
	.byte 172, 113
	.byte 172, 129
	.byte 172, 145
	.byte  87,  41 @ left-side round 1 matches
	.byte  87,  73
	.byte  87, 105
	.byte  87, 137
	.byte 153,  41 @ right-side round 1 matches
	.byte 153,  73
	.byte 153, 105
	.byte 153, 137
	.byte  95,  57 @ left-side round 2 matches
	.byte  95, 121
	.byte 145,  57 @ right-side round 2 matches
	.byte 145, 121
	.byte 103,  89 @ left semifinal
	.byte 137,  89 @ right semifinal
	.byte 120,  89 @ final

	.byte 0 @ align struct TourneyTreeLineSection
	.globl gBattleDomeTourneyTreeLineSections
gBattleDomeTourneyTreeLineSections: @ 0x085D5ECC
	.include "data/battle_dome_tourney_tree_line_sections.inc"
	.globl gBattleDomeTourneyTreeLineSectionPointers
	.globl gUnknown_85D678C
gBattleDomeTourneyTreeLineSectionPointers:
gUnknown_85D678C: @ 0x085D678C
	battle_dome_tourney_line_paths 0
	battle_dome_tourney_line_paths 1
	battle_dome_tourney_line_paths 2
	battle_dome_tourney_line_paths 3
	battle_dome_tourney_line_paths 4
	battle_dome_tourney_line_paths 5
	battle_dome_tourney_line_paths 6
	battle_dome_tourney_line_paths 7
	battle_dome_tourney_line_paths 8
	battle_dome_tourney_line_paths 9
	battle_dome_tourney_line_paths 10
	battle_dome_tourney_line_paths 11
	battle_dome_tourney_line_paths 12
	battle_dome_tourney_line_paths 13
	battle_dome_tourney_line_paths 14
	battle_dome_tourney_line_paths 15
	.if (. - gBattleDomeTourneyTreeLineSectionPointers) != (16 * 4 * 4)
	.error "Battle Dome tourney line section pointer table has the wrong size"
	.endif
	.globl gBattleDomeTourneyTreeLineSectionCounts
	.globl gUnknown_85D688C
gBattleDomeTourneyTreeLineSectionCounts:
gUnknown_85D688C: @ 0x085D688C
	.rept 16
	.byte 4, 7, 11, 13
	.endr
	.if (. - gBattleDomeTourneyTreeLineSectionCounts) != (16 * 4)
	.error "Battle Dome tourney line section count table has the wrong size"
	.endif
	.globl gBattlePalaceFunctions
	.globl gUnknown_85D68CC
gBattlePalaceFunctions:
gUnknown_85D68CC: @ 0x085D68CC
	.4byte sub_08195580
	.4byte sub_08195638
	.4byte sub_081956E4
	.4byte sub_081957B0
	.4byte sub_08195820
	.4byte sub_08195850
	.4byte sub_0819587C
	.4byte sub_081958E4
	.4byte sub_08195928
	.4byte sub_081959B8
	.if (. - gBattlePalaceFunctions) != (10 * 4)
	.error "Battle Palace function table has the wrong size"
	.endif
	.globl gBattlePalaceVitaminPrizes
	.globl gUnknown_85D68F4
gBattlePalaceVitaminPrizes:
gUnknown_85D68F4: @ 0x085D68F4
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.if (. - gBattlePalaceVitaminPrizes) != (6 * 2)
	.error "Battle Palace vitamin prize table has the wrong size"
	.endif
	.globl gBattlePalaceHeldItemPrizes
	.globl gUnknown_85D6900
gBattlePalaceHeldItemPrizes:
gUnknown_85D6900: @ 0x085D6900
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_CHOICE_BAND
	.if (. - gBattlePalaceHeldItemPrizes) != (9 * 2)
	.error "Battle Palace held item prize table has the wrong size"
	.endif
	.align 2, 0
	.globl gBattlePalaceWinStreakFlags
	.globl gUnknown_85D6914
gBattlePalaceWinStreakFlags:
gUnknown_85D6914: @ 0x085D6914
	.4byte STREAK_PALACE_SINGLES_50, STREAK_PALACE_SINGLES_OPEN
	.4byte STREAK_PALACE_DOUBLES_50, STREAK_PALACE_DOUBLES_OPEN
	.globl gBattlePalaceWinStreakMasks
	.globl gUnknown_85D6924
gBattlePalaceWinStreakMasks:
gUnknown_85D6924: @ 0x085D6924
	.4byte ~STREAK_PALACE_SINGLES_50, ~STREAK_PALACE_SINGLES_OPEN
	.4byte ~STREAK_PALACE_DOUBLES_50, ~STREAK_PALACE_DOUBLES_OPEN
	.globl gMatchCallTrainers
	.globl gUnknown_85D6934
gMatchCallTrainers:
gUnknown_85D6934: @ 0x085D6934
	.include "data/match_call_trainers.inc"
	.if (. - gMatchCallTrainers) != (64 * 20)
	.error "Match Call trainer table has the wrong size"
	.endif
	.globl gMatchCallTexts
gMatchCallTexts: @ 0x085D6E34
	.include "data/match_call_texts.inc"
	.if (. - gMatchCallTexts) != (205 * 8)
	.error "Match Call text table has the wrong size"
	.endif
	@ Entry-group aliases within gMatchCallTexts. Each entry is 8 bytes.
	.globl gMatchCallWildBattleTexts
	.set gMatchCallWildBattleTexts, gMatchCallTexts + (0 * 8)
	.globl gMatchCallNegativeBattleTexts
	.set gMatchCallNegativeBattleTexts, gMatchCallTexts + (15 * 8)
	.globl gMatchCallPositiveBattleTexts
	.set gMatchCallPositiveBattleTexts, gMatchCallTexts + (29 * 8)
	.globl gMatchCallSameRouteBattleRequestTexts
	.set gMatchCallSameRouteBattleRequestTexts, gMatchCallTexts + (43 * 8)
	.globl gMatchCallDifferentRouteBattleRequestTexts
	.set gMatchCallDifferentRouteBattleRequestTexts, gMatchCallTexts + (57 * 8)
	.globl gMatchCallPersonalizedTexts
	.set gMatchCallPersonalizedTexts, gMatchCallTexts + (71 * 8)
	.globl gMatchCallBattleFrontierStreakTexts
	.set gMatchCallBattleFrontierStreakTexts, gMatchCallTexts + (135 * 8)
	.globl gMatchCallBattleFrontierRecordStreakTexts
	.set gMatchCallBattleFrontierRecordStreakTexts, gMatchCallTexts + (149 * 8)
	.globl gMatchCallBattleDomeTexts
	.set gMatchCallBattleDomeTexts, gMatchCallTexts + (163 * 8)
	.globl gMatchCallBattlePikeTexts
	.set gMatchCallBattlePikeTexts, gMatchCallTexts + (177 * 8)
	.globl gMatchCallBattlePyramidTexts
	.set gMatchCallBattlePyramidTexts, gMatchCallTexts + (191 * 8)

	.globl gMatchCallBattleTopics
	.globl gUnknown_85D749C
gMatchCallBattleTopics:
gUnknown_85D749C: @ 0x085D749C
	.4byte gMatchCallWildBattleTexts
	.4byte gMatchCallNegativeBattleTexts
	.4byte gMatchCallPositiveBattleTexts
	.if (. - gMatchCallBattleTopics) != (3 * 4)
	.error "Match Call battle topic table has the wrong size"
	.endif

	.globl gMatchCallBattleRequestTopics
	.globl gUnknown_85D74A8
gMatchCallBattleRequestTopics:
gUnknown_85D74A8: @ 0x085D74A8
	.4byte gMatchCallSameRouteBattleRequestTexts
	.4byte gMatchCallDifferentRouteBattleRequestTexts
	.if (. - gMatchCallBattleRequestTopics) != (2 * 4)
	.error "Match Call battle request topic table has the wrong size"
	.endif

	.globl gMatchCallGeneralTopics
	.globl gUnknown_85D74B0
gMatchCallGeneralTopics:
gUnknown_85D74B0: @ 0x085D74B0
	.4byte gMatchCallPersonalizedTexts
	.4byte gMatchCallBattleFrontierStreakTexts
	.4byte gMatchCallBattleFrontierRecordStreakTexts
	.4byte gMatchCallBattleDomeTexts
	.4byte gMatchCallBattlePikeTexts
	.4byte gMatchCallBattlePyramidTexts
	.if (. - gMatchCallGeneralTopics) != (6 * 4)
	.error "Match Call general topic table has the wrong size"
	.endif
	.globl gUnknown_85D74C8
gUnknown_85D74C8: @ 0x085D74C8
	.incbin "baserom.gba", 0x5d74c8, 0x20
	.globl gUnknown_85D74E8
gUnknown_85D74E8: @ 0x085D74E8
	.incbin "baserom.gba", 0x5d74e8, 0x100
	.globl gUnknown_85D75E8
gUnknown_85D75E8: @ 0x085D75E8
	.incbin "baserom.gba", 0x5d75e8, 0x20
	.globl gUnknown_85D7608
gUnknown_85D7608: @ 0x085D7608
	.incbin "baserom.gba", 0x5d7608, 0x3e4
	.globl gUnknown_85D79EC
gUnknown_85D79EC: @ 0x085D79EC
	.space 0x2, 0xB0

	@ src/match_call.c:1204 sText_PokenavCallEllipsis
	.globl gText_Rom_5D79EE
gText_Rom_5D79EE: @ 0x085D79EE
	.string "…………\p$"
	.if (. - gText_Rom_5D79EE) > 0x6
	.error "gText_Rom_5D79EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D79EE) < 0x6
	.space 0x6 - (. - gText_Rom_5D79EE)
	.endif
	.globl gUnknown_85D79F4
gUnknown_85D79F4: @ 0x085D79F4
	.4byte LoadMatchCallWindowGfx
	.4byte MoveMatchCallWindowToVram
	.4byte PrintMatchCallIntroEllipsis
	.4byte sub_08195EB0
	.4byte sub_08195ED8
	.4byte sub_08195F30
	.4byte sub_08195F90
	.4byte sub_08195FF0
	.globl gUnknown_85D7A14
gUnknown_85D7A14: @ 0x085D7A14
	.incbin "baserom.gba", 0x5d7a14, 0x8
	.globl gUnknown_85D7A1C
gUnknown_85D7A1C: @ 0x085D7A1C
	.incbin "baserom.gba", 0x5d7a1c, 0xc
	.globl gUnknown_85D7A28
gUnknown_85D7A28: @ 0x085D7A28
	.incbin "baserom.gba", 0x5d7a28, 0x2c
	.globl gUnknown_85D7A54
gUnknown_85D7A54: @ 0x085D7A54
	.incbin "baserom.gba", 0x5d7a54, 0x30
	.globl gUnknown_85D7A84
gUnknown_85D7A84: @ 0x085D7A84
	.4byte gText_Rom_5CC423
	.4byte gText_Rom_5CC42A
	.4byte gText_Rom_5CC431
	.4byte gText_Rom_5CC442
	.4byte gText_Rom_5CC44A
	.4byte gText_Rom_5CC438
	.4byte gText_Rom_5CC452
	.globl gUnknown_85D7AA0
gUnknown_85D7AA0: @ 0x085D7AA0
	.incbin "baserom.gba", 0x5d7aa0, 0x10
	.globl gUnknown_85D7AB0
gUnknown_85D7AB0: @ 0x085D7AB0
	.4byte gText_Rom_262E5F
	.4byte gText_Rom_262E81
	.4byte gText_Rom_262EA6
	.4byte gText_Rom_262ECF
	.4byte gText_Rom_262EF5
	.4byte gText_Rom_262F18
	.4byte gText_Rom_262F3F
	.4byte gText_Rom_262F61
	.4byte gText_Rom_262F8A
	.4byte gText_Rom_262FAD
	.4byte gText_Rom_262FE1
	.4byte gText_Rom_26300C
	.4byte gText_Rom_263032
	.4byte gText_Rom_263050
	.4byte gText_Rom_263072
	.4byte gText_Rom_263095
	.4byte gText_Rom_2630C7
	.4byte gText_Rom_2630F0
	.4byte gText_Rom_26310C
	.4byte gText_Rom_26312D
	.4byte gText_Rom_26314F
	.globl gUnknown_85D7B04
gUnknown_85D7B04: @ 0x085D7B04
	.incbin "baserom.gba", 0x5d7b04, 0x20
	.globl gUnknown_85D7B24
gUnknown_85D7B24: @ 0x085D7B24
	.incbin "baserom.gba", 0x5d7b24, 0x4
	.globl gUnknown_85D7B28
gUnknown_85D7B28: @ 0x085D7B28
	.incbin "baserom.gba", 0x5d7b28, 0x10
	.globl gUnknown_85D7B38
gUnknown_85D7B38: @ 0x085D7B38
	.incbin "baserom.gba", 0x5d7b38, 0x8
	.globl gUnknown_85D7B40
gUnknown_85D7B40: @ 0x085D7B40

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5D7B40
gText_Rom_5D7B40: @ 0x085D7B40
	.string "はい\nいいえ$"
	.if (. - gText_Rom_5D7B40) != 0x7
	.error "gText_Rom_5D7B40 must retain its original byte length"
	.endif
	.globl gText_Rom_5D7B43
	.set gText_Rom_5D7B43, gText_Rom_5D7B40 + 0x3
	.space 0x1, 0x00
	.globl gUnknown_85D7B48
gUnknown_85D7B48: @ 0x085D7B48
	.incbin "baserom.gba", 0x5d7b48, 0x20
	.globl gUnknown_85D7B68
gUnknown_85D7B68: @ 0x085D7B68
	.incbin "baserom.gba", 0x5d7b68, 0x4
	.globl gUnknown_85D7B6C
gUnknown_85D7B6C: @ 0x085D7B6C
	.incbin "baserom.gba", 0x5d7b6c, 0x4
	.globl gUnknown_85D7B70
gUnknown_85D7B70: @ 0x085D7B70
	.incbin "baserom.gba", 0x5d7b70, 0x68
	.globl gUnknown_85D7BD8
gUnknown_85D7BD8: @ 0x085D7BD8
	.incbin "baserom.gba", 0x5d7bd8, 0x20
	.globl gUnknown_85D7BF8
gUnknown_85D7BF8: @ 0x085D7BF8
	.incbin "baserom.gba", 0x5d7bf8, 0x20
	.globl gUnknown_85D7C18
gUnknown_85D7C18: @ 0x085D7C18
	.incbin "baserom.gba", 0x5d7c18, 0x20
	.globl gUnknown_85D7C38
gUnknown_85D7C38: @ 0x085D7C38
	.incbin "baserom.gba", 0x5d7c38, 0x508

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_5D8140
gText_Rom_5D8140: @ 0x085D8140
	.string "ラララ$"
	.if (. - gText_Rom_5D8140) > 0x4
	.error "gText_Rom_5D8140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D8140) < 0x4
	.space 0x4 - (. - gText_Rom_5D8140)
	.endif
	.incbin "baserom.gba", 0x5d8144, 0x8

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_5D814C
gText_Rom_5D814C: @ 0x085D814C
	.string "ラララ$"
	.if (. - gText_Rom_5D814C) > 0x4
	.error "gText_Rom_5D814C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D814C) < 0x4
	.space 0x4 - (. - gText_Rom_5D814C)
	.endif
	.incbin "baserom.gba", 0x5d8150, 0x1ae8
	.globl gUnknown_85D9C38
gUnknown_85D9C38: @ 0x085D9C38
	.incbin "baserom.gba", 0x5d9c38, 0x1100
	.globl gUnknown_85DAD38
gUnknown_85DAD38: @ 0x085DAD38
	.incbin "baserom.gba", 0x5dad38, 0x440
	.globl gUnknown_85DB178
gUnknown_85DB178: @ 0x085DB178
	.incbin "baserom.gba", 0x5db178, 0x800
	.globl gUnknown_85DB978
gUnknown_85DB978: @ 0x085DB978
	.incbin "baserom.gba", 0x5db978, 0x100
	.globl gUnknown_85DBA78
gUnknown_85DBA78: @ 0x085DBA78
	.incbin "baserom.gba", 0x5dba78, 0x60
	.globl gUnknown_85DBAD8
gUnknown_85DBAD8: @ 0x085DBAD8
	.incbin "baserom.gba", 0x5dbad8, 0x40
	.globl gUnknown_85DBB18
gUnknown_85DBB18: @ 0x085DBB18
	.incbin "baserom.gba", 0x5dbb18, 0x20
	.globl gUnknown_85DBB38
gUnknown_85DBB38: @ 0x085DBB38
	.incbin "baserom.gba", 0x5dbb38, 0x28
	.globl gUnknown_85DBB60
gUnknown_85DBB60: @ 0x085DBB60
	.incbin "baserom.gba", 0x5dbb60, 0x10
	.globl gUnknown_85DBB70
gUnknown_85DBB70: @ 0x085DBB70
	.incbin "baserom.gba", 0x5dbb70, 0x28
	.globl gUnknown_85DBB98
gUnknown_85DBB98: @ 0x085DBB98

	@ src/strings.c:992 gText_RentalPkmn2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DBB98
gText_Rom_5DBB98: @ 0x085DBB98
	.string "ポケモンレンタル$"
	.if (. - gText_Rom_5DBB98) != 0x9
	.error "gText_Rom_5DBB98 must retain its original byte length"
	.endif
	.globl gText_Rom_5DBB9C
	.set gText_Rom_5DBB9C, gText_Rom_5DBB98 + 0x4
	.globl gUnknown_85DBBA1
gUnknown_85DBBA1: @ 0x085DBBA1

	@ src/strings.c:993 gText_SelectFirstPkmn
	.globl gText_Rom_5DBBA1
gText_Rom_5DBBA1: @ 0x085DBBA1
	.string "1ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBA1) > 0x14
	.error "gText_Rom_5DBBA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBA1) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBA1)
	.endif
	.globl gUnknown_85DBBB5
gUnknown_85DBBB5: @ 0x085DBBB5

	@ src/strings.c:994 gText_SelectSecondPkmn
	.globl gText_Rom_5DBBB5
gText_Rom_5DBBB5: @ 0x085DBBB5
	.string "2ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBB5) > 0x14
	.error "gText_Rom_5DBBB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBB5) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBB5)
	.endif
	.globl gUnknown_85DBBC9
gUnknown_85DBBC9: @ 0x085DBBC9

	@ src/strings.c:995 gText_SelectThirdPkmn
	.globl gText_Rom_5DBBC9
gText_Rom_5DBBC9: @ 0x085DBBC9
	.string "3ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBC9) > 0x14
	.error "gText_Rom_5DBBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBC9) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBC9)
	.endif
	.globl gUnknown_85DBBDD
gUnknown_85DBBDD: @ 0x085DBBDD

	@ src/strings.c:996 gText_Rent
	.globl gText_Rom_5DBBDD
gText_Rom_5DBBDD: @ 0x085DBBDD
	.string "レンタルする$"
	.if (. - gText_Rom_5DBBDD) > 0x7
	.error "gText_Rom_5DBBDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBDD) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBDD)
	.endif
	.globl gUnknown_85DBBE4
gUnknown_85DBBE4: @ 0x085DBBE4
