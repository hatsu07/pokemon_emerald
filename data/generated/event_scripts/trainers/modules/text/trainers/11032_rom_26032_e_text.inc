	@ data/text/trainers.inc:2633 Route124_Text_ChadDefeat (+1 aliases)
	.globl gText_Rom_26032E
gText_Rom_26032E: @ 0x0826032E
	.string "ゴボゴボゴボ……\nしずんでいく……{EOS}"
	.if (. - gText_Rom_26032E) > 0x12
	.error "gText_Rom_26032E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26032E) < 0x12
	.space 0x12 - (. - gText_Rom_26032E)
	.endif
