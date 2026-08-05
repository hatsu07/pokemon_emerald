	@ src/strings.c:840 gText_CommunicationStandby3
	.globl gText_Rom_5CCDEA
gText_Rom_5CCDEA: @ 0x085CCDEA
	.string "つうしん たいきちゅうです$"
	.if (. - gText_Rom_5CCDEA) > 0xe
	.error "gText_Rom_5CCDEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDEA) < 0xe
	.space 0xe - (. - gText_Rom_5CCDEA)
	.endif
