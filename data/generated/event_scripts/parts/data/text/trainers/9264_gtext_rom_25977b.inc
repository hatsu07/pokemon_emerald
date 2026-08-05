	@ data/text/trainers.inc:55 Route103_Text_DaisyDefeated (+1 aliases)
	.globl gText_Rom_25977B
gText_Rom_25977B: @ 0x0825977B
	.string "わたくしの かおりに\nまどわされませんでしたね……"
	.byte EOS
	.if (. - gText_Rom_25977B) > 0x1a
	.error "gText_Rom_25977B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25977B) < 0x1a
	.space 0x1a - (. - gText_Rom_25977B)
	.endif
