	@ data/text/trainers.inc:605 Route109_Text_EdmondPostBattle
	.globl gText_Rom_25AEE6
gText_Rom_25AEE6: @ 0x0825AEE6
	.string "いつもは もっと つよいんだぞ!\nふなよいで ちょうしが わるいだけだ!\pふなのり だけど……{EOS}"
	.if (. - gText_Rom_25AEE6) > 0x30
	.error "gText_Rom_25AEE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AEE6) < 0x30
	.space 0x30 - (. - gText_Rom_25AEE6)
	.endif
