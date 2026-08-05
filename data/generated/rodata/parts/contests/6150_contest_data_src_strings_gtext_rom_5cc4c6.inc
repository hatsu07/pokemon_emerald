	@ src/strings.c:713 gText_ContestantsMonWon
	.globl gText_Rom_5CC4C6
gText_Rom_5CC4C6: @ 0x085CC4C6
	.string "ゆうしょう! {STR_VAR_1}の {STR_VAR_2}!$"
	.if (. - gText_Rom_5CC4C6) > 0xf
	.error "gText_Rom_5CC4C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4C6) < 0xf
	.space 0xf - (. - gText_Rom_5CC4C6)
	.endif
