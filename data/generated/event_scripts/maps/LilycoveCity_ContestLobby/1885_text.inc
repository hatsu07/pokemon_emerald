	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl gText_Rom_2075A5
gText_Rom_2075A5: @ 0x082075A5
	.string "{PLAYER}は リボンを もらった!$"
	.if (. - gText_Rom_2075A5) > 0xf
	.error "gText_Rom_2075A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075A5) < 0xf
	.space 0xf - (. - gText_Rom_2075A5)
	.endif
