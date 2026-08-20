	@ data/text/trainers.inc:1682 Route117_Text_IsaacDefeat (+1 aliases)
	.globl gText_Rom_25DB3E
gText_Rom_25DB3E: @ 0x0825DB3E
	.string "みごとに そだててるね……{EOS}"
	.if (. - gText_Rom_25DB3E) > 0xe
	.error "gText_Rom_25DB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB3E) < 0xe
	.space 0xe - (. - gText_Rom_25DB3E)
	.endif
