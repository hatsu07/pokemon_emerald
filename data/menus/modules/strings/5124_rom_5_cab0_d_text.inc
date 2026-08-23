	@ src/strings.c:468 gText_Lv50
	.globl sScriptMenuText_Lv50
sScriptMenuText_Lv50: @ 0x085CAB0D
	.string "レベル50{EOS}"
	.if (. - sScriptMenuText_Lv50) > 0x6
	.error "sScriptMenuText_Lv50 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Lv50) < 0x6
	.space 0x6 - (. - sScriptMenuText_Lv50)
	.endif
