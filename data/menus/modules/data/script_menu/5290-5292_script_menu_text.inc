	@ src/data/script_menu.h:480 gText_Colosseum
	.globl sScriptMenuText_Colosseum
sScriptMenuText_Colosseum: @ 0x085CAE53
	.string "コロシアム{EOS}"
	.if (. - sScriptMenuText_Colosseum) > 0x6
	.error "sScriptMenuText_Colosseum may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Colosseum) < 0x6
	.space 0x6 - (. - sScriptMenuText_Colosseum)
	.endif
	@ Decoded text from ROM range: offset=0x5CAE59, size=0x9
	.string "レコードコーナー{EOS}"

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BerryCrush3
sScriptMenuText_BerryCrush3: @ 0x085CAE62
	.string "きのみクラッシュ{EOS}"
	.if (. - sScriptMenuText_BerryCrush3) != 0x9
	.error "sScriptMenuText_BerryCrush3 must retain its original byte length"
	.endif
