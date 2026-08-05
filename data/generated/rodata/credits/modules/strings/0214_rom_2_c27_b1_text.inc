	@ src/strings.c:1063 gText_ThrowAwayWonderCard
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C27B1
gText_Rom_2C27B1: @ 0x082C27B1
	.string "   いまの ふしぎなカードを すてて\nあたらしい カードを よみこみますか?$"
	.if (. - gText_Rom_2C27B1) != 0x28
	.error "gText_Rom_2C27B1 must retain its original byte length"
	.endif
