	@ src/main_menu.c:489 main_menu_line_489
	.globl sScriptMenuText_BunnyHops
sScriptMenuText_BunnyHops: @ 0x085CAB56
	.string "ダニエル{EOS}"
	.if (. - sScriptMenuText_BunnyHops) > 0x5
	.error "sScriptMenuText_BunnyHops may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BunnyHops) < 0x5
	.space 0x5 - (. - sScriptMenuText_BunnyHops)
	.endif
