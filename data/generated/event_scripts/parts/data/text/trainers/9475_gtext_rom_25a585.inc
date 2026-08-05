	@ data/text/trainers.inc:368 Route105_Text_JosueIntro (+1 aliases)
	.globl gText_Rom_25A585
gText_Rom_25A585: @ 0x0825A585
	.string "なれない およぎで つかれたー\nきばらしに ポケモンしょうぶ じゃい!$"
	.if (. - gText_Rom_25A585) > 0x24
	.error "gText_Rom_25A585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A585) < 0x24
	.space 0x24 - (. - gText_Rom_25A585)
	.endif
