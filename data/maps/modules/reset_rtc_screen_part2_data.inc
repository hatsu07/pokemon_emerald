	@ asm/reset_rtc_screen.s:677 indexes gResetRtcCursorStateInfoBase by cursor state * 12.
gResetRtcCursorStateInfoPadding: @ 0x084E8A76
	.2byte 0

gResetRtcCursorStateInfos: @ 0x084E8A78
	@ State 1: day count.
	.2byte 3 @ Task data halfword offset from data[0]
	.2byte 1, 9999 @ min, max
	.byte 0, 2 @ left, right cursor states
	.4byte 0
	@ State 2: hour.
	.2byte 4 @ Task data halfword offset from data[0]
	.2byte 0, 23 @ min, max
	.byte 1, 3 @ left, right cursor states
	.4byte 0
	@ State 3: minute.
	.2byte 5 @ Task data halfword offset from data[0]
	.2byte 0, 59 @ min, max
	.byte 2, 4 @ left, right cursor states
	.4byte 0
	@ State 4: second.
	.2byte 6 @ Task data halfword offset from data[0]
	.2byte 0, 59 @ min, max
	.byte 3, 5 @ left, right cursor states
	.4byte 0
	@ State 5: confirm selection.
	.2byte 7 @ selection-only state
	.2byte 0, 0
	.byte 4, 0 @ left, right cursor states
	.4byte 6 @ exit state used by cursor callbacks

gResetRtcCursorOam: @ 0x084E8AB4
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_SQUARE >> 14), 0, 0, (OAM_SIZE_0 >> 30), 0, 0, 0, 0

gResetRtcCursorTiles_0: @ 0x084E8ABC
	@ Editable 8x8 indexed PNG; reset-RTC cursor frame 0.
	.incbin "build/graphics/ui/reset_rtc/cursor_0.4bpp"
gResetRtcCursorTiles_1: @ 0x084E8ADC
	@ Editable 8x8 indexed PNG; reset-RTC cursor frame 1.
	.incbin "build/graphics/ui/reset_rtc/cursor_1.4bpp"

gResetRtcCursorPalette: @ 0x084E8AFC
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Only the first colors are distinct; LoadSpritePalette copies through the following compact sprite tables.
	.2byte 0x0000, 0x001F, 0x2529, 0x0000

gResetRtcCursorFrameImages: @ 0x084E8B04
	sprite_frame_image gResetRtcCursorTiles_0, 0x20
	sprite_frame_image gResetRtcCursorTiles_1, 0x20
