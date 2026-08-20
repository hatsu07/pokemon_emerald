	@ data/maps/OldaleTown/scripts.inc:364 OldaleTown_Text_WaitDontComeInHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E4B44
gText_Rom_1E4B44: @ 0x081E4B44
	.string "あーー!\nこっちに はいらないで くれよ!\pめずらしい ポケモンの あしあとを\nはっけん したんだ!\lスケッチが おわるまで まっててくれよ{EOS}"
	.if (. - gText_Rom_1E4B44) != 0x47
	.error "gText_Rom_1E4B44 must retain its original byte length"
	.endif
