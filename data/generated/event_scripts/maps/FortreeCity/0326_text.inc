	@ data/maps/FortreeCity/scripts.inc:105 FortreeCity_Text_ThisTimeIllBeatWinona
	.globl gText_Rom_1DFF7D
gText_Rom_1DFF7D: @ 0x081DFF7D
	.string "あたしの じまんの ポケモンで\nこんどこそ ナギさんに かってみせるわ!$"
	.if (. - gText_Rom_1DFF7D) > 0x25
	.error "gText_Rom_1DFF7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFF7D) < 0x25
	.space 0x25 - (. - gText_Rom_1DFF7D)
	.endif
