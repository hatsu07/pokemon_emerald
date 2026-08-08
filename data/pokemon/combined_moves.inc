@ Combined moves retained from the JP ROM layout.
@ Logical struct is three u16 move IDs; JP layout keeps 2 bytes padding per entry.
sCombinedMoves: @ 0x082EE2C4
	@ MOVE_EMBER, MOVE_GUST -> MOVE_HEAT_WAVE
	.2byte 0x0034, 0x0010, 0x0101, 0x0000
	@ unused 0xFFFF sentinel
	.2byte 0xFFFF, 0xFFFF, 0xFFFF, 0x0000
