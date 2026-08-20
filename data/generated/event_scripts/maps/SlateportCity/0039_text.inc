	@ data/maps/SlateportCity/scripts.inc:1019 SlateportCity_Text_AquaHasPolicy
	.globl gText_Rom_1DCD5B
gText_Rom_1DCD5B: @ 0x081DCD5B
	.string "おれたち アクアだんの ポリシーは\n「げんち しゅうごう」 そして\l「げんち かいさん」 なんだぜ!{EOS}"
	.if (. - gText_Rom_1DCD5B) > 0x33
	.error "gText_Rom_1DCD5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCD5B) < 0x33
	.space 0x33 - (. - gText_Rom_1DCD5B)
	.endif
