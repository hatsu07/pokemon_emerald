	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl gText_Rom_24A45E
gText_Rom_24A45E: @ 0x0824A45E
	.string "{PLAYER}は リボンを もらった!$"
	.if (. - gText_Rom_24A45E) > 0xf
	.error "gText_Rom_24A45E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A45E) < 0xf
	.space 0xf - (. - gText_Rom_24A45E)
	.endif
