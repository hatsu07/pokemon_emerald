	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl sScriptMenuText_MenuOptionExit
sScriptMenuText_MenuOptionExit: @ 0x085CADD0
	.string "とじる{EOS}"
	.if (. - sScriptMenuText_MenuOptionExit) > 0x4
	.error "sScriptMenuText_MenuOptionExit may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionExit) < 0x4
	.space 0x4 - (. - sScriptMenuText_MenuOptionExit)
	.endif
	@ Decoded text from ROM range: offset=0x5CADD4, size=0x5
	.string "　5BP{EOS}"
