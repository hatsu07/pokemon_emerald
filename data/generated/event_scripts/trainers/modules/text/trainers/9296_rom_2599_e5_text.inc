	@ data/text/trainers.inc:103 Route103_Text_LivRematchDefeated (+1 aliases)
	.globl gText_Rom_2599E5
gText_Rom_2599E5: @ 0x082599E5
	.string "ルミ『また まけちゃったよぉ\nおねえちゃぁん……"
	.byte EOS
	.if (. - gText_Rom_2599E5) > 0x19
	.error "gText_Rom_2599E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2599E5) < 0x19
	.space 0x19 - (. - gText_Rom_2599E5)
	.endif
