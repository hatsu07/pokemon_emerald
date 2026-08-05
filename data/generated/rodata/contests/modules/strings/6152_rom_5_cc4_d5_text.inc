	@ src/strings.c:714 gText_CommunicationStandby
	.globl gText_Rom_5CC4D5
gText_Rom_5CC4D5: @ 0x085CC4D5
	.string "つうしんたいきちゅう$"
	.if (. - gText_Rom_5CC4D5) > 0xb
	.error "gText_Rom_5CC4D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4D5) < 0xb
	.space 0xb - (. - gText_Rom_5CC4D5)
	.endif
