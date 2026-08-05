	@ src/strings.c:1087 gText_OtherTrainerHasCard
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A11
gText_Rom_2C2A11: @ 0x082C2A11
	.string "   あいてが おなじ\nふしぎなカードを もっています!$"
	.if (. - gText_Rom_2C2A11) != 0x1d
	.error "gText_Rom_2C2A11 must retain its original byte length"
	.endif
