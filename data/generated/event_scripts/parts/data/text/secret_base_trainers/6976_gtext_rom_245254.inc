	@ data/text/secret_base_trainers.inc:22 SecretBase_Text_Trainer5AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245254
gText_Rom_245254: @ 0x08245254
	.string "それじゃ いくわよ!$"
	.if (. - gText_Rom_245254) != 0xb
	.error "gText_Rom_245254 must retain its original byte length"
	.endif
