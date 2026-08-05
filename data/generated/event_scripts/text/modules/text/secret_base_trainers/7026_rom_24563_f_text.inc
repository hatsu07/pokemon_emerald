	@ data/text/secret_base_trainers.inc:94 SecretBase_Text_Trainer7AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24563F
gText_Rom_24563F: @ 0x0824563F
	.string "それでは おねがいします$"
	.if (. - gText_Rom_24563F) != 0xd
	.error "gText_Rom_24563F must retain its original byte length"
	.endif
