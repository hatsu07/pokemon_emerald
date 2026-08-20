	@ data/text/trainers.inc:1652 Route116_Text_DawsonIntro (+1 aliases)
	.globl gText_Rom_25DA28
gText_Rom_25DA28: @ 0x0825DA28
	.string "ぼくの ポケモンの\nうつくしい けなみに みとれて\lキミは なにも できない!{EOS}"
	.if (. - gText_Rom_25DA28) > 0x28
	.error "gText_Rom_25DA28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA28) < 0x28
	.space 0x28 - (. - gText_Rom_25DA28)
	.endif
