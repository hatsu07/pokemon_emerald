	@ data/maps/JaggedPass/scripts.inc:202 JaggedPass_Text_EthanPostBattle
	.globl gText_Rom_215ED6
gText_Rom_215ED6: @ 0x08215ED6
	.string "ぼくも ダートじてんしゃ もっていれば\nだんさを とびこえて いけるのにな{EOS}"
	.if (. - gText_Rom_215ED6) > 0x26
	.error "gText_Rom_215ED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215ED6) < 0x26
	.space 0x26 - (. - gText_Rom_215ED6)
	.endif
