	@ data/maps/Route104/scripts.inc:1046 Route104_Text_FlowerShopSellingSaplings
	.globl gText_Rom_1E7D17
gText_Rom_1E7D17: @ 0x081E7D17
	.string "この フラワーショップ ちかごろ\nうえきも うって くれるのよ!\pうれしくて たくさん かっちゃった!\nどこに かざろうかしら?{EOS}"
	.if (. - gText_Rom_1E7D17) > 0x41
	.error "gText_Rom_1E7D17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7D17) < 0x41
	.space 0x41 - (. - gText_Rom_1E7D17)
	.endif
