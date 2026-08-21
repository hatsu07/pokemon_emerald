	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl gText_Rom_5CAAB0
gText_Rom_5CAAB0: @ 0x085CAAB0
	.string "ねむり{EOS}"
	.if (. - gText_Rom_5CAAB0) > 0x4
	.error "gText_Rom_5CAAB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB0) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB0)
	.endif

	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5CAAB4
gText_Rom_5CAAB4: @ 0x085CAAB4
	.string "やけど{EOS}"
	.if (. - gText_Rom_5CAAB4) > 0x4
	.error "gText_Rom_5CAAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB4) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB4)
	.endif

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5CAAB8
gText_Rom_5CAAB8: @ 0x085CAAB8
	.string "こおり{EOS}"
	.if (. - gText_Rom_5CAAB8) > 0x4
	.error "gText_Rom_5CAAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB8) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB8)
	.endif

