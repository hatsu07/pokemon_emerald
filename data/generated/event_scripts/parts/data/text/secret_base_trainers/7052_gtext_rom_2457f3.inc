	@ data/text/secret_base_trainers.inc:130 SecretBase_Text_Trainer8AcceptBattle
	.globl gText_Rom_2457F3
gText_Rom_2457F3: @ 0x082457F3
	.string "じぶんの ひみつきちで まけられないわ!$"
	.if (. - gText_Rom_2457F3) > 0x15
	.error "gText_Rom_2457F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2457F3) < 0x15
	.space 0x15 - (. - gText_Rom_2457F3)
	.endif
