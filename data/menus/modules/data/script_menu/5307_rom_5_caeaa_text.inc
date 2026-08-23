	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_OpenLevel2
sScriptMenuText_OpenLevel2: @ 0x085CAEAA
	.string "オープンレベル{EOS}"
	.if (. - sScriptMenuText_OpenLevel2) != 0x8
	.error "sScriptMenuText_OpenLevel2 must retain its original byte length"
	.endif
