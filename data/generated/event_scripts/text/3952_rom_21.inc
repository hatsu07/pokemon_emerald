
	@ trainerbattle-cfg:0x21E3F9 TrainerBattleText_21E47F
	.globl gText_Rom_21E47F
gText_Rom_21E47F: @ 0x0821E47F
	.string "こんなに　ひろいから\nふなぞこで　ポケモンしょうぶ　しても\lだいじょうぶ　だろ？"
	.byte EOS
	.if (. - gText_Rom_21E47F) > 0x29
	.error "gText_Rom_21E47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E47F) < 0x29
	.space 0x29 - (. - gText_Rom_21E47F)
	.endif

	@ trainerbattle-cfg:0x21E3F9 TrainerBattleText_21E4A8
	.globl gText_Rom_21E4A8
gText_Rom_21E4A8: @ 0x0821E4A8
	.string "あにき　まけちまったよ！"
	.byte EOS
	.if (. - gText_Rom_21E4A8) > 0xd
	.error "gText_Rom_21E4A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E4A8) < 0xd
	.space 0xd - (. - gText_Rom_21E4A8)
	.endif
