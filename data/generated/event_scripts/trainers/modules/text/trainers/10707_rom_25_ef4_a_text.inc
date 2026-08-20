	@ data/text/trainers.inc:2150 Route120_Text_LorenzoPostBattle
	.globl gText_Rom_25EF4A
gText_Rom_25EF4A: @ 0x0825EF4A
	.string "ポケモンと いっしょに どこまでもいく\nトレーナーの よろこびと いえるだろう!{EOS}"
	.if (. - gText_Rom_25EF4A) > 0x29
	.error "gText_Rom_25EF4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF4A) < 0x29
	.space 0x29 - (. - gText_Rom_25EF4A)
	.endif
