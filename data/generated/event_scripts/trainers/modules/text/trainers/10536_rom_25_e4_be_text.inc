	@ data/text/trainers.inc:1895 Route118_Text_BarnyPostBattle
	.globl gText_Rom_25E4BE
gText_Rom_25E4BE: @ 0x0825E4BE
	.string "つりを しながら\nポケモン そだてても かてなかった……\lどっちも はんぱ だったのか!?{EOS}"
	.if (. - gText_Rom_25E4BE) > 0x2e
	.error "gText_Rom_25E4BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4BE) < 0x2e
	.space 0x2e - (. - gText_Rom_25E4BE)
	.endif
