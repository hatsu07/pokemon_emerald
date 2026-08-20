	@ data/maps/FortreeCity_House5/scripts.inc:22 FortreeCity_House5_Text_TreeHousesAreGreat
	.globl gText_Rom_205369
gText_Rom_205369: @ 0x08205369
	.string "ヒワマキの ツリーハウスって さいこう!\nポケモンと いっしょに くらすなら\lいちばんの まちだと おもっているわ!{EOS}"
	.if (. - gText_Rom_205369) > 0x3b
	.error "gText_Rom_205369 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205369) < 0x3b
	.space 0x3b - (. - gText_Rom_205369)
	.endif
