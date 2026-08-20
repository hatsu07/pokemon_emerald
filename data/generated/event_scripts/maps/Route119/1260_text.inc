	@ data/maps/Route119/scripts.inc:591 Route119_Text_CanYourMonMakeSecretBase
	.globl gText_Rom_1ED7B3
gText_Rom_1ED7B3: @ 0x081ED7B3
	.string "きみの ポケモン\nひみつのちから つかって\lおおきな くさの かたまりに\lひみつきちを つくれるかい?{EOS}"
	.if (. - gText_Rom_1ED7B3) > 0x34
	.error "gText_Rom_1ED7B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED7B3) < 0x34
	.space 0x34 - (. - gText_Rom_1ED7B3)
	.endif
