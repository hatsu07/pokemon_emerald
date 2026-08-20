	@ data/text/trainers.inc:2198 Route120_Text_ChipPostBattle
	.globl gText_Rom_25F153
gText_Rom_25F153: @ 0x0825F153
	.string "あの おおきな いわ\nわたしは いせき だと おもいたいが\lそれにしては いりぐちが ないね……{EOS}"
	.if (. - gText_Rom_25F153) > 0x31
	.error "gText_Rom_25F153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F153) < 0x31
	.space 0x31 - (. - gText_Rom_25F153)
	.endif
