	@ data/text/trainers.inc:100 Route103_Text_LivRematchIntro (+1 aliases)
	.globl gText_Rom_2599BF
gText_Rom_2599BF: @ 0x082599BF
	.string "ルミ『あたしたちは ふたりで ひとり\nいつも いっしょに たたかうんだよ!"
	.byte EOS
	.if (. - gText_Rom_2599BF) > 0x26
	.error "gText_Rom_2599BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2599BF) < 0x26
	.space 0x26 - (. - gText_Rom_2599BF)
	.endif
