	@ data/text/trainers.inc:1766 Route117_Text_DerekDefeat (+1 aliases)
	.globl gText_Rom_25DF2B
gText_Rom_25DF2B: @ 0x0825DF2B
	.string "ポケモンの よわさも かわらない……$"
	.if (. - gText_Rom_25DF2B) > 0x13
	.error "gText_Rom_25DF2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF2B) < 0x13
	.space 0x13 - (. - gText_Rom_25DF2B)
	.endif
