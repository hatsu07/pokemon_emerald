	@ data/text/secret_base_trainers.inc:151 SecretBase_Text_Trainer4DeclineBattle
	.globl gText_Rom_2458E3
gText_Rom_2458E3: @ 0x082458E3
	.string "まぁ そんな ときも あるよね!$"
	.if (. - gText_Rom_2458E3) > 0x11
	.error "gText_Rom_2458E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2458E3) < 0x11
	.space 0x11 - (. - gText_Rom_2458E3)
	.endif
