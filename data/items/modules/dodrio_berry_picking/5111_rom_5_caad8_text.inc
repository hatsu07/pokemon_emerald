	@ asm/dodrio_berry_picking.s:11294 sub_08029D28
	.globl sScriptMenuText_Yes
sScriptMenuText_Yes: @ 0x085CAAD8
	.string "はい{EOS}"
	.if (. - sScriptMenuText_Yes) > 0x3
	.error "sScriptMenuText_Yes may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Yes) < 0x3
	.space 0x3 - (. - sScriptMenuText_Yes)
	.endif
