	@ data/maps/Route104/scripts.inc:1039 Route104_Text_DontNeedThisTakeIt
	.globl gText_Rom_1E7CC1
gText_Rom_1E7CC1: @ 0x081E7CC1
	.string "この フラワーショップ ちかごろ\nうえきも うって くれるのよ!\pうれしくて たくさん かっちゃったから\nあたしの しろいハーブは もう いらないわ\lあなた もらってよ!{EOS}"
	.if (. - gText_Rom_1E7CC1) > 0x56
	.error "gText_Rom_1E7CC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7CC1) < 0x56
	.space 0x56 - (. - gText_Rom_1E7CC1)
	.endif
