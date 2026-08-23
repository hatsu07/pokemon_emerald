	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_OpenLevel3
sScriptMenuText_OpenLevel3: @ 0x085CAF64
	.string "オープンレベル{EOS}"
	.if (. - sScriptMenuText_OpenLevel3) != 0x8
	.error "sScriptMenuText_OpenLevel3 must retain its original byte length"
	.endif
