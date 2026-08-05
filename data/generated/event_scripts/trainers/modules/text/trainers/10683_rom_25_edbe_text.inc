	@ data/text/trainers.inc:2114 Route120_Text_ColinIntro (+1 aliases)
	.globl gText_Rom_25EDBE
gText_Rom_25EDBE: @ 0x0825EDBE
	.string "そらを とんでいる ポケモンに\nダメージを あたえる ワザを もってる?$"
	.if (. - gText_Rom_25EDBE) > 0x25
	.error "gText_Rom_25EDBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDBE) < 0x25
	.space 0x25 - (. - gText_Rom_25EDBE)
	.endif
