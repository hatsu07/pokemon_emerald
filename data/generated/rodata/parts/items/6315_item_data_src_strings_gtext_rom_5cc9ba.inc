	@ src/strings.c:763 gText_CommunicationStandby2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC9BA
gText_Rom_5CC9BA: @ 0x085CC9BA
	.string "  つうしんたいきちゅう$"
	.if (. - gText_Rom_5CC9BA) != 0xd
	.error "gText_Rom_5CC9BA must retain its original byte length"
	.endif
