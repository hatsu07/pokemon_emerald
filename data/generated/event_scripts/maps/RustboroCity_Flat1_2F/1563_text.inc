	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:111 RustboroCity_Flat1_2F_Text_OhYouDontKnowAny
	.globl gText_Rom_203ABC
gText_Rom_203ABC: @ 0x08203ABC
	.string "いい ことば しらないかー\nじゃあ まえの ことばで\lがんばって あやすかー\pおもしろそうな ことば みつけたら\nおじさんに おしえてね$"
	.if (. - gText_Rom_203ABC) > 0x45
	.error "gText_Rom_203ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203ABC) < 0x45
	.space 0x45 - (. - gText_Rom_203ABC)
	.endif
