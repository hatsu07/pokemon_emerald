	@ data/maps/Route116/scripts.inc:409 Route116_Text_BagIsJamPacked
	.globl gText_Rom_1EC1EC
gText_Rom_1EC1EC: @ 0x081EC1EC
	.string "どうぐ いっぱいで\nリピートボール あげられないね{EOS}"
	.if (. - gText_Rom_1EC1EC) > 0x1a
	.error "gText_Rom_1EC1EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC1EC) < 0x1a
	.space 0x1a - (. - gText_Rom_1EC1EC)
	.endif
