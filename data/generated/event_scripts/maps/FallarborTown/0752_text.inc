	@ data/maps/FallarborTown/scripts.inc:60 FallarborTown_Text_MyPreciousAzurill
	.globl gText_Rom_1E5F4A
gText_Rom_1E5F4A: @ 0x081E5F4A
	.string "ほら! みてちょうだい!\nわたしの たいせつな ルリリ!\pツヤツヤの ナデナデの フカフカよ!{EOS}"
	.if (. - gText_Rom_1E5F4A) > 0x30
	.error "gText_Rom_1E5F4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F4A) < 0x30
	.space 0x30 - (. - gText_Rom_1E5F4A)
	.endif
