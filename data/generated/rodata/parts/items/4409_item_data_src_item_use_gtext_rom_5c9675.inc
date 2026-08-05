	@ src/item_use.c:97 sText_UsedVar2WildLured
	.globl gText_Rom_5C9675
gText_Rom_5C9675: @ 0x085C9675
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しやすくなった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9675) > 0x24
	.error "gText_Rom_5C9675 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9675) < 0x24
	.space 0x24 - (. - gText_Rom_5C9675)
	.endif
