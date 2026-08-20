	@ data/maps/MossdeepCity_Gym/scripts.inc:429 MossdeepCity_Gym_Text_MauraPostBattle
	.globl gText_Rom_20BBF6
gText_Rom_20BBF6: @ 0x0820BBF6
	.string "がんばった ものには あかるい みらいが\nなまけた ものには ぜつぼうの あしたが\pいんがおうほう……\nすべては じぶんに はねかえる ものよ……{EOS}"
	.if (. - gText_Rom_20BBF6) > 0x4a
	.error "gText_Rom_20BBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BBF6) < 0x4a
	.space 0x4a - (. - gText_Rom_20BBF6)
	.endif
