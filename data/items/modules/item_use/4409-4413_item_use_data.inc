
	@ src/item_use.c:97 sText_UsedVar2WildLured
	.globl sText_UsedVar2WildLured
sText_UsedVar2WildLured: @ 0x085C9675
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しやすくなった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_UsedVar2WildLured) > 0x24
	.error "sText_UsedVar2WildLured may not grow beyond its original slot"
	.endif
	.if (. - sText_UsedVar2WildLured) < 0x24
	.space 0x24 - (. - sText_UsedVar2WildLured)
	.endif

	@ src/item_use.c:98 sText_UsedVar2WildRepelled
	.globl sText_UsedVar2WildRepelled
sText_UsedVar2WildRepelled: @ 0x085C9699
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しにくくなった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_UsedVar2WildRepelled) > 0x24
	.error "sText_UsedVar2WildRepelled may not grow beyond its original slot"
	.endif
	.if (. - sText_UsedVar2WildRepelled) < 0x24
	.space 0x24 - (. - sText_UsedVar2WildRepelled)
	.endif
	.globl gText_Rom_5C96BD
gText_Rom_5C96BD: @ 0x085C96BD
	@ Decoded text from ROM range: offset=0x5C96BD, size=0x11
	.string "ボックスが　いっぱい　です！{PAUSE_UNTIL_PRESS}{EOS}"

	@ src/item_use.c:93 sText_PowderQty
	.globl sText_PowderQty
sText_PowderQty: @ 0x085C96CE
	.string "こなの りょう {STR_VAR_1}{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_PowderQty) > 0xd
	.error "sText_PowderQty may not grow beyond its original slot"
	.endif
	.if (. - sText_PowderQty) < 0xd
	.space 0xd - (. - sText_PowderQty)
	.endif
