	@ src/item_use.c:98 sText_UsedVar2WildRepelled
	.globl gText_Rom_5C9699
gText_Rom_5C9699: @ 0x085C9699
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しにくくなった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9699) > 0x24
	.error "gText_Rom_5C9699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9699) < 0x24
	.space 0x24 - (. - gText_Rom_5C9699)
	.endif
