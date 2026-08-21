	@ src/data/script_menu.h:38 gText_Registry (+2 aliases)
	.globl gText_Rom_5C93AB
gText_Rom_5C93AB: @ 0x085C93AB
	.string "とうろく{EOS}"
	.if (. - gText_Rom_5C93AB) > 0x5
	.error "gText_Rom_5C93AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93AB) < 0x5
	.space 0x5 - (. - gText_Rom_5C93AB)
	.endif
