
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
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/save_failed/gSaveFailedClockPalette.gbapal"
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
	@ ANALYSIS: SEMANTIC_NUMERIC_REGICE_PUZZLE_TABLE
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
	.globl gText_Rom_5CDB60

