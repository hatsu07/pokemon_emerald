	@ src/strings.c:840 gText_CommunicationStandby3
	.globl gText_CommunicationStandby3
gText_CommunicationStandby3: @ 0x085CCDEA
	.string "つうしん たいきちゅうです{EOS}"
	.if (. - gText_CommunicationStandby3) > 0xe
	.error "gText_CommunicationStandby3 may not grow beyond its original slot"
	.endif
	.if (. - gText_CommunicationStandby3) < 0xe
	.space 0xe - (. - gText_CommunicationStandby3)
	.endif
	.globl gText_Rom_5CCDF8
gText_Rom_5CCDF8: @ 0x085CCDF8
	@ Decoded text from ROM range: offset=0x5CCDF8, size=0x3
	.string "てん{EOS}"
