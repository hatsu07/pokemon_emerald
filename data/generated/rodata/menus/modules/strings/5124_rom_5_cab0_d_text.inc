	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5CAB0D
gText_Rom_5CAB0D: @ 0x085CAB0D
	.string "レベル50{EOS}"
	.if (. - gText_Rom_5CAB0D) > 0x6
	.error "gText_Rom_5CAB0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB0D) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB0D)
	.endif
