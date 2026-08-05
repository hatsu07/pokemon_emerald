	@ data/text/secret_base_trainers.inc:169 SecretBase_Text_Trainer9DeclineBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2459F0
gText_Rom_2459F0: @ 0x082459F0
	.string "いつでも わたしの センスを みせるわよ!$"
	.if (. - gText_Rom_2459F0) != 0x16
	.error "gText_Rom_2459F0 must retain its original byte length"
	.endif
