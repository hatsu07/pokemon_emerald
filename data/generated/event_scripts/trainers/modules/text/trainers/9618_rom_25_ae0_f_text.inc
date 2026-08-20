	@ data/text/trainers.inc:578 Route109_Text_DavidPostBattle
	.globl gText_Rom_25AE0F
gText_Rom_25AE0F: @ 0x0825AE0F
	.string "うりゃーっ!!\pふっきんと ポケモンの しょうぶは\nかんけい ないぞーっ!!{EOS}"
	.if (. - gText_Rom_25AE0F) > 0x27
	.error "gText_Rom_25AE0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE0F) < 0x27
	.space 0x27 - (. - gText_Rom_25AE0F)
	.endif
