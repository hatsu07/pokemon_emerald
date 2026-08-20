	@ data/maps/SlateportCity/scripts.inc:1264 SlateportCity_Text_ExplainBerryPowder
	.globl gText_Rom_1DD69F
gText_Rom_1DD69F: @ 0x081DD69F
	.string "さいきん ポケモンセンターの 2かいの\nダイレクト コーナー というところに\lきのみを つぶす きかいを\lおいて もらったの\pしってた?\pそこで きのみの こなを つくってきて!\pきのみの こなを\nたくさん つくって きてくれたら\lいろいろな くすりを あげるわ{EOS}"
	.if (. - gText_Rom_1DD69F) > 0x84
	.error "gText_Rom_1DD69F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD69F) < 0x84
	.space 0x84 - (. - gText_Rom_1DD69F)
	.endif
