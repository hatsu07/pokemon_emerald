	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_MultiBattle
sScriptMenuText_MultiBattle: @ 0x085CAAF3
	.string "マルチバトル{EOS}"
	.if (. - sScriptMenuText_MultiBattle) != 0x7
	.error "sScriptMenuText_MultiBattle must retain its original byte length"
	.endif
