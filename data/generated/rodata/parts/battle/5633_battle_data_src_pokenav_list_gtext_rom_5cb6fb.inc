	@ src/pokenav_list.c:101 gText_PokenavMatchCall_SelfIntroduction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB6FB
gText_Rom_5CB6FB: @ 0x085CB6FB
	.string "じこしょうかい$"
	.if (. - gText_Rom_5CB6FB) != 0x8
	.error "gText_Rom_5CB6FB must retain its original byte length"
	.endif
