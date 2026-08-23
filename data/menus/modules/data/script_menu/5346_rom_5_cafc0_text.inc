	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleBag2
sScriptMenuText_BattleBag2: @ 0x085CAFC0
	.string "バトルバッグ{EOS}"
	.if (. - sScriptMenuText_BattleBag2) != 0x7
	.error "sScriptMenuText_BattleBag2 must retain its original byte length"
	.endif
