	@ src/strings.c:690 gText_BattlePtsWon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC3EA
gText_Rom_5CC3EA: @ 0x085CC3EA
	.string "かちとった バトルポイント$"
	.if (. - gText_Rom_5CC3EA) != 0xe
	.error "gText_Rom_5CC3EA must retain its original byte length"
	.endif
