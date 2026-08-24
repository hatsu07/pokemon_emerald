	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_57498E
gText_Rom_57498E: @ 0x0857498E
	.string "ゴースト{EOS}"
	.if (. - gText_Rom_57498E) > 0x5
	.error "gText_Rom_57498E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57498E) < 0x5
	.space 0x5 - (. - gText_Rom_57498E)
	.endif
	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_574993
gText_Rom_574993: @ 0x08574993
	.string "こおり{EOS}"
	.if (. - gText_Rom_574993) > 0x4
	.error "gText_Rom_574993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574993) < 0x4
	.space 0x4 - (. - gText_Rom_574993)
	.endif
	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_574997
gText_Rom_574997: @ 0x08574997
	.string "こんじょう{EOS}"
	.if (. - gText_Rom_574997) > 0x6
	.error "gText_Rom_574997 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574997) < 0x6
	.space 0x6 - (. - gText_Rom_574997)
	.endif

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_57499D
gText_Rom_57499D: @ 0x0857499D
	.string "さめはだ{EOS}"
	.if (. - gText_Rom_57499D) > 0x5
	.error "gText_Rom_57499D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57499D) < 0x5
	.space 0x5 - (. - gText_Rom_57499D)
	.endif

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_5749A2
gText_Rom_5749A2: @ 0x085749A2
	.string "シェルアーマー{EOS}"
	.if (. - gText_Rom_5749A2) > 0x8
	.error "gText_Rom_5749A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749A2) < 0x8
	.space 0x8 - (. - gText_Rom_5749A2)
	.endif

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749AA
gText_Rom_5749AA: @ 0x085749AA
	.string "しぜんかいふく{EOS}"
	.if (. - gText_Rom_5749AA) != 0x8
	.error "gText_Rom_5749AA must retain its original byte length"
	.endif

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_5749B2
gText_Rom_5749B2: @ 0x085749B2
	.string "しめりけ{EOS}"
	.if (. - gText_Rom_5749B2) > 0x5
	.error "gText_Rom_5749B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B2) < 0x5
	.space 0x5 - (. - gText_Rom_5749B2)
	.endif
