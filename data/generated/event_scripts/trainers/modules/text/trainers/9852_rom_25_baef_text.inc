	@ data/text/trainers.inc:911 Route111_Text_HeidiIntro (+1 aliases)
	.globl gText_Rom_25BAEF
gText_Rom_25BAEF: @ 0x0825BAEF
	.string "さばくの なかでも ピクニック!\pどんな ところでも トレーナー いるから\nしょうぶも できるもんね!{EOS}"
	.if (. - gText_Rom_25BAEF) > 0x34
	.error "gText_Rom_25BAEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BAEF) < 0x34
	.space 0x34 - (. - gText_Rom_25BAEF)
	.endif
