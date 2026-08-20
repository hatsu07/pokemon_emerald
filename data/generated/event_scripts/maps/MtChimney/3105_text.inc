	@ data/maps/MtChimney/scripts.inc:748 MtChimney_Text_MachineMakesNoResponse
	.globl gText_Rom_2157D3
gText_Rom_2157D3: @ 0x082157D3
	.string "なぞの そうち……\nまったく はんのう しない……{EOS}"
	.if (. - gText_Rom_2157D3) > 0x1a
	.error "gText_Rom_2157D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2157D3) < 0x1a
	.space 0x1a - (. - gText_Rom_2157D3)
	.endif
