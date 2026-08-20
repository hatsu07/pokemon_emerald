	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl gText_Rom_24A46D
gText_Rom_24A46D: @ 0x0824A46D
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - gText_Rom_24A46D) > 0x16
	.error "gText_Rom_24A46D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A46D) < 0x16
	.space 0x16 - (. - gText_Rom_24A46D)
	.endif
