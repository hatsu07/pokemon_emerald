	@ src/strings.c:167 gText_DadsAdvice
	.globl gText_Rom_5C9556
gText_Rom_5C9556: @ 0x085C9556
	.string "おとうさんの ことば……\n{PLAYER}! こういうものには\lつかいどきが あるんだ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9556) > 0x29
	.error "gText_Rom_5C9556 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9556) < 0x29
	.space 0x29 - (. - gText_Rom_5C9556)
	.endif
