	@ data/text/tv.inc:1141 GabbyAndTy_Text_GabbyPreFirstBattle (+1 aliases)
	.globl gText_Rom_252E99
gText_Rom_252E99: @ 0x08252E99
	.string "マリ『おっ こんなところに\nつよそうな トレーナー はっけん!\pよーし カメラを まわして\nインタビュー かいしよ!"
	.byte EOS
	.if (. - gText_Rom_252E99) > 0x3b
	.error "gText_Rom_252E99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252E99) < 0x3b
	.space 0x3b - (. - gText_Rom_252E99)
	.endif
