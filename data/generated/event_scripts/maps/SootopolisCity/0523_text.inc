	@ data/maps/SootopolisCity/scripts.inc:1423 SootopolisCity_Text_GreenOneSettlesThings
	.globl gText_Rom_1E2E7F
gText_Rom_1E2E7F: @ 0x081E2E7F
	.string "あかい ポケモンと あおい ポケモン\nどっちが かつのかと おもったら\lみどりの ポケモンかよ!\pこりゃ だいドンデンがえしだ!{EOS}"
	.if (. - gText_Rom_1E2E7F) > 0x41
	.error "gText_Rom_1E2E7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E7F) < 0x41
	.space 0x41 - (. - gText_Rom_1E2E7F)
	.endif
