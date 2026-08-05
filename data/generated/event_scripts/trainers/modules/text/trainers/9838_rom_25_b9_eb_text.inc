	@ data/text/trainers.inc:890 Route110_Text_JosephPostBattle
	.globl gText_Rom_25B9EB
gText_Rom_25B9EB: @ 0x0825B9EB
	.string "こんなこと では へこたれないぜェ!\nおれは まけて またひとつ\lいいオトコに なったぜェ!$"
	.if (. - gText_Rom_25B9EB) > 0x2f
	.error "gText_Rom_25B9EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B9EB) < 0x2f
	.space 0x2f - (. - gText_Rom_25B9EB)
	.endif
