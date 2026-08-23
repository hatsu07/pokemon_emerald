	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl sScriptMenuText_No
sScriptMenuText_No: @ 0x085CAADB
	.string "いいえ{EOS}"
	.if (. - sScriptMenuText_No) > 0x4
	.error "sScriptMenuText_No may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_No) < 0x4
	.space 0x4 - (. - sScriptMenuText_No)
	.endif

	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CAADF
gText_Rom_5CAADF: @ 0x085CAADF
	.string "せつめい{EOS}"
	.if (. - gText_Rom_5CAADF) > 0x5
	.error "gText_Rom_5CAADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADF) < 0x5
	.space 0x5 - (. - gText_Rom_5CAADF)
	.endif

	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SingleBattle
sScriptMenuText_SingleBattle: @ 0x085CAAE4
	.string "シングルバトル{EOS}"
	.if (. - sScriptMenuText_SingleBattle) != 0x8
	.error "sScriptMenuText_SingleBattle must retain its original byte length"
	.endif
