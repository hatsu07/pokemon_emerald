	@ src/strings.c:814 gText_BattleDomeDesc
	.globl gText_Rom_5CCC00
gText_Rom_5CCC00: @ 0x085CCC00
	.string "トーナメントを かちぬく。\nせんじゅつを ためされる。$"
	.if (. - gText_Rom_5CCC00) > 0x1c
	.error "gText_Rom_5CCC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC00) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCC00)
	.endif
