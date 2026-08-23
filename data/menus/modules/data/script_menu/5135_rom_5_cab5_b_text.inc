	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl sScriptMenuText_Jump
sScriptMenuText_Jump: @ 0x085CAB5B
	.string "ジャンプ{EOS}"
	.if (. - sScriptMenuText_Jump) > 0x5
	.error "sScriptMenuText_Jump may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Jump) < 0x5
	.space 0x5 - (. - sScriptMenuText_Jump)
	.endif
