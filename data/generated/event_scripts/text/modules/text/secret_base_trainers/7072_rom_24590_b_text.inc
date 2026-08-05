	@ data/text/secret_base_trainers.inc:157 SecretBase_Text_Trainer4PostBattle
	.globl gText_Rom_24590B
gText_Rom_24590B: @ 0x0824590B
	.string "きみも ぼくも もっと つよく なれる!\nおたがいに がんばろうね!$"
	.if (. - gText_Rom_24590B) > 0x23
	.error "gText_Rom_24590B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24590B) < 0x23
	.space 0x23 - (. - gText_Rom_24590B)
	.endif
