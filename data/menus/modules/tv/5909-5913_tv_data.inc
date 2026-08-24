
	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5CBFC0
gText_Rom_5CBFC0: @ 0x085CBFC0
	.string "さいこう{EOS}"
	.if (. - gText_Rom_5CBFC0) > 0x5
	.error "gText_Rom_5CBFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC0)
	.endif

	@ src/data/script_menu.h:294 script_menu_line_294
	.globl gText_Rom_5CBFC5
gText_Rom_5CBFC5: @ 0x085CBFC5
	.string "いまいち{EOS}"
	.if (. - gText_Rom_5CBFC5) > 0x5
	.error "gText_Rom_5CBFC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC5) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC5)
	.endif

	@ asm/tv.s:14229 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCA
gText_Rom_5CBFCA: @ 0x085CBFCA
	.string "まずい{EOS}"
	.if (. - gText_Rom_5CBFCA) > 0x4
	.error "gText_Rom_5CBFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCA) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFCA)
	.endif

	@ asm/tv.s:14237 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCE
gText_Rom_5CBFCE: @ 0x085CBFCE
	.string "さいあく{EOS}"
	.if (. - gText_Rom_5CBFCE) > 0x5
	.error "gText_Rom_5CBFCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCE) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFCE)
	.endif

	@ asm/tv.s:14076 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD3
gText_Rom_5CBFD3: @ 0x085CBFD3
	.string "から{EOS}"
	.if (. - gText_Rom_5CBFD3) > 0x3
	.error "gText_Rom_5CBFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD3) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD3)
	.endif
