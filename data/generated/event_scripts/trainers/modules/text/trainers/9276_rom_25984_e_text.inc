	@ data/text/trainers.inc:73 Route103_Text_LivIntro (+1 aliases)
	.globl gText_Rom_25984E
gText_Rom_25984E: @ 0x0825984E
	.string "ルミ『あたしたちは ふたりで ひとり\nいっしょに たたかうんだよ!"
	.byte EOS
	.if (. - gText_Rom_25984E) > 0x22
	.error "gText_Rom_25984E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25984E) < 0x22
	.space 0x22 - (. - gText_Rom_25984E)
	.endif
