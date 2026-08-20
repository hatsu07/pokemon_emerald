	@ data/maps/JaggedPass/scripts.inc:173 JaggedPass_Text_DianaPostBattle
	.globl gText_Rom_215DDE
gText_Rom_215DDE: @ 0x08215DDE
	.string "こんな デコボコしたところ\nじてんしゃで じょうずに のぼっていく\lひとも いるのよ!{EOS}"
	.if (. - gText_Rom_215DDE) > 0x2c
	.error "gText_Rom_215DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215DDE) < 0x2c
	.space 0x2c - (. - gText_Rom_215DDE)
	.endif
