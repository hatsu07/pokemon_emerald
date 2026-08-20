	@ data/text/trainers.inc:2492 Route123_Text_KindraDefeat (+1 aliases)
	.globl gText_Rom_25FD6B
gText_Rom_25FD6B: @ 0x0825FD6B
	.string "げんき いっぱいね……{EOS}"
	.if (. - gText_Rom_25FD6B) > 0xc
	.error "gText_Rom_25FD6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FD6B) < 0xc
	.space 0xc - (. - gText_Rom_25FD6B)
	.endif
