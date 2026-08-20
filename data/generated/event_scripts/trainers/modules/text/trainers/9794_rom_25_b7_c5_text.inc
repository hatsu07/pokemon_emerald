	@ data/text/trainers.inc:833 Route110_Text_EdwinRematchPostBattle
	.globl gText_Rom_25B7C5
gText_Rom_25B7C5: @ 0x0825B7C5
	.string "ああ! とにかく めずらしい ポケモン\nぜんぶ ボクの ものに したいよー!{EOS}"
	.if (. - gText_Rom_25B7C5) > 0x27
	.error "gText_Rom_25B7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B7C5) < 0x27
	.space 0x27 - (. - gText_Rom_25B7C5)
	.endif
