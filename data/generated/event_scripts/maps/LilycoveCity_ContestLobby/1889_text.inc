	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:998 LilycoveCity_ContestLobby_Text_OkaySeeYou
	.globl gText_Rom_2075CA
gText_Rom_2075CA: @ 0x082075CA
	.string "それじゃね!{EOS}"
	.if (. - gText_Rom_2075CA) > 0x7
	.error "gText_Rom_2075CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075CA) < 0x7
	.space 0x7 - (. - gText_Rom_2075CA)
	.endif
