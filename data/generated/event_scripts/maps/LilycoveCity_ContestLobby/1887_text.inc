	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl gText_Rom_2075B4
gText_Rom_2075B4: @ 0x082075B4
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - gText_Rom_2075B4) > 0x16
	.error "gText_Rom_2075B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075B4) < 0x16
	.space 0x16 - (. - gText_Rom_2075B4)
	.endif
