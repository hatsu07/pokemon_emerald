	@ src/data/easy_chat/easy_chat_group_status.h:232 easy_chat_group_status_line_232 (+1 aliases)
	.globl gText_Rom_5749B7
gText_Rom_5749B7: @ 0x085749B7
	.string "じめん{EOS}"
	.if (. - gText_Rom_5749B7) > 0x4
	.error "gText_Rom_5749B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B7) < 0x4
	.space 0x4 - (. - gText_Rom_5749B7)
	.endif
	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_5749BB
gText_Rom_5749BB: @ 0x085749BB
	.string "じゅうなん{EOS}"
	.if (. - gText_Rom_5749BB) > 0x6
	.error "gText_Rom_5749BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749BB) < 0x6
	.space 0x6 - (. - gText_Rom_5749BB)
	.endif

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_5749C1
gText_Rom_5749C1: @ 0x085749C1
	.string "じりょく{EOS}"
	.if (. - gText_Rom_5749C1) > 0x5
	.error "gText_Rom_5749C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C1) < 0x5
	.space 0x5 - (. - gText_Rom_5749C1)
	.endif

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_5749C6
gText_Rom_5749C6: @ 0x085749C6
	.string "しろいけむり{EOS}"
	.if (. - gText_Rom_5749C6) > 0x7
	.error "gText_Rom_5749C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C6) < 0x7
	.space 0x7 - (. - gText_Rom_5749C6)
	.endif

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_5749CD
gText_Rom_5749CD: @ 0x085749CD
	.string "シンクロ{EOS}"
	.if (. - gText_Rom_5749CD) > 0x5
	.error "gText_Rom_5749CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749CD) < 0x5
	.space 0x5 - (. - gText_Rom_5749CD)
	.endif

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_5749D2
gText_Rom_5749D2: @ 0x085749D2
	.string "しんりょく{EOS}"
	.if (. - gText_Rom_5749D2) > 0x6
	.error "gText_Rom_5749D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D2) < 0x6
	.space 0x6 - (. - gText_Rom_5749D2)
	.endif

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_5749D8
gText_Rom_5749D8: @ 0x085749D8
	.string "すいすい{EOS}"
	.if (. - gText_Rom_5749D8) > 0x5
	.error "gText_Rom_5749D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D8) < 0x5
	.space 0x5 - (. - gText_Rom_5749D8)
	.endif

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_5749DD
gText_Rom_5749DD: @ 0x085749DD
	.string "すなおこし{EOS}"
	.if (. - gText_Rom_5749DD) > 0x6
	.error "gText_Rom_5749DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749DD) < 0x6
	.space 0x6 - (. - gText_Rom_5749DD)
	.endif

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_5749E3
gText_Rom_5749E3: @ 0x085749E3
	.string "すながくれ{EOS}"
	.if (. - gText_Rom_5749E3) > 0x6
	.error "gText_Rom_5749E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E3) < 0x6
	.space 0x6 - (. - gText_Rom_5749E3)
	.endif

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_5749E9
gText_Rom_5749E9: @ 0x085749E9
	.string "するどいめ{EOS}"
	.if (. - gText_Rom_5749E9) > 0x6
	.error "gText_Rom_5749E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E9) < 0x6
	.space 0x6 - (. - gText_Rom_5749E9)
	.endif

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749EF
gText_Rom_5749EF: @ 0x085749EF
	.string "せいしんりょく{EOS}"
	.if (. - gText_Rom_5749EF) != 0x8
	.error "gText_Rom_5749EF must retain its original byte length"
	.endif

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749F7
gText_Rom_5749F7: @ 0x085749F7
	.string "せいでんき{EOS}"
	.if (. - gText_Rom_5749F7) != 0x6
	.error "gText_Rom_5749F7 must retain its original byte length"
	.endif
