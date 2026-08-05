	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0AE
gText_Rom_2FC0AE: @ 0x082FC0AE
	.string "2ひきの　なかは\nそれほど　よくないがなぁ$"
	.if (. - gText_Rom_2FC0AE) > 0x16
	.error "gText_Rom_2FC0AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0AE) < 0x16
	.space 0x16 - (. - gText_Rom_2FC0AE)
	.endif
