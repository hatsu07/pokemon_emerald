	@ data/maps/RusturfTunnel/scripts.inc:421 RusturfTunnel_Text_ComeAndGetSome
	.globl gText_Rom_213991
gText_Rom_213991: @ 0x08213991
	.string "くるのか?\nくるなら こいよ!$"
	.if (. - gText_Rom_213991) > 0x10
	.error "gText_Rom_213991 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213991) < 0x10
	.space 0x10 - (. - gText_Rom_213991)
	.endif
