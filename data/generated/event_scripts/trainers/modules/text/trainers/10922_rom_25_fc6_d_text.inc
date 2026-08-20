	@ data/text/trainers.inc:2468 Route123_Text_MiuDefeat (+1 aliases)
	.globl gText_Rom_25FC6D
gText_Rom_25FC6D: @ 0x0825FC6D
	.string "ミウ『まけちゃったね……{EOS}"
	.if (. - gText_Rom_25FC6D) > 0xd
	.error "gText_Rom_25FC6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC6D) < 0xd
	.space 0xd - (. - gText_Rom_25FC6D)
	.endif
