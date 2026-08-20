	@ data/text/trainers.inc:3107 Route130_Text_RodneyIntro (+1 aliases)
	.globl gText_Rom_26169F
gText_Rom_26169F: @ 0x0826169F
	.string "うみの ドまんなかで\nトレーナーに であうとは めずらしいな\lイッパツ しょうぶ するか!?{EOS}"
	.if (. - gText_Rom_26169F) > 0x2f
	.error "gText_Rom_26169F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26169F) < 0x2f
	.space 0x2f - (. - gText_Rom_26169F)
	.endif
