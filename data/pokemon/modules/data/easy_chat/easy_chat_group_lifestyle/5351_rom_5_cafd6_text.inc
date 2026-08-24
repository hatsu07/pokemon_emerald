	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleBag2
sScriptMenuText_BattleBag2: @ 0x085CAFC0
	.string "バトルバッグ{EOS}"
	.if (. - sScriptMenuText_BattleBag2) != 0x7
	.error "sScriptMenuText_BattleBag2 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFC3
	.set gText_Rom_5CAFC3, sScriptMenuText_BattleBag2 + 0x3
	@ ANALYSIS: RAW_RANGE offset=0x5CAFC7, size=0x5
	.byte 0x9F, 0x59, 0x65, 0x97, 0x14

	@ src/pokedex_plus_hgss.c:6790 pokedex_plus_hgss_line_6790
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFCC
gText_Rom_5CAFCC: @ 0x085CAFCC
	.string " バッグ{EOS}"
	.if (. - gText_Rom_5CAFCC) != 0x5
	.error "gText_Rom_5CAFCC must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFCD
	.set gText_Rom_5CAFCD, gText_Rom_5CAFCC + 0x1
	@ ANALYSIS: RAW_RANGE offset=0x5CAFD1, size=0x5
	.byte 0x23, 0x10, 0x0E, 0x10, 0x00
	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAFD6
gText_Rom_5CAFD6: @ 0x085CAFD6
	.string "どうぐ{EOS}"
	.if (. - gText_Rom_5CAFD6) > 0x4
	.error "gText_Rom_5CAFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFD6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAFD6)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFDA, size=0xC
	.string "ポケモンの　じゅんばん{EOS}"
