	@ data/text/trainers.inc:2570 Route123_Text_JonasPostBattle
	.globl gText_Rom_260068
gText_Rom_260068: @ 0x08260068
	.string "つぎは もっと よわそうな トレーナーを\nまちぶせ してみるで ござるよ{EOS}"
	.if (. - gText_Rom_260068) > 0x25
	.error "gText_Rom_260068 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260068) < 0x25
	.space 0x25 - (. - gText_Rom_260068)
	.endif
