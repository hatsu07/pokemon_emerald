	@ data/text/trainers.inc:821 Route110_Text_EdwinPostBattle
	.globl gText_Rom_25B730
gText_Rom_25B730: @ 0x0825B730
	.string "みたことのない ポケモンに であうと\nボクの コレクターだましいが もえるなぁ!{EOS}"
	.if (. - gText_Rom_25B730) > 0x29
	.error "gText_Rom_25B730 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B730) < 0x29
	.space 0x29 - (. - gText_Rom_25B730)
	.endif
