	@ data/text/secret_base_trainers.inc:166 SecretBase_Text_Trainer9AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2459E3
gText_Rom_2459E3: @ 0x082459E3
	.string "おもいっきり いくわよ!$"
	.if (. - gText_Rom_2459E3) != 0xd
	.error "gText_Rom_2459E3 must retain its original byte length"
	.endif
