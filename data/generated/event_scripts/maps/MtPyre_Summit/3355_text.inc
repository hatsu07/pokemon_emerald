	@ data/maps/MtPyre_Summit/scripts.inc:582 MtPyre_Summit_Text_WellThatTooIsFine
	.globl gText_Rom_21776F
gText_Rom_21776F: @ 0x0821776F
	.string "そうかね……\nまあ それも よいじゃろう……{EOS}"
	.if (. - gText_Rom_21776F) > 0x17
	.error "gText_Rom_21776F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21776F) < 0x17
	.space 0x17 - (. - gText_Rom_21776F)
	.endif
