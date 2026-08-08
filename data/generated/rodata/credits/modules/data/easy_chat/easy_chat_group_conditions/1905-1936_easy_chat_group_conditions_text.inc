	@ src/data/easy_chat/easy_chat_group_conditions.h:232 easy_chat_group_conditions_line_232
	.globl gText_Rom_576D32
gText_Rom_576D32: @ 0x08576D32
	.string "ただしい$"
	.if (. - gText_Rom_576D32) > 0x5
	.error "gText_Rom_576D32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D32) < 0x5
	.space 0x5 - (. - gText_Rom_576D32)
	.endif
	@ Decoded text from ROM range: offset=0x576D37, size=0x3
	.string "だめ$"

	@ src/data/easy_chat/easy_chat_group_conditions.h:244 easy_chat_group_conditions_line_244
	.globl gText_Rom_576D3A
gText_Rom_576D3A: @ 0x08576D3A
	.string "ちいさい$"
	.if (. - gText_Rom_576D3A) > 0x5
	.error "gText_Rom_576D3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3A) < 0x5
	.space 0x5 - (. - gText_Rom_576D3A)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:250 easy_chat_group_conditions_line_250
	.globl gText_Rom_576D3F
gText_Rom_576D3F: @ 0x08576D3F
	.string "ちがう$"
	.if (. - gText_Rom_576D3F) > 0x4
	.error "gText_Rom_576D3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3F) < 0x4
	.space 0x4 - (. - gText_Rom_576D3F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:256 easy_chat_group_conditions_line_256
	.globl gText_Rom_576D43
gText_Rom_576D43: @ 0x08576D43
	.string "つかれ$"
	.if (. - gText_Rom_576D43) > 0x4
	.error "gText_Rom_576D43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D43) < 0x4
	.space 0x4 - (. - gText_Rom_576D43)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:262 easy_chat_group_conditions_line_262
	.globl gText_Rom_576D47
gText_Rom_576D47: @ 0x08576D47
	.string "とくい$"
	.if (. - gText_Rom_576D47) > 0x4
	.error "gText_Rom_576D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D47) < 0x4
	.space 0x4 - (. - gText_Rom_576D47)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:268 easy_chat_group_conditions_line_268
	.globl gText_Rom_576D4B
gText_Rom_576D4B: @ 0x08576D4B
	.string "トップ$"
	.if (. - gText_Rom_576D4B) > 0x4
	.error "gText_Rom_576D4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4B) < 0x4
	.space 0x4 - (. - gText_Rom_576D4B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:274 easy_chat_group_conditions_line_274
	.globl gText_Rom_576D4F
gText_Rom_576D4F: @ 0x08576D4F
	.string "とまらない$"
	.if (. - gText_Rom_576D4F) > 0x6
	.error "gText_Rom_576D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4F) < 0x6
	.space 0x6 - (. - gText_Rom_576D4F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:280 easy_chat_group_conditions_line_280
	.globl gText_Rom_576D55
gText_Rom_576D55: @ 0x08576D55
	.string "とんでもない$"
	.if (. - gText_Rom_576D55) > 0x7
	.error "gText_Rom_576D55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D55) < 0x7
	.space 0x7 - (. - gText_Rom_576D55)
	.endif
	@ Decoded text from ROM range: offset=0x576D5C, size=0x3
	.string "ない$"

	@ src/data/easy_chat/easy_chat_group_conditions.h:292 easy_chat_group_conditions_line_292
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576D5F
gText_Rom_576D5F: @ 0x08576D5F
	.string "なかった$"
	.if (. - gText_Rom_576D5F) != 0x5
	.error "gText_Rom_576D5F must retain its original byte length"
	.endif
	.globl gText_Rom_576D60
	.set gText_Rom_576D60, gText_Rom_576D5F + 0x1
	@ Decoded text from ROM range: offset=0x576D64, size=0x3
	.string "なし$"

	@ src/data/easy_chat/easy_chat_group_conditions.h:304 easy_chat_group_conditions_line_304
	.globl gText_Rom_576D67
gText_Rom_576D67: @ 0x08576D67
	.string "なって$"
	.if (. - gText_Rom_576D67) > 0x4
	.error "gText_Rom_576D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D67) < 0x4
	.space 0x4 - (. - gText_Rom_576D67)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:310 easy_chat_group_conditions_line_310
	.globl gText_Rom_576D6B
gText_Rom_576D6B: @ 0x08576D6B
	.string "ぬるい$"
	.if (. - gText_Rom_576D6B) > 0x4
	.error "gText_Rom_576D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6B) < 0x4
	.space 0x4 - (. - gText_Rom_576D6B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:316 easy_chat_group_conditions_line_316 (+1 aliases)
	.globl gText_Rom_576D6F
gText_Rom_576D6F: @ 0x08576D6F
	.string "はやい$"
	.if (. - gText_Rom_576D6F) > 0x4
	.error "gText_Rom_576D6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6F) < 0x4
	.space 0x4 - (. - gText_Rom_576D6F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:322 easy_chat_group_conditions_line_322
	.globl gText_Rom_576D73
gText_Rom_576D73: @ 0x08576D73
	.string "ひくい$"
	.if (. - gText_Rom_576D73) > 0x4
	.error "gText_Rom_576D73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D73) < 0x4
	.space 0x4 - (. - gText_Rom_576D73)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:328 easy_chat_group_conditions_line_328
	.globl gText_Rom_576D77
gText_Rom_576D77: @ 0x08576D77
	.string "ひどい$"
	.if (. - gText_Rom_576D77) > 0x4
	.error "gText_Rom_576D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D77) < 0x4
	.space 0x4 - (. - gText_Rom_576D77)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:334 easy_chat_group_conditions_line_334
	.globl gText_Rom_576D7B
gText_Rom_576D7B: @ 0x08576D7B
	.string "ひとりで$"
	.if (. - gText_Rom_576D7B) > 0x5
	.error "gText_Rom_576D7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D7B) < 0x5
	.space 0x5 - (. - gText_Rom_576D7B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:340 easy_chat_group_conditions_line_340
	.globl gText_Rom_576D80
gText_Rom_576D80: @ 0x08576D80
	.string "ひま$"
	.if (. - gText_Rom_576D80) > 0x3
	.error "gText_Rom_576D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D80) < 0x3
	.space 0x3 - (. - gText_Rom_576D80)
	.endif
