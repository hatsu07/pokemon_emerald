	@ src/data/script_menu.h:38 gText_Registry (+2 aliases)
	.globl gText_Registry
gText_Registry: @ 0x085CC622
	.string "とうろく{EOS}"
	.if (. - gText_Registry) > 0x5
	.error "gText_Registry may not grow beyond its original slot"
	.endif
	.if (. - gText_Registry) < 0x5
	.space 0x5 - (. - gText_Registry)
	.endif
