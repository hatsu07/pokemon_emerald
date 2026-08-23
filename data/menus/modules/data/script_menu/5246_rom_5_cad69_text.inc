	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleBag
sScriptMenuText_BattleBag: @ 0x085CAD69
	.string "バトルバッグ{EOS}"
	.if (. - sScriptMenuText_BattleBag) != 0x7
	.error "sScriptMenuText_BattleBag must retain its original byte length"
	.endif
