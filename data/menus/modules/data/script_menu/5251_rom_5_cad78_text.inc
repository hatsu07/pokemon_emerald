	@ src/data/script_menu.h:565 script_menu_line_565
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_LinkContest
sScriptMenuText_LinkContest: @ 0x085CAD78
	.string "つうしんコンテスト{EOS}"
	.if (. - sScriptMenuText_LinkContest) != 0xa
	.error "sScriptMenuText_LinkContest must retain its original byte length"
	.endif
