	@ src/strings.c:696 gText_BattlePalace (+1 aliases)
	.globl gText_Rom_5CCBB6
gText_Rom_5CCBB6: @ 0x085CCBB6
	.string "バトルパレス$"
	.if (. - gText_Rom_5CCBB6) > 0x7
	.error "gText_Rom_5CCBB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBB6) < 0x7
	.space 0x7 - (. - gText_Rom_5CCBB6)
	.endif
