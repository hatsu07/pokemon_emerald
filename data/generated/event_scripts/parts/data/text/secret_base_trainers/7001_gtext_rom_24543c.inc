	@ data/text/secret_base_trainers.inc:58 SecretBase_Text_Trainer6AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24543C
gText_Rom_24543C: @ 0x0824543C
	.string "ほんきで いくわよ!$"
	.if (. - gText_Rom_24543C) != 0xb
	.error "gText_Rom_24543C must retain its original byte length"
	.endif
