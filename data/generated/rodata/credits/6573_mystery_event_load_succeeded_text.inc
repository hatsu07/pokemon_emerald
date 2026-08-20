
	.globl gText_MysteryEventLoadSucceeded
gText_MysteryEventLoadSucceeded: @ 0x085CD1FB
	.string "ロードできました{EOS}"
	.if (. - gText_MysteryEventLoadSucceeded) != 0x9
	.error "gText_MysteryEventLoadSucceeded must retain its original byte length"
	.endif
