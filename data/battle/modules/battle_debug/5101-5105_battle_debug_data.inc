	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl sScriptMenuText_Slp
sScriptMenuText_Slp: @ 0x085CAAB0
	.string "ねむり{EOS}"
	.if (. - sScriptMenuText_Slp) > 0x4
	.error "sScriptMenuText_Slp may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Slp) < 0x4
	.space 0x4 - (. - sScriptMenuText_Slp)
	.endif

	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl sScriptMenuText_Brn
sScriptMenuText_Brn: @ 0x085CAAB4
	.string "やけど{EOS}"
	.if (. - sScriptMenuText_Brn) > 0x4
	.error "sScriptMenuText_Brn may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Brn) < 0x4
	.space 0x4 - (. - sScriptMenuText_Brn)
	.endif

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl sScriptMenuText_Frz
sScriptMenuText_Frz: @ 0x085CAAB8
	.string "こおり{EOS}"
	.if (. - sScriptMenuText_Frz) > 0x4
	.error "sScriptMenuText_Frz may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Frz) < 0x4
	.space 0x4 - (. - sScriptMenuText_Frz)
	.endif

