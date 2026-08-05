	@ src/strings.c:1051 gText_WonderCardsInPossession
	.globl gText_Rom_2C266E
gText_Rom_2C266E: @ 0x082C266E
	.string "  もっている ふしぎなカードを\nみることが できます$"
	.if (. - gText_Rom_2C266E) > 0x1c
	.error "gText_Rom_2C266E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C266E) < 0x1c
	.space 0x1c - (. - gText_Rom_2C266E)
	.endif
