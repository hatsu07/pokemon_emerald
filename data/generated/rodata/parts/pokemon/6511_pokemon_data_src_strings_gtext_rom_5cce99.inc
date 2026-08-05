	@ src/strings.c:852 gText_CommunicationStandby4
	.globl gText_Rom_5CCE99
gText_Rom_5CCE99: @ 0x085CCE99
	.string "つうしん たいきちゅう$"
	.if (. - gText_Rom_5CCE99) > 0xc
	.error "gText_Rom_5CCE99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE99) < 0xc
	.space 0xc - (. - gText_Rom_5CCE99)
	.endif
