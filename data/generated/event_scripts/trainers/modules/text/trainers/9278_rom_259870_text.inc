	@ data/text/trainers.inc:76 Route103_Text_LivDefeated (+1 aliases)
	.globl gText_Rom_259870
gText_Rom_259870: @ 0x08259870
	.string "ルミ『まけちゃったよぉ おねえちゃぁん……"
	.byte EOS
	.if (. - gText_Rom_259870) > 0x16
	.error "gText_Rom_259870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259870) < 0x16
	.space 0x16 - (. - gText_Rom_259870)
	.endif
