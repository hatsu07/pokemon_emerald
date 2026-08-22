gTradeBgTemplates: @ 0x0830D294
	@ struct BgTemplate[4], consumed by InitBgsFromTemplates(..., 4).
	.4byte 0x000001FC @ BG template 0
	.4byte 0x00002051 @ BG template 1
	.4byte 0x00002326 @ BG template 2
	.4byte 0x00003063 @ BG template 3

	.globl gTradeSpriteMotionYDeltaTable
gTradeSpriteMotionYDeltaTable: @ 0x0830D2A4
	@ ANALYSIS: SEMANTIC_NUMERIC_TRADE_SPRITE_MOTION_TABLE
	@ Signed per-frame Y deltas used by trade-animation phases.
	.byte 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3
	.byte 4, 4, 4, 4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1
	.byte -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1
	.byte 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, -4, -3, -3, -2, -2, -1
	.byte -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 2, 2, 3
	.byte 3, 4, -4, -3, -2, -1, -1, -1, 0, 0, 0, 0, 1, 0, 1, 1, 2, 3

	.globl gTradeWirelessSignalAnimSteps
gTradeWirelessSignalAnimSteps: @ 0x0830D310
	@ Pairs: palette index, frame duration/end marker.
	.byte 0, 0x01 @ step 0
	.byte 1, 0x01 @ step 1
	.byte 2, 0x01 @ step 2
	.byte 3, 0x01 @ step 3
	.byte 4, 0x01 @ step 4
	.byte 5, 0x02 @ step 5
	.byte 6, 0x02 @ step 6
	.byte 7, 0x02 @ step 7
	.byte 8, 0x02 @ step 8
	.byte 9, 0x02 @ step 9
	.byte 10, 0x03 @ step 10
	.byte 11, 0x03 @ step 11
	.byte 12, 0x03 @ step 12
	.byte 13, 0x04 @ step 13
	.byte 14, 0x05 @ step 14
	.byte 15, 0x02 @ step 15
	.byte 0, 0x01 @ step 16
	.byte 1, 0x01 @ step 17
	.byte 2, 0x01 @ step 18
	.byte 3, 0x01 @ step 19
	.byte 4, 0x01 @ step 20
	.byte 5, 0x02 @ step 21
	.byte 6, 0x02 @ step 22
	.byte 7, 0x02 @ step 23
	.byte 8, 0x02 @ step 24
	.byte 9, 0x02 @ step 25
	.byte 10, 0x03 @ step 26
	.byte 11, 0x03 @ step 27
	.byte 12, 0x03 @ step 28
	.byte 13, 0x04 @ step 29
	.byte 14, 0x05 @ step 30
	.byte 16, 0x01 @ step 31
	.byte 16, 0xFF @ step 32
	.byte 0, 0x00 @ step 33

	.globl gBerryBlenderCenterPalette
