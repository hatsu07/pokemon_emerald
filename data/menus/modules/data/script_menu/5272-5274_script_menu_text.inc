	@ src/data/script_menu.h:593 script_menu_line_593
	.globl sScriptMenuText_10BP
sScriptMenuText_10BP: @ 0x085CADD9
	.string "10BP{EOS}"
	.if (. - sScriptMenuText_10BP) > 0x5
	.error "sScriptMenuText_10BP may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_10BP) < 0x5
	.space 0x5 - (. - sScriptMenuText_10BP)
	.endif

	@ src/data/script_menu.h:594 script_menu_line_594
	.globl sScriptMenuText_15BP
sScriptMenuText_15BP: @ 0x085CADDE
	.string "15BP{EOS}"
	.if (. - sScriptMenuText_15BP) > 0x5
	.error "sScriptMenuText_15BP may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_15BP) < 0x5
	.space 0x5 - (. - sScriptMenuText_15BP)
	.endif
