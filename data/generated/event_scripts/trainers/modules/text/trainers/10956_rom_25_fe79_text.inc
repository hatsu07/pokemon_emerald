	@ data/text/trainers.inc:2519 Route123_Text_DavisIntro (+1 aliases)
	.globl gText_Rom_25FE79
gText_Rom_25FE79: @ 0x0825FE79
	.string "ぼくの おにいちゃんに とってもらった\nじまんの むしポケモンだよ!{EOS}"
	.if (. - gText_Rom_25FE79) > 0x23
	.error "gText_Rom_25FE79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FE79) < 0x23
	.space 0x23 - (. - gText_Rom_25FE79)
	.endif
