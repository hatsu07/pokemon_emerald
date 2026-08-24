	@ src/strings.c:657 gText_Knockout
	.globl gText_Knockout
gText_Knockout: @ 0x085CAF39
	.string "ノックアウト{EOS}"
	.if (. - gText_Knockout) > 0x7
	.error "gText_Knockout may not grow beyond its original slot"
	.endif
	.if (. - gText_Knockout) < 0x7
	.space 0x7 - (. - gText_Knockout)
	.endif
	@ src/data/script_menu.h:689 gText_BasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BasicRules
sScriptMenuText_BasicRules: @ 0x085CAF40
	.string "きほんルール{EOS}"
	.if (. - sScriptMenuText_BasicRules) != 0x7
	.error "sScriptMenuText_BasicRules must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF43
	.set gText_Rom_5CAF43, sScriptMenuText_BasicRules + 0x3
	@ ANALYSIS: RAW_RANGE offset=0x5CAF47, size=0x5
	.byte 0x64, 0x7A, 0xAE, 0x95, 0x00
	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAF4C
gText_Rom_5CAF4C: @ 0x085CAF4C
	.string "あいて{EOS}"
	.if (. - gText_Rom_5CAF4C) > 0x4
	.error "gText_Rom_5CAF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF4C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAF4C)
	.endif
	@ Decoded text from ROM range: offset=0x5CAF50, size=0x14
	.string "トレード　かいすう{EOS}"
	.string "トレード　ちゅうい{EOS}"
