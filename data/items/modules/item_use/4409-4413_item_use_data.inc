	@ src/item_use.c:97 sText_UsedVar2WildLured
	.globl gText_Rom_5C9675
gText_Rom_5C9675: @ 0x085C9675
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しやすくなった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9675) > 0x24
	.error "gText_Rom_5C9675 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9675) < 0x24
	.space 0x24 - (. - gText_Rom_5C9675)
	.endif

	@ src/item_use.c:98 sText_UsedVar2WildRepelled
	.globl gText_Rom_5C9699
gText_Rom_5C9699: @ 0x085C9699
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しにくくなった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9699) > 0x24
	.error "gText_Rom_5C9699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9699) < 0x24
	.space 0x24 - (. - gText_Rom_5C9699)
	.endif
	.globl gText_Rom_5C96BD
gText_Rom_5C96BD: @ 0x085C96BD
	@ Decoded text from ROM range: offset=0x5C96BD, size=0x11
	.string "ボックスが　いっぱい　です！{PAUSE_UNTIL_PRESS}{EOS}"

	@ src/item_use.c:93 sText_PowderQty
	.globl gText_Rom_5C96CE
gText_Rom_5C96CE: @ 0x085C96CE
	.string "こなの りょう {STR_VAR_1}{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C96CE) > 0xd
	.error "gText_Rom_5C96CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96CE) < 0xd
	.space 0xd - (. - gText_Rom_5C96CE)
	.endif
