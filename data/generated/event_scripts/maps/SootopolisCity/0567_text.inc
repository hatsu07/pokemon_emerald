	@ data/maps/SootopolisCity/scripts.inc:1489 SootopolisCity_Text_TryingMeaninglessToPokemon
	.globl gText_Rom_1E3495
gText_Rom_1E3495: @ 0x081E3495
	.string "アオギリ『カイオーガと グラードンは\nどこかへ とびさって しまった\pそして ホウエンの てんきも\nまた もとどおりに なった……\pはは ははは……\pおれたちの やろうと したことは\nポケモンから みれば\lちっぽけなこと だったの かもな……{EOS}"
	.if (. - gText_Rom_1E3495) > 0x7a
	.error "gText_Rom_1E3495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3495) < 0x7a
	.space 0x7a - (. - gText_Rom_1E3495)
	.endif
