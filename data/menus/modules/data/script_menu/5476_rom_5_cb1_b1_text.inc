	@ src/data/script_menu.h:780 script_menu_line_780
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_DontRemember
sScriptMenuText_DontRemember: @ 0x085CB1B1
	.string "おぼえていない{EOS}"
	.if (. - sScriptMenuText_DontRemember) != 0x8
	.error "sScriptMenuText_DontRemember must retain its original byte length"
	.endif
