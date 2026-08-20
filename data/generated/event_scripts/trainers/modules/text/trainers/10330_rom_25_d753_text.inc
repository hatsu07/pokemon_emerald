	@ data/text/trainers.inc:1595 Route116_Text_JerryIntro (+1 aliases)
	.globl gText_Rom_25D753
gText_Rom_25D753: @ 0x0825D753
	.string "トレーナーズ スクールで\nいろいろ べんきょう したからね\lじっせんで たしかめるよ!{EOS}"
	.if (. - gText_Rom_25D753) > 0x2c
	.error "gText_Rom_25D753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D753) < 0x2c
	.space 0x2c - (. - gText_Rom_25D753)
	.endif
