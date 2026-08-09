@ Combined moves retained from the JP ROM layout.
@ Logical struct is three u16 move IDs; JP layout keeps 2 bytes padding per entry.

sCombinedMoves: @ 0x082EE2C4
	combined_move MOVE_EMBER, MOVE_GUST, MOVE_HEAT_WAVE
	combined_move 0xFFFF, 0xFFFF, 0xFFFF @ unused sentinel

	.if (. - sCombinedMoves) != 0x10
	.error "sCombinedMoves must remain 0x10 bytes in the JP ROM layout"
	.endif
