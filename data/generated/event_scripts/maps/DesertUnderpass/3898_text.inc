	@ data/maps/DesertUnderpass/scripts.inc:32 DesertUnderpass_Text_FoundRootFossil
	.globl gText_Rom_21CFAD
gText_Rom_21CFAD: @ 0x0821CFAD
	.string "{PLAYER}は\nねっこのカセキを みつけた!"
	.byte EOS
	.if (. - gText_Rom_21CFAD) > 0x13
	.error "gText_Rom_21CFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CFAD) < 0x13
	.space 0x13 - (. - gText_Rom_21CFAD)
	.endif
