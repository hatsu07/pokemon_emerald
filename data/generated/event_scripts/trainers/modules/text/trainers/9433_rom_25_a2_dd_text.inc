	@ data/text/trainers.inc:305 Route105_Text_FosterDefeated (+1 aliases)
	.globl gText_Rom_25A2DD
gText_Rom_25A2DD: @ 0x0825A2DD
	.string "いわのこと ばかり かんがえて\nポケモン よわいまま だったか……$"
	.if (. - gText_Rom_25A2DD) > 0x22
	.error "gText_Rom_25A2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A2DD) < 0x22
	.space 0x22 - (. - gText_Rom_25A2DD)
	.endif
