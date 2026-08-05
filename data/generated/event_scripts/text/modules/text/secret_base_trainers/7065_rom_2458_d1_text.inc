	@ data/text/secret_base_trainers.inc:148 SecretBase_Text_Trainer4AcceptBattle
	.globl gText_Rom_2458D1
gText_Rom_2458D1: @ 0x082458D1
	.string "きみの じつりょくを みせてくれ!$"
	.if (. - gText_Rom_2458D1) > 0x12
	.error "gText_Rom_2458D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2458D1) < 0x12
	.space 0x12 - (. - gText_Rom_2458D1)
	.endif
