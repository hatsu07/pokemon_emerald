	@ data/text/trainers.inc:2441 Route123_Text_CameronPostRematch
	.globl gText_Rom_25FB62
gText_Rom_25FB62: @ 0x0825FB62
	.string "おくりびやまで しゅぎょうでも しようかな\nこのままじゃ ずっと きみに かてないよ{EOS}"
	.if (. - gText_Rom_25FB62) > 0x2b
	.error "gText_Rom_25FB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FB62) < 0x2b
	.space 0x2b - (. - gText_Rom_25FB62)
	.endif
